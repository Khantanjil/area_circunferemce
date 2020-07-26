#include <iostream>
#include "mathfunc.h"

using namespace std;

int main(){

    int x;
    std::cout << "What is the radius of the circumference?: ";
    std::cin >> x;
    int area_circle = area_circ(x);
    std::cout << area_circle << std::endl;

}
