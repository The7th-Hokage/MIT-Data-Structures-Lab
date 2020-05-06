#include<iostream>
using namespace std;
class doublestack
{
public:
	doublestack()
	{
		top1=-1;
		top2=100;
	}
	void push1(int ele)
	{
		if(++top1==top2)
			cout<<"Stack 1 overflow\n";
		else
			s[top1]=ele;
	}
	void push2(int ele)
	{
		if(--top2==top1)
			cout<<"Stack 2 overflow\n";
		else
			s[top2]=ele;
	}
	int pop1()
	{
		if(top1==-1)
		{
			cout<<"Stack 1 underflow\n";
			return -1;
		}
		else
			return s[top1--];
	}

	int pop2()
	{
		if(top2==100)
		{
			cout<<"Stack 2 overflow\n";
			return -1;
		}
		else
			return s[top2++];
	}

	void display1()
	{
		if(top1==-1)
			cout<<"Stack 1 is empty\n";
		else
		{
			cout<<"Stack 1 : ";
			for(int i=0;i<=top1;i++)
				cout<<s[i];
			cout<<endl;
		}
	}

	void display2()
	{
		if(top2==100)
			cout<<"Stack 2 is empty\n";
		else
		{
			cout<<"Stack 2 : ";
			for(int i=99;i>=top2;i--)
				cout<<s[i];
			cout<<endl;
		}
	}

	int peek1()
	{
		if(top1==-1)
			return -1;
		else
			return s[top1];
	}

	int peek2()
	{
		if(top2==100)
			return -1;
		else
			return s[top2];
	}

private:
	int top1,top2,s[100];
};

int main()
{
	int choice1,choice2,ele;
	doublestack ds;
	while(1)
	{
		cout<<"Enter 1 for Stack1, 2 for Stack2 and 3 to exit\n";
		cin>>choice1;
		if(choice1!=1 && choice1!=2 && choice1!=3)
			cout<<"Enter a valid choice\n";
		else if(choice1==3)
			break;
		else if(choice1==1)
		{
			while(1)
			{
				cout<<"Enter 1 for push 2 for pop 3 for peek, 4 for display and 5 to go back\n";
				cin>>choice2;
				if(choice2!=1 && choice2!=2 && choice2!=3 && choice2!=4 && choice2!=5)
					cout<<"Enter a valid choice\n";
				else if(choice2==5)
					break;
				else
					{
						if(choice2==1)
						{
							cout<<"Enter the element to push\n";
							cin>>ele;
							ds.push1(ele);
						}
						else if(choice2==2)
							cout<<"Popped element : "<<ds.pop1()<<endl;
						else if(choice2==3)
							cout<<"Peeked element : "<<ds.peek1()<<endl;
						else
							ds.display1();
					}
			}
		}
		else if(choice1==2)
		{
			while(1)
			{
				cout<<"Enter 1 for push 2 for pop 3 for peek, 4 for display and 5 to go back\n";
				cin>>choice2;
				if(choice2!=1 && choice2!=2 && choice2!=3 && choice2!=4 && choice2!=5)
					cout<<"Enter a valid choice\n";
				else if(choice2==5)
					break;
				else
					{
						if(choice2==1)
						{
							cout<<"Enter the element to push\n";
							cin>>ele;
							ds.push2(ele);
						}
						else if(choice2==2)
							cout<<"Popped element : "<<ds.pop2()<<endl;
						else if(choice2==3)
							cout<<"Peeked element : "<<ds.peek2()<<endl;
						else
							ds.display2();
					}
			}
		}
	}
	return 0;
}