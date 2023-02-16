#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (success)
*/
int main(void)
{
printf("Size of a char; %lu  byte(s)\n", (unassigned long)sizeof(char));
printf("Size of an int; %lu  byte(s)\n", (unassigned long)sizeof(int));
printf("Size of a long int; %lu  byte(s)\n", (unassigned long)sizeof(long int));
printf("Size of a long long int; %lu  byte(s)\n", (unassigned long)sizeof(long long int));
printf("Size of a float; %lu  byte(s)\n", (unassigned long)sizeof(float));
return (0);
}
