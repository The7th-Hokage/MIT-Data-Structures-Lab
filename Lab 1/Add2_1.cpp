#include<iostream>
using namespace std;

int BinSearch(int arr[],int n,int low,int high,int mid,int ele)
{
	mid=(low+high)/2;
	if(low>high)
		return -1;
	if(ele==arr[mid])
		return mid;
	else if(ele<arr[mid])
		return BinSearch(arr, n, low, mid-1,mid,ele);
	else
		return BinSearch(arr,n,mid+1,high,mid,ele);
}

int main()
{
	int n,arr[10],low=0,high,mid,ele,answer,temp;
	cout<<"Enter the size of the array\n";
	cin>>n;
	high=n-1;
	cout<<"Enter the elements in the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//sorting the array to input in function
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Enter the element to be searched\n";
	cin>>ele;
	answer=BinSearch(arr,n,low,high,mid,ele);
	if(answer==-1)
		cout<<"Element not found\n";
	else 
		cout<<"Element found at : "<<answer+1<<endl;
	return 0;
}
