#include<iostream>
using namespace std;

class stack
{
public:
	stack()
	{
		top=-1;
	}

	void push(int ele)
	{
		answer[++top]=ele;
	}

	void display()
	{
		for(int i=top;i>-1;i--)
			cout<<answer[i];
		cout<<endl;
	}
private:
	int top,answer[50];
};

int main()
{
	int n,base,quot=0;
	stack s;
	cout<<"Enter the decimal number\n";
	cin>>n;
	cout<<"Enter the base you want to convert it into\n";
	cin>>base;
	while(quot==0 || (quot!=0 && n>=base))
	{
		quot=n%base;
		n=n/base;
		s.push(quot);
		if(n<base)
		{
			s.push(n);
			break;
		}
	}
	cout<<"Answer : ";
	s.display();
	return 0;
}