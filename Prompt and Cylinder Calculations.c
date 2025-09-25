/*
Name:Thuku Nancy Wajira
Reg No:CT101/G/26488/25
Date:20/9/25
Description:Prompt and Cylinder Calclations
*/
#include<stdio.h>
int main ()
{
//declaration
int radius;
int height;
float pi=3.14;//initiallization

//prompt user to enter radius
printf("enter radius:");
scanf("%d",&radius);

//prompt user to enter height
printf("enter height:");
scanf("%d",&height);

float volume= pi*radius*radius*height;
float surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
printf("radius=%d,height=%d,volume=%.2f,surface_area=%.2f/n", radius,height,volume,surface_area);
return 0;
	
}