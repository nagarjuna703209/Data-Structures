# include<stdio.h>
int main()
{
	int arr[20],size,i,index,key;
	printf("enter the number of elements");
	scanf("%d",&size);
	printf("enter the elemnets");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("enter the element to search");
	scanf("%d",&key);
	for(index=0;index<size;index++)
	if(arr[index]==key)
	break;
	if(index<size)
		printf("found");
	else
		printf("not found");
	
	return 0;
}
