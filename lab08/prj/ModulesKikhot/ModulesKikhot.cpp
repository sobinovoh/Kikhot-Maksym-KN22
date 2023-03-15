#include <cmath>

float s_calculation(float x, float z){
    return pow(3*sin(sqrt(12*pow(x,2)/log10(x-3))),2)+0.5*z;
}
