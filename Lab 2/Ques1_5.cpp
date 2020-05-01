#include<iostream>
using namespace std;
int main()
{
	int length1,check,i,pos,count1=0;
	string str1,str2;
	cout<<"Enter the string\n";
	getline(cin,str1);
	cout<<"Enter the substring to be deleted\n";
	getline(cin,str2);
	length1=str2.length();
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[0])
		{pos=i;
			for(int j=0;j<length1;j++)
			{
				if(str1[i]!=str2[j])
					break;
				count1++;
				i++;
			}
		}
		if(count1!=length1)
			count1=0;
		else if(count1==length1)
			break;
		i++;
	}
	if(count1==length1)
		check=1;
	else
		check=0;
	if(check)
	{
		cout<<"Deleted String : ";
		i=0;
		while(str1[i]!='\0')
		{
			if (i>=pos && i<=pos+length1)
			{}
			else
				cout<<str1[i];
			i++;
		}
		cout<<endl;
	}
	else
		cout<<"Substring not present\n";
	return 0;
}
