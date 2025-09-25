/*
Name:Thuku Nancy Wanjira
Reg No:CT101/G/26488/25
Date:20/9/25
Description:Bank Qualifications
*/#include<stdio.h>
int main()
{
int age,annual_income;
printf("enter age :");
scanf("%d",&age);

printf("enter annual income :");
scanf("%d",&annual_income);

if(age >=21 &&annual_income >=21000) {
	printf("Congratulationsyou qualify for a loan\n");
} else {
	printf("Unfortunately, we are nable to offer you a loan at this time");}
	return 0;
}