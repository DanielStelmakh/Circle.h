//
// Created by HP on 03.03.2022.
//

#ifndef UNTITLED8_CIRCLE_H
#define UNTITLED8_CIRCLE_H
#include <cmath>

#include "Figure.h"

class Circle: public Figure {

public:
    double radius;

    double square() override{
        return  M_PI * pow(radius,2.0);
    }
    bool check(double x, double y) override{
        if((x*x+y*y)>pow(radius,2.0)){
            return false;
        } else{ return true ;}
    }
    Circle(double r){
        radius=r;
    }
};


#endif //UNTITLED8_CIRCLE_H
