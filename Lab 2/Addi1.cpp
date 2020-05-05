#include<iostream>
#include<fstream>
using namespace std;
struct studentrecord
{
	string name,grade,branch;
	int rollno;
};
int main()
{
	studentrecord sr[10];
	int n;
	ofstream file1;
	file1.open("StudentRecords.txt",ios::app);
	cout<<"Enter the number of records you want to enter\n";
	cin>>n;
	cout<<"Enter the details now\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Enter name of the student\n";
		cin.ignore();
		getline(cin,sr[i].name);
		file1<<"Name : "<<sr[i].name;
		cout<<"Enter the branch of the student\n";
		getline(cin,sr[i].branch);
		file1<<"\nBranch : "<<sr[i].branch;
		cout<<"Enter the roll number of the student\n";
		cin>>sr[i].rollno;
		file1<<"\nRoll number : "<<sr[i].rollno;
		cout<<"Enter the grade\n";
		cin>>sr[i].grade;
		file1<<"\nGrade : "<<sr[i].grade<<endl;
	}
	file1.close();
	return 0;
}
