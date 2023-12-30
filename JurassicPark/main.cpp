#include <iostream>
#include "Mountains.hpp"

void jurassic() {
    cout << "This program creates two mountains having some "
            "peaks of same size. Then due to a volcano, one peak"
            "gets taller and that is reflected in both mountains" << endl;

    Triangle t1(1000), t2(2500), t3(3200), t4(4000);
    Triangle *t5 = new Triangle(5500);
    Triangle *t6 = new Triangle(6000);

    Mountain Carpathian;
    Mountain Balkan;

    Carpathian.addPeak(&t1);
    Carpathian.addPeak(&t3);
    Carpathian.addPeak(t5);
    Carpathian.addPeak(t6);
    cout << "Len of Carpathians are: " << Carpathian.getLength() << endl;

    Balkan.addPeak(&t1);
    Balkan.addPeak(&t4);
    Balkan.addPeak(t5);
    cout << "Len of Balkans are: " << Balkan.getLength() << endl;

    cout << "Due to some tectonic activity, the peaks "
            "that were 1000 meters now are 1005 meters.";
    t1.setSide(1005);
    cout << "New lenghts are " << endl;
    cout << " Carpathians: " << Carpathian.getLength() << endl;
    cout << " Balkans: " << Balkan.getLength() << endl;

    delete t5;
    delete t6;
}

int main(){

    jurassic();
    cout << "here";

    return 0;
}