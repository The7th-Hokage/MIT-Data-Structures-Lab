#include<iostream>
using namespace std;
class stack{
public:
	stack()
	{
		top=-1;
	}
	void push(int ele)
	{
		str[++top]=ele;
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack underflow\n";
			return -1;
		}
		else
			return str[top--];
	}
private:
	char str[10];
	int top;
};
int main()
{
	int i=0,check=0;
	stack s;
	string str;
	cout<<"Enter the expression\n";
	getline(cin,str);
	while(str[i]!='\0')
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			s.push(str[i]);
		else if(str[i]==')' || str[i]=='}' || str[i]==']')
		{
			if(str[i]==')')
			{
				if(s.pop()!='(')
					check++;
			}
			else if(str[i]=='}')
			{
				if(s.pop()!='{')
					check++;
			}
			else if(str[i]==']')
			{
				if(s.pop()!='[')
					check++;
			}
		}
		i++;
	}
	if(check==0)
		cout<<"Paranthesis match\n";
	else
		cout<<"Paranthesis mismatch\n";
	return 0;
}