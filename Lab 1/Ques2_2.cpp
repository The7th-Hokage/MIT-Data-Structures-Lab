#include<iostream>
using namespace std;
int main()
{
	int n,arr[10],temp,min,pos;
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Enter the elements in the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//insertion sort algorithm
	for(int i=0;i<n-1;i++)
	{ pos=i;
		min=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			temp=arr[i];
			arr[i]=min;
			arr[pos]=temp;
		}
	}
	cout<<"Sorted array : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
