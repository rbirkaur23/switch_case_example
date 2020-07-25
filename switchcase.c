#include<stdio.h>

int main()
{
char c;
printf("Enter any character(a,b or c):");
scanf("%c",&c);
switch(c)
{
case "A":
case "a":
  printf("Apple\n");
  break;
case "B":
case "b":
  printf("Mango\n");
  break;
case "C":
case "c":
  printf("Carrot\n");
  break;
default:
  printf("Please enter a,b or c");
return 0;
}

}
