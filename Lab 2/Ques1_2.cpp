#include<iostream>
using namespace std;
int main()
{
	int l1=0,l2=0;
	string s1,s2,s3;
	cout<<"Enter the first string\n";
	getline(cin,s1);
	cout<<"Enter the second string\n";
	getline(cin,s2);
	while(s1[l1]!='\0')
	{
		s3[l1]=s1[l1];
		l1++;
	}
	s3[l1]=' ';
	l1++;
	while(s2[l2]!='\0')
	{
		s3[l1+l2]=s2[l2];
		l2++;
	}
	s3[l1+l2]='\0';
	cout<<"Concatenated String : \n";
	l1=0;
	while(s3[l1]!='\0')
	{
		cout<<s3[l1];
		l1++;
	}
	cout<<endl;
	return 0;
}
