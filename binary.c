#include<stdio.h>
int main()
{
	int n;
	printf("enter any decimal number");
	scanf("%d",&n);
	binary(n);
	
}
void binary(int n)
{
	if(n==0)
	{
		printf("0");
		
	}
	else{
		binary(n/2);
		printf("%d",n%2);
		
	}
}
