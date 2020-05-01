#include<iostream>
using namespace std;
int main()
{
	int row1,row2,col1,col2,ar1[10][10],ar2[10][10],ar3[10][10];
	cout<<"Enter the row and column of Matrix1\n";
	cin>>row1>>col1;
	cout<<"Enter the elements in Matrix1\n";
	for(int i=0;i<row1;i++)
		for(int j=0;j<col1;j++)
			cin>>ar1[i][j];
	cout<<"Enter the row and column of Matrix2\n";
	cin>>row2>>col2;
	if(row1==row2 && col1==col2)
	{
		cout<<"Enter the elements in Matrix2\n";
		for(int i=0;i<row2;i++)
			for(int j=0;j<col2;j++)
				cin>>ar2[i][j];

		cout<<"Matrix1  :\n";
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
				cout<<ar1[i][j]<<" ";
			cout<<endl;
		}

		cout<<"Matrix2 : \n";
		for(int i=0;i<row2;i++)
		{
			for(int j=0;j<col2;j++)
				cout<<ar2[i][j]<<" ";
			cout<<endl;
		}

		cout<<"Resultant Matrix : \n";
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
			{
				ar3[i][j]=ar1[i][j]+ar2[i][j];
				cout<<ar3[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
		cout<<"The matrices of different dimensions cannot be added\n";
	return 0;
}
