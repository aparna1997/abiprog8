#include<stdio.h>

int main()
{
	int b,h;
	float area;
	
	printf("enter b and h");
	scanf("%d%d",&b,&h);
	if(b>0&&h>0)
	{
	area=(b*h)/2;
	printf("area of a triangle is %f",area);
	}
	else
	{
		printf("error");
	}
	
	return 0;
	}
