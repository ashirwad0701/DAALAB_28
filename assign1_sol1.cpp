// A program to find the number of zeros
# include<stdio.h>
using namespace std;
int zero(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,1,1,1,1,0,0,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",n);
	int x=zero(arr,n);
	if(x==-1)
	{
		printf("Count of zero is 0\n");
	}
	else
	{
		printf("Count of zero is %d",n-x);
	}
	return 0;
}
