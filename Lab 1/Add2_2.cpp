#include<iostream>
using namespace std;
int minIndex(int a[],int index,int nminus1)
{
	if(index==nminus1)
		return index;
	int k = minIndex(a,index+1,nminus1);
	return ((a[index]<a[k])? index : k);
}

int recurSelectionSort(int a[],int index, int n)
{
	int temp;
	if(index==n)
		return 0;
	int k=minIndex(a, index, n-1);
	temp=a[index];
	a[index]=a[k];
	a[k]=temp;
	return recurSelectionSort(a,index+1,n);
}

int main()
{
	int a[10],n;
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Enter the numbers in the array\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	recurSelectionSort(a,0,n);
	cout<<"Sorted array : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
