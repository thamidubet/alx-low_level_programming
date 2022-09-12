#include <stdio.h> 
  
 /** 
  * main - Print a string 
  * Description: use printf 
  * Return: 0 
  */ 
  
 int main(void) 
 { 
         printf("%s", "with proper grammar, but the outcome is a piece of art,\n"); 
         return (0); 
 }

6-size.c
#include <stdio.h> 
 /** 
  * main - Prints sized of characters 
  * 
  *Return: Always 0 (success) 
  */ 
 int main(void) 
 { 
 printf("Size of a char: %zu byte(s)\n", sizeof(char)); 
 printf("Size of an int: %zu byte(s)\n", sizeof(int)); 
 printf("Size of a long int: %zu byte(s)\n", sizeof(long int)); 
 printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int)); 
 printf("Size of a float: %zu byte(s)\n", sizeof(float)); 
 return (0); 
 }
