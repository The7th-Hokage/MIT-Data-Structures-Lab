#include<iostream>
using namespace std;
int main()
{
	int l1=0,check=0,length1=0,length2=0;
	string str1,str2;
	cout<<"Enter the first string\n";
	getline(cin,str1);
	cout<<"Enter the second string\n";
	getline(cin,str2);
	while(str1[l1]!='\0')
		l1++;
	length1=l1;
	l1=0;
	while(str2[l1]!='\0')
		l1++;
	length2=l1;
	l1=0;
	while(str1[l1]!='\0' && str2[l1]!='\0')
	{
		if(int(str1[l1])<int(str2[l1]))
		{
			cout<<"String 1<String 2"<<endl;
			break;
		}
		else if(int(str1[l1])>int(str2[l1]))
		{
			cout<<"String 1>String 2"<<endl;
			break;
		}
		else
		{}
		check++;
		l1++;
	}
	if(length1==length2 && check==length1)
	{
		cout<<"Both the strings are equal\n";
		return 0;
	}
	if(check==length1)
		cout<<"String 1<String 2"<<endl;
	else if(check==length2)
		cout<<"String 1>String 2"<<endl;
	return 0;
}
