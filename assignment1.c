#include <stdio.h>
int main()
{
	int a,b,add=0,sub=0,mul=0,div=0;
	
	printf("Enter the first no:" );
    scanf("%d" ,&a );
	
	printf("Enter the second no :");
	scanf( "%d" , &b); 
	 
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	 
	printf("\n Addition,%d",add );
	printf("\n Subtraction,%d ",sub);
	printf("\n Multiplication,%d",mul);
	printf("\n Division,%d",div);
	return 0;	
	
}