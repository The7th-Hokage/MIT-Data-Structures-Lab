#include<iostream>
using namespace std;
int main()
{
	int j,n,arr[10],k,temp;
	cout<<"Enter the number of elements in the array\n";
	cin>>n;
	cout<<"Enter the elements in the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//Insertion sort algo as follows
	for(int i=0;i<n-1;i++)
	{
		j=0;
		if(arr[i]>arr[i+1])
		{
			while(j!=i)
			{
				if(arr[j]>arr[i+1]) //checking from starting elements till we find the element which is greater than the element to be exchanged, as the elements smaller than the target element shall remain placed before the target element.
				{
					temp=arr[i+1];
					k=i;
					while(k>=j) //shifiting array elements by one position
					{
						arr[k+1]=arr[k];
						k--;
					}
					arr[++k]=temp; //putting the target element at it's corrent postion
				}
				else
					j++;
			}

			if(i==j) //in case i becomes equal to j and the element is not placed yet
			{
				if(arr[i]>arr[i+1])
				{
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
		}
	}
	//insertion sort over
	cout<<"Sorted array is as followed : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
