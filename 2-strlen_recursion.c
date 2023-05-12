#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: String to calculate its length
 * return: The length of the string 
 */
int _strlen_recursion(char *s){
    if(*s == '\0'){
        return 0; 
    }
    return _strlen_recursion(s + 1) + 1;
}