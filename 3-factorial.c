#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Number to calculate its factoial
 * return: Factorial of @n. 
 */
int factorial(int n){
    if(n < 0){
        return (-1); 
    }
    if(n == 0){
        return (1); 
    }
    return (n * factoial(n - 1));
}