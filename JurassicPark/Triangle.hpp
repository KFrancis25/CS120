//
// Created by kaial on 11/9/2022.
//

#ifndef JURASSICPARK_TRIANGLE_HPP
#define JURASSICPARK_TRIANGLE_HPP

class Triangle {
private:
    double sideLen;
public:
    Triangle(double side);
    Triangle();

    double getArea() const;
    void setSide(double s);
    double getSideLen() const;
};

Triangle::Triangle(double side){
    sideLen = side;
}

Triangle::Triangle(){
    sideLen = 1000;
}

double Triangle::getArea() const{
    return (sideLen * sideLen * sqrt(3) / 4);
}

double Triangle::getSideLen() const{
    return sideLen;
}

void Triangle::setSide(double s){
    sideLen = s;
}

#endif //JURASSICPARK_TRIANGLE_HPP
