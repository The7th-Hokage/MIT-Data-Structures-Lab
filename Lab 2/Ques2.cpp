#include<iostream>
using namespace std;
class student{
public:
	int rollno,roll,i,choicewithin;
	string name,grade;
	void read(student s[],student read)
	{
		i=0;
		cout<<"Enter the rollno of the student you wish to read the data of\n";
		cin>>roll;
		while(s[i].rollno)
		{
			if(s[i].rollno==roll)
			{	cout<<"Read successfully\n";
				read.name=s[i].name;
				read.grade=s[i].grade;
				read.rollno=s[i].rollno;
				return;
			}
			i++;
		}
		cout<<"Roll number not present\n";
	}

	void display(student s[])
	{
		i=0;
		cout<<"Enter 1 to display data of a specific student and 2 to display the data of all students\n";
		cin>>choicewithin;
		if(choicewithin==1)
		{
			cout<<"Enter the roll number of the student to display the data\n";
			cin>>roll;
			while(s[i].rollno)
			{
				if(s[i].rollno==roll)
				{
					cout<<"Name : "<<s[i].name<<endl;
					cout<<"Roll Number : "<<s[i].rollno<<endl;
					cout<<"Grade : "<<s[i].grade<<endl;
					return;
				}
				i++;
			}
			cout<<"Roll number not present\n";
		}
		else if(choicewithin==2)
		{
			i=0;
			while(s[i].rollno)
			{
				cout<<"Name : "<<s[i].name<<endl;
				cout<<"Roll Number : "<<s[i].rollno<<endl;
				cout<<"Grade : "<<s[i].grade<<endl;
				i++;
			}
		}
		else
			cout<<"Enter a valid choice\n";
	}

	void sort(student s[])
	{
		student temp;
		i=0;
		int len1;
		while(s[i].rollno)
			i++;
		len1=i;
		for(i=0;i<len1;i++)
		{
			for(int j=0;j<len1-1-i;j++)
			{
				if(s[j].rollno>s[j+1].rollno)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
			}
		}
		cout<<"Sorted data according to roll number :\n";
		for(int j=0;j<len1;j++)
		{
			cout<<"Name : "<<s[j].name<<endl;
			cout<<"Roll number : "<<s[j].rollno<<endl;
			cout<<"Grade : "<<s[j].grade<<endl;
		}
	}
};

int main()
{
	int n,choice;
	student s[10],read1,call;
	cout<<"Enter the number of records you want to enter\n";
	cin>>n;
	cout<<"Enter the student records\n";
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		cout<<"Enter name of the student\n";
		getline(cin,s[i].name);
		cout<<"Enter roll number of the student\n";
		cin>>s[i].rollno;
		cout<<"Enter grade of the student\n";
		cin>>s[i].grade;
	}
	cout<<"Enter 1 to read, 2 to display, 3 to sort and 4 to exit\n";
	cin>>choice;
	while(choice==1 || choice==2 || choice==3)
	{
		if(choice==1)
			call.read(s,read1);
		else if(choice==2)
			call.display(s);
		else if(choice==3)
			call.sort(s);
		else if(choice==4)
			break;
		else
			cout<<"Enter a valid choice\n";
		cout<<"Enter 1 to read, 2 to display, 3 to sort and 4 to exit\n";
		cin>>choice;
 	}
	return 0;
}