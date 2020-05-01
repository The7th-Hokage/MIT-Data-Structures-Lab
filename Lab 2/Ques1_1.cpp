#include<iostream>
using namespace std;
int main()
{
	int l1=0;
	string s1;
	cout<<"Enter the string\n";
	getline(cin,s1);
	while(s1[l1]!='\0')
		l1++;
	cout<<"Length : "<<l1<<endl;
	return 0;
}
