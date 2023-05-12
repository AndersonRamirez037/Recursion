#include "main.h"
#include <math.h>
/**
 * _pow_recursion - Function that returns the value of x raised to the power of y. 
 * @x: Base integer 
 * @y: Exponente integer
 * return: the value of x raised to the power of y, or -1 if y is negative, or 1 if y is zero.  
 */
int _pow_recursion(int x, int y){
    if(y < 0){
        return -1; 
    }
    if(y == 0){
        return 1; 
    }
    return(x * _pow_recursion(x, y - 1));
}