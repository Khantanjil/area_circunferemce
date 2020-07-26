/* Module of math functions */
#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int exponent){
    int result = 1;
    for(int i = 0;i<exponent;i++){
        result = result * base;

    }
    return result;
}

int diametro(int r){
    return r*r;
}

int raio(int d){
    return d/2;
}

int area_circ(int r){
    int diametro = power(r,2);
    double areac = M_PI * diametro;
    return areac;

}
