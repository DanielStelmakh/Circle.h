#include <iostream>

#include "classes/Circle.h"
#include <cstdlib>
#include <ctime>



double RandomNumber(double r, double d, int f);

void findPI(double d, double d1);

using namespace  std;

int main() {

    double n=0.0;
    double N=0.0;
    Circle circle=Circle();


    double r;
    cin>>r;
    double d=(r*-1.0);
    double x,y;
    int f=3;
    srand(time(0));
    for(int i=0;i<10000;i++) {

            x = RandomNumber(r,d,f);
            y = RandomNumber(r,d, f);
            bool c = circle.check(x, y, r);
            if (c) {
                n += 1.0;
                N += 1.0;
            }
            else {
                n += 0.0;
                N += 1.0;
            }
        }
    findPI(n, N);
    return 0;
}

void findPI(double n,double N) {
    double  pi = n/N*4.0;
    cout<<pi<<endl;
}

double RandomNumber(double r, double d, int f) {
    double a;
    a = rand()%(int)pow(10,f);
    a= d + (a / pow(10, f)) * (r - d);
    return a;
}




