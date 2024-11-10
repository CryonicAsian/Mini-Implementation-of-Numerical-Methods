#include "MiniFunctionTools.h"
#include <iostream>

MiniFunctionTools::MiniFunctionTools(std::function<double(double)>func) : func(func) {}

double MiniFunctionTools::ForwardDifference(double x, double h) {
    return(func(x + h) - func(x)) / h;
}

double MiniFunctionTools::BackwardDifference(double x, double h){
    return(func(x) - func(x - h)) / h;
}

double MiniFunctionTools::CenteredDifference(double x, double h){
    return(func(x + h) - func(x - h)) / 2 * h;
}

double MiniFunctionTools::LeftHandRectangular(double a, double b, int N){
    double h = (b - a) / N;
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += func(a + i * h);
    }
    return h * sum;
}

double MiniFunctionTools::TrapezoidalRule(double a, double b, int N){
    double h = (b - a) / N;
    double sum = 0.5 * (func(a) + func(b));
    for(int i = 1; i < N; i++){
        sum += func(a + i * h);
    }
    return h * sum;
}