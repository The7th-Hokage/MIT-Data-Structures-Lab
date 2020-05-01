#include<iostream>
using namespace std;
int main()
{
	int low=0,mid,high,temp,ele,arr[10],n;
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Enter the elements in array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	high=n-1;
	cout<<"Enter the element to be searched\n";
	cin>>ele;

	//Bubblesort algorithm, as binary search requires sorted array
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

	//Binary search algorithm

	while(low<=high)
	{
		mid=(high+low)/2;
		if(arr[mid]==ele)
		{
			cout<<"Element found at : "<<mid+1<<endl;
			return 0;
		}
		else if(arr[mid]>ele)
			high=mid-1;
		else
			low=mid+1;
	}
	cout<<"Element not found\n";
	return 0;
}
