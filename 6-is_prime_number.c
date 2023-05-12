#include "main.h"
/**
 *
 *
 *
 */
int is_prime(int n, int i){
    if(n <= i){
        return 0; 
    }
    if(n % i == 0 && i > 1){
        return 0; 
    }
    if((n / i) < i){
        return 1; 
    }
    return(is_prime(n,i + 1));
}
int is_prime_number(int n){
    return is_prime(n, 2);
}