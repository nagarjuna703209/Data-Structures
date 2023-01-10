#include<stdio.h>
int main()
{
	int arr[100],n,key,index,i,low,high,mid;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the element to search");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=low+high/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		low=mid+1;
		else
		if(arr[mid]==key)
		{
			printf("found",key,mid+1);
			break;
    	}
		else
		high=mid-1;
		mid=low+high/2;
	}
	if(low>high)
	printf("not found",key);
	return 0;
}
