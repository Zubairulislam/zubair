#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10] ,i ,sum=0 ;
	float avg;
	printf("enter the  10 numbers:");
	for(i=0;i<10;i++)
	
		scanf("%d",&A[i]);
    
	for(i=0;i<10;i++)
	
		sum=sum+A[i];
	
	avg=sum/10.0;

		printf("avg is %f" , avg);
		return(0);
}
