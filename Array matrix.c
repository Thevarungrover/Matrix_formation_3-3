#include<stdio.h>
main()
{
	// Initialize variables
	int ary[3][3]; // Array for 3*3 matrix
	int i=0,j=0;
	int sum=0; // Variable to store sum of diagonal values
	printf("Enter 9 numbers to create 3*3 matrix :"); 	// Printing some text to give info to user
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 printf("\nelement - [%d] [%d] :",i,j); 	// Printing arrays of elements
			scanf("%d",&ary[i][j]); // Reading input from user
		}
	}
	// Showing matrix formed
	printf("\nThe matrix is :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
	// Finding sum of diagonal elements
	 int rows=3;
	for(i=0;i<rows;++i)
	{
		sum=sum+ary[i][i];	
	}
	// printing sum
	printf("The sum of diagonal elements is %d.",sum);
}
