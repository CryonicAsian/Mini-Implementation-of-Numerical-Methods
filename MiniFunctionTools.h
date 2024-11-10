#define MINIFUNCTIONTOOLS_H

#include <functional> 

class MiniFunctionTools {
    public:
    MiniFunctionTools(std::function<double(double)> func);

        double ForwardDifference(double x, double h);
        double BackwardDifference(double x, double h);
        double CenteredDifference(double x, double h);
        double LeftHandRectangular(double a, double b, int N);
        double TrapezoidalRule(double a, double b, int N);

    private:
        std::function<double(double)> func;

};
  