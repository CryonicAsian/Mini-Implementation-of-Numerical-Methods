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