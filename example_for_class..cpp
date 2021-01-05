// Example for using class in cpp//
//Programe for student details//
#include<iostream>
using namespace std;

class student
{
public:
	string name;
	int  SAP_ID;
	int roll_no;
	int age;

};

int main()
{
	student student1;

	student1.name = "aakash";
	student1.SAP_ID = 500075995;
	student1.roll_no = 001;
	student1.age =20;

	cout << "Name of the student is :" << student1.name << endl;
	cout<< "Age of the student is :" <<student1.age<<endl;
	cout << "SAP ID of the student :" << student1.SAP_ID << endl;
	cout << "ROLL no: " << student1.roll_no << endl;

	return 0;

}
