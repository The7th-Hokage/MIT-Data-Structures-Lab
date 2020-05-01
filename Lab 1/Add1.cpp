#include<iostream>
using namespace std;
int main()
{
	int arr1[10][10],arr2[10][10],row1,col1,row2,col2;
	cout<<"Enter row and column for Matrix1\n";
	cin>>row1>>col1;
	cout<<"Enter the first matrix\n";
	for(int i=0;i<row1;i++)
		for(int j=0;j<col1;j++)
			cin>>arr1[i][j];
	cout<<"Enter row and column for Matrix2\n";
	cin>>row2>>col2;
	if(row1!=row2 || col1!=col2)
	{
		cout<<"Both the matrix should have same dimensions\n";
		return 0;
	}
	else
	{
		cout<<"Enter the second matrix\n";
		for(int i=0;i<row2;i++)
			for(int j=0;j<col2;j++)
				cin>>arr2[i][j];
		cout<<"Matrix1 : "<<endl;
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
				cout<<arr1[i][j]<<" ";
			cout<<endl;
		}
		cout<<"Matrix2 : "<<endl;
		for(int i=0;i<row2;i++)
		{
			for(int j=0;j<col2;j++)
				cout<<arr2[i][j]<<" ";
			cout<<endl;
		}

		cout<<"Matrix3 : \n";
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
			{
				if(arr1[i][j]>arr2[i][j])
					cout<<arr1[i][j]<<" ";
				else
					cout<<arr2[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
