#include<iostream>
using namespace std;
int main()
{
	int arr[10],ele,n;
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the element to be searched\n";
	cin>>ele;
	for(int j=0;j<n;j++)
	{
		if(arr[j]==ele)
		{
			cout<<"Element found at : "<<j+1<<endl;
			return 0;
		}
	}
	cout<<"Element not found\n";
	return 0;
}
