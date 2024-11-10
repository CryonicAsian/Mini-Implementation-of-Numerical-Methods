#include "MiniFunctionTools.h"
#include <iostream>
#include <cmath>

double square(double x) {
    return x * x;
}

double sineFunction(double x) {
    return sin(x);
}

int main() {
    MiniFunctionTools squareTool(square);
    MiniFunctionTools sineTool(sineFunction);

    //Test at x = 1.0 and h = 0.1
    double x = 1.0;
    double h = 0.1;
    std::cout << "Forward Difference (Square function at x=1): " << squareTool.ForwardDifference(x, h) << std::endl;
    std::cout << "Backward Difference (Square function at x=1): " << squareTool.BackwardDifference(x, h) << std::endl;
    std::cout << "Centered Difference (Square function at x=1): " << squareTool.CenteredDifference(x, h) << std::endl;

    std::cout << std::endl;

    //Test integration from 0 to 2 with N = 100
    int N = 100;
    std::cout << "Left Hand Rectangular (Square function from 0 to 2): " << squareTool.LeftHandRectangular(0, 2, N) << std::endl;
    std::cout << "Trapezoidal Rule (Square function from 0 to 2): " << squareTool.TrapezoidalRule(0, 2, N) << std:: endl;

    std::cout << std::endl;
    return 0;
}