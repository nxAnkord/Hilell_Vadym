#include <math_funcs.h>

float MathFuncs::divide (float numerator, float denominator) {

    if (denominator != 0) {
        return numerator / denominator;
    }
    
}
int MathFuncs::multiply (int first, int second) {

    return first * second;

}
unsigned MathFuncs::square (int base) {    
   
    return base * base;

} 