#include<stdio.h>
int main()
{
	float  id,wages,month_work,total_month=0,house_a=0,tax=0,salary=0;
	
	printf("\n Enter Employee ID :");
	scanf("%f",&id);
	
	printf("\n Enter the Per Day Amount Wages :");
	scanf("%f",&wages);
	
	printf("\n Enter the Number Of Day In Month :");
	scanf("%f",&month_work);
	
	printf("\n Enter the Total Month Of WOrks :");
	scanf("%f",&total_month);
	
	salary=wages*month_work*total_month;
	printf("\nEnter Total months Salary=%f, salary");
	
	printf("\nEnter Your House allowance :");
	scanf("%f,&house_a");
	
	house_a=house_a/100*salary;
	printf("\nYour House allowance=%f",house_a);
	
	printf("\nEnter Your Tax");
	scanf("%f",&tax);
	
	tax=tax/100*salary;
	printf("%f",&tax);

	salary=salary-tax-house_a;
	printf("\nYour hand salary=%f",salary);

	return 0;
}