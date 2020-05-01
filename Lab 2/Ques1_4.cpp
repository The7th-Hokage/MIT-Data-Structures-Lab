#include<iostream>
using namespace std;
int main()
{
	int pos,lensubstr,i=0,k=0,p=0,lenmainstr;
	string mainstr,substr,newstr;
	cout<<"Enter the main string\n";
	getline(cin,mainstr);
	cout<<"Enter the substring\n";
	getline(cin,substr);
	cout<<"Enter the postion where you want to insert the substring\n";
	cin>>pos;
	while(substr[i]!='\0')
		i++;
	lensubstr=i;
	i=0;
	while(mainstr[i]!='\0')
		i++;
	lenmainstr=i;
	i=0;
	while(p<lensubstr+lenmainstr)
	{
		if(i>=pos-1 && i<pos+lensubstr-1)
		{
				newstr[i]=substr[k];
				k++;
		}
		else
			newstr[i]=mainstr[i-k];
		i++;
		p++;
	}

	cout<<"Concatenated string\n";
	i=0;
	while(newstr[i]!='\0')
	{	cout<<newstr[i];
		i++;
	}
	cout<<endl;
	return 0;
}
