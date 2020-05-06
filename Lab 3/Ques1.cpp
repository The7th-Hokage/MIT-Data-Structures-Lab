#include<iostream>
#include<string.h>
using namespace std;
class stack{
public:
	stack()
	{top=-1;}
	void push(int ele)
	{
		if(top<100)
			s[++top]=ele;
		else
			cout<<"Stack overflow\n";
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack underflow\n";
			return -1;
		}
		else
			return s[top--];
	}
	void display()
	{
		if(top==-1)
			cout<<"Stack is empty\n";
		else
		{
			for(int i=top;i>-1;i--)
				cout<<s[i];
		}
		cout<<endl;
	}
private:
	int top;
	char s[100];
};
int main()
{
	stack s;
	int i=0,check1=0,temp;
	string str,check;
	cout<<"Enter the string to be checked\n";
	getline(cin,str);
	while(str[i]!='\0')
	{ 
		check[i]=str[i];	
		i++;
	}
	i=0;
	while(str[i]!='\0')
	{
		s.push(str[i]);
		i++;
	}
	i=0;
	cout<<"Reversed string : ";
	s.display();
	while(check[i+1]!='\0')
	{
		temp=s.pop();
		if(check[i]!=temp)
		{
			check1++;
			break;
		}
		i++;
	}
	if(check1!=0)
		cout<<"It is not a palindrome\n";
	else
		cout<<"It is a palindrome\n";
	return 0;
}