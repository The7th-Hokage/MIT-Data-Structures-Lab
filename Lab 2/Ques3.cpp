#include<iostream>
using namespace std;
class times{
public:
	int hour,minute,sec;
	void display(times *t)
	{
		for(int i=0;i<2;i++)
		{
			cout<<"Hour : "<<t[i].hour<<endl;
			cout<<"Minute : "<<t[i].minute<<endl;
			cout<<"Seconds : "<<t[i].sec<<endl;
		}
	}

	times add(times *t)
	{
		times t3;
		t3.hour=t[0].hour+t[1].hour;
		t3.minute=t[0].minute+t[1].minute;
		if(t3.minute>60)
		{
			t3.hour++;
			t3.minute=t3.minute-60;
		}
		t3.sec=t[0].sec+t[1].sec;
		if(t3.sec>60)
		{
			t3.minute++;
			t3.sec=t3.sec-60;
		}
		return t3;
	}

	times difference(times *t)
	{
		times t3;
		int temp1,temp2,result,temp3;
		temp1=t[0].hour*3600+t[0].minute*60+t[0].sec;
		temp2=t[1].hour*3600+t[1].minute*60+t[1].sec;
		if(temp1>temp2)
			result=temp1-temp2;
		else
			result=temp2-temp1;
		t3.hour=result/3600;
		temp3=result-t3.hour*3600;
		t3.minute=temp3/60;
		t3.sec=temp3-t3.minute*60;
		return t3;
	}
};

int main()
{
	times t[2],call,res1;
	int choice;
	cout<<"Enter two instances of class time\n";
	for(int i=0;i<2;i++)
	{
		cout<<"Enter hour\n";
		cin>>t[i].hour;
		cout<<"Enter minute\n";
		cin>>t[i].minute;
		if(t[i].minute>59)
		{
			cout<<"minute cannot be more than 59\n";
			break;
		}
		cout<<"Enter seconds\n";
		cin>>t[i].sec;
		if(t[i].sec>59)
		{
			cout<<"seconds cannot be more than 59\n";
			break;
		}
	}
	cout<<"Enter 1 to add, 2 to find difference between two objects of class time, 3 to display and 4 to exit\n";
	cin>>choice;
	while(choice==1||choice==2||choice==3)
	{
		if(choice==1)
		{
			res1=call.add(t);
			cout<<"After adding : \n";
			cout<<"Hours : "<<res1.hour<<endl;
			cout<<"Minutes : "<<res1.minute<<endl;
			cout<<"Seconds : "<<res1.sec<<endl;
		}
		else if(choice==2)
		{
			res1=call.difference(t);
			cout<<"After calculating difference :\n";
			cout<<"Hours : "<<res1.hour<<endl;
			cout<<"Minutes : "<<res1.minute<<endl;
			cout<<"Seconds : "<<res1.sec<<endl;
		}
		else if(choice==3)
		{
			call.display(t);
		}
		else
			cout<<"Enter a valid choice";
		cout<<"Enter 1 to add, 2 to find difference between two objects of class time, 3 to display and 4 to exit\n";
		cin>>choice;
	}
	return 0;
}
