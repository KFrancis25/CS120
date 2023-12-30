#include "Vehicle.hpp"
#include "CarAndAirplane.hpp"
#include <iostream>

// We want to test drive vehicles
// that can be cars or airplanes or helicopters
void TestDriveThis(Vehicle *vehicle)
{
    vehicle->Start();

    float targetSpeed = 150;
    while (vehicle->get_Speed() < targetSpeed)
    {
        // this shows polymorphism: (1) the types of the objects
        // created with new are Car, Airplane, Helicopter
        // but (2) the Accelerate is called from the coreesponing classes NOT
        // from the base class Vehicle, eventhough here vehicle is a pointer
        // to a Vehicle object
        vehicle->Accelerate(70);

        //If you want to call Accelerate from the base class Vehicle
        // use  vehicle->Vehicle::Accelerate(70);
        //vehicle->Vehicle::Accelerate(70);
        cout << "Pedal to the metal\n";
    }
    //You reach the target speed
    vehicle->Stop();
}
/*
int main() {
    // this is an array of pointers to vehicles
    // This grouping of different types (but related by inheritance)
    // is referred to as polymorphism. Here we have a data structure (array)
    // that holds different vehicle types, cool!
    Vehicle* myGarageVehicles[] = {new Car(), new Airplane(),
                                   new Airplane(), new Car(),
                                   new Helicopter(), new Helicopter() };
    // Let's drive all vehicles
    for(int i = 0; i < 6; i++)
    {
        TestDriveThis( myGarageVehicles[i] );
    }
    return 0;

}
*/
int main(){

    Car myCar;
    myCar.Start();
    cout<< "Initial speed of car: "<< myCar.get_Speed()<<endl;
    // here comes code from students
    // Hint: explore these two options:
     myCar.Accelerate(10);
    cout<< "My speed after I accelerate: "<< myCar.get_Speed()<<endl;

     myCar.Vehicle::Accelerate(20);
    cout<< "\nMy speed after I accelerate in Vehicle Class: "<< myCar.get_Speed()<<endl;

    cout << endl << endl;
    cout << "****** This will illustrate polymorphism********" << endl;
    cout << "This is a Vehicle pointer pointing to an Airplane object." << endl;
    Vehicle* myAirForceOne = new Airplane();

    myAirForceOne->Start();

    // here comes code from students
    cout << "Initial speed of AirForceOne: " << myAirForceOne->get_Speed()<< endl;

    myAirForceOne->Accelerate(10);
    cout <<"My speed after accelearte in Airplane class: "<<myAirForceOne->get_Speed();

    cout<< "\nCan I accelerate in Vehicle Class? Yes! Look at me: "<< endl;
    myAirForceOne->Vehicle::Accelerate(10);
    cout<<"\nMy speed after accelerate in Vehicle class: "<<myAirForceOne->get_Speed();

    return 0;
}
