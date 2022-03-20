#include <iostream>

#include "classes/Circle.h"
#include <cstdlib>
#include <ctime>



double RandomNumber();

void findPI(double d, double d1);

using namespace  std;

int main() {

    double n=0.0;
    double N;
    cin>>N;
    double r;
    cin>>r;
    Circle circle=  Circle(r);
    double x,y;
    srand(time(0));
    for(int i=0;i<N;i++) {
        x = RandomNumber();
        y = RandomNumber();
        cout<<x<<endl;
        cout<<y<<endl;
            bool c = circle.check(x, y);
            if (c) {
                n ++;
            }
    }
    findPI(n, N);
    return 0;
}

void findPI(double n,double N) {
    double  pi = n/N*4.0;
    cout<<pi<<endl;
}

double RandomNumber() {
    double a;
    a =(rand()-1.0)/RAND_MAX;
    return a;
}




