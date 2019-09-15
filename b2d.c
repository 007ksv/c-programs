#include<stdio.h>
int main()
{
	int i,j,deci,div,rem,a[10];
	printf("Enter decimal value \n");
	scanf("%d",&deci);
	while (1)
	{
		for (i=0;i<10;i++)
		{
			rem=deci%2;
			div=deci/2;
			deci=div;
			a[i]=rem;
			if (div==1)
			{
				a[i+1]=div;
				break;
			}
		}break;
		
		
	}

	for (j=i+1; j>=0; j--)
	{
		printf("%d",a[j]);
	}
}