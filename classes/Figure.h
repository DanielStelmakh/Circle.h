//
// Created by HP on 03.03.2022.
//

#ifndef UNTITLED8_FIGURE_H
#define UNTITLED8_FIGURE_H


class Figure {
public: int x;int y;int z;

    virtual double square(double r) = 0;


    virtual bool check(double x,double y,double r) = 0;

};


#endif //UNTITLED8_FIGURE_H
