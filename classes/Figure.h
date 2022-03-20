//
// Created by HP on 03.03.2022.
//

#ifndef UNTITLED8_FIGURE_H
#define UNTITLED8_FIGURE_H


class Figure {
public: int x;int y;int z;

    virtual double square() = 0;


    virtual bool check(double x,double y) = 0;

};


#endif //UNTITLED8_FIGURE_H
