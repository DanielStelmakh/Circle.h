//
// Created by HP on 03.03.2022.
//

#ifndef UNTITLED8_CIRCLE_H
#define UNTITLED8_CIRCLE_H
#include <cmath>

#include "Figure.h"

class Circle: public Figure {
public:
    double square(double r) override{
        return  M_PI * pow(r,2.0);
    }
    bool check(double x, double y, double r) override{
        if((x*x+y*y)>pow(r,2.0)){
            return false;
        } else{ return true ;}
    }
};


#endif //UNTITLED8_CIRCLE_H
