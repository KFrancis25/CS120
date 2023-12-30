//
// Created by kaial on 11/9/2022.
//
#include <iostream>
#include <math.h>
#include <list>
#include "Triangle.hpp"
using namespace std;


#ifndef JURASSICPARK_MOUNTAINS_HPP
#define JURASSICPARK_MOUNTAINS_HPP
class Mountain{
private:
    list<Triangle*> peaks;
public:
    //Mountain();

    void addPeak(Triangle* p);
    double getLength();
};

void Mountain::addPeak(Triangle* p){
    peaks.push_back(p);
}
double Mountain::getLength(){
    double mountain_len = 0;
    list<Triangle*>::iterator it;

    for( it = peaks.begin(); it != peaks.end(); it++) {
        //cout << *it << ' ';
        mountain_len = mountain_len + 2 * (*it)->getSideLen();
    }
    return mountain_len;
}
#endif //JURASSICPARK_MOUNTAINS_HPP
