#include "main.h"
/**
 * 
 *
 *
 */
int _sqrt_recursive(int n, int i){
	if (i * i > n){
		return (-1);
	}
	if (i * i == n){
		return (i);
	}
	return (_sqrt_recursive(n, i + 1));
}
int _sqrt_recursion(int n){
	return (_sqrt_recursive(n, 0));
}