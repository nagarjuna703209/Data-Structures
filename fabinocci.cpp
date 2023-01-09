#include<stdio.h>
#include<conio.h>
int main()
{
int first_number = 0, second_number = 1, third_number, i, number;
printf("Enter the number for fibonacci series:");
scanf("%d",&number);
printf("Fibonacci Series for a given number:");
printf("\n%d %d", first_number, second_number); 
for(i = 2; i < number; ++i) 
{
third_number = first_number + second_number;
printf(" %d", third_number);
first_number = second_number;
second_number = third_number;
}
return 0;
}
