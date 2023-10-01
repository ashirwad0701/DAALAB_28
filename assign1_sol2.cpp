//Divide and conquer solution to find the no. of zeros
#include<stdio.h>
using namespace std;
int countzero(int arr[],int n)
{
	int left=0,right=n-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==1)
		{
			left=mid+1;
		}
		else
		{
			if(mid==0 || arr[mid-1]==1 || arr[mid+1]==1)
			{
			   return n-mid;
			}
			right=mid-1;
	    }
    }
    return 0;
}
int main()
{
	int arr[]={1,1,1,1,1,0,0,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("No of zero is %d",countzero(arr,n));
}
