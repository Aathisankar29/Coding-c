#include<stdio.h>


int main(){
int a;
printf("enter the number");
scanf("%d",&a);
if(a>0)
{
printf("%d is an positive number",a);
}
else if(a<0)
{
printf("%d is an negative number",a);
}
else
{
printf("%d is an equal to zero",a);
}
}
