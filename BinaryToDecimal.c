//binary to decimal conversion
#include<stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int n,sum=0,j=0;
	printf("Enter how many terms : > ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the binary Number > ");
	for (int z=0;z<n;z++)
	{
		scanf("%d",&a[z]);

	}
	for (int i = n-1; i >=0; i--)
	{
		sum=sum+a[i]*pow(2,j);
		j=j+1;

	}
	printf("Decimal Number is > %d\n",sum );
	return 0;
}
