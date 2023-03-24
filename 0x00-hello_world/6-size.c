#include <stdio.h>
/**
 * main -print out sizes of various data types in C
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("sizeof a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("sizeof a int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("sizeof a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("sizeof a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("sizeof a float: %lu bytes(s)\n", (unsigned long)sizeof(e));
return (0);
}
