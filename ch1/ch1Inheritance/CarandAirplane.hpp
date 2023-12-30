//
// Created by kaial on 10/28/2022.
//

#ifndef CH1INHERITANCE_CARANDAIRPLANE_HPP
#define CH1INHERITANCE_CARANDAIRPLANE_HPP

#include "Vehicle.hpp"
#include <iostream>
using namespace std;

// public inheritance allows to inherit all public and
// protected members from the base class as such
class Car : public Vehicle
{
public:
    void Start(){
        speed = 0.0;
        cout << "You properly started this car!" << endl;
    }

    // this overrides the base-class implementation of Accelerate
    virtual void Accelerate(float acc) {
        cout << "[I accelerate in Car class] " << endl;
        speed = speed + acc;
    }

};

class Airplane : public Vehicle
{
public:
    void Start(){
        speed = 5.0;
        cout << "You properly started this airplane!  You rock." << endl;
    }
    // this overrides the base-class implementation of Accelerate
    virtual void Accelerate(float acc) {
        cout << "[I accelerate in Airplane class] "<< endl;
        speed = speed + acc*3;
    }

};

class Helicopter : public Vehicle
{
public:
    void Start(){
        speed = 20.5;
        cout << "You properly start this helicopter.  Is there anything you can't do??" << endl;
    }

    // this overrides the base-class implementation of Accelerate
    virtual void Accelerate(float acc) {
        cout << "[I accelerate in Helicopter class] "<< endl;
        speed = speed + acc*2;
    }

};



#endif //CH1INHERITANCE_CARANDAIRPLANE_HPP
