#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],ca[2][2],r,c,i;
	
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("enter a[%d]=",i);
			scanf("%d",&a[r][c]);
		}
	}
		for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("enter b[%d]=",i);
			scanf("%d",&b[r][c]);
		}
	}
	printf("the first matrix   ==================>\n");
	
		for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("%d ",a[r][c]);
		
		}
		printf("\n");
	}
	    printf("the second matrix   ==================>\n");
	
			for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("%d ",b[r][c]);
		
		}
		printf("\n");
	}
	
			for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			ca[r][c]=a[r][c]+b[r][c];
		
		}
		
	}
	printf("the result is addition of two matrix=>\n");
		for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("%d ",ca[r][c]);
		
		}
		printf("\n");
	}
}
