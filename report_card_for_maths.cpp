#include<iostream>
#include<string>
using namespace std;
 class Report
 {
     public:
        string name;
        string subject;
        int roll_no;
        int marks;
        string grade;
        int year;
     
 };
 int main()
 {
     Report s1,s2,s3,s4;
     s1.name="Aksh";
     s1.subject="Sub:Maths";
     s1.roll_no=1;
     s1.marks=100;
     s1.grade="A+";
     s1.year=2013;
     
     s2.name="David";
     s2.subject="Sub:Maths";
     s2.roll_no=2;
     s2.marks=80;
     s2.grade="A";
     s2.year=2013;
     
     
     s3.name="Markin";
     s3.subject="Sub:Maths";
     s3.roll_no=3;
     s3.marks=95;
     s3.grade="A";
     s3.year=2013;
     
     s4.name="Quient";
     s4.subject="Sub:Maths";
     s4.roll_no=4;
     s4.marks=60;
     s4.grade="C";
     s4.year=2013;
     
     cout<<"Name:"<<s1.name<<","<<s1.subject<<","<<"Roll no:"<<s1.roll_no<<","<<"Marks:"<<s1.marks<<","<<"Grade:"<<s1.grade<<","<<"Year:"<<s1.year<<endl;
     cout<<"Name:"<<s2.name<<","<<s2.subject<<","<<"Roll no:"<<s2.roll_no<<","<<"Marks:"<<s2.marks<<","<<"Grade:"<<s2.grade<<","<<"Year:"<<s2.year<<endl;
     cout<<"Name:"<<s3.name<<","<<s3.subject<<","<<"Roll no:"<<s3.roll_no<<","<<"Marks:"<<s3.marks<<","<<"Grade:"<<s3.grade<<","<<"Year:"<<s3.year<<endl;
     cout<<"Name:"<<s4.name<<","<<s4.subject<<","<<"Roll no:"<<s4.roll_no<<","<<"Marks:"<<s4.marks<<","<<"Grade:"<<s4.grade<<","<<"Year:"<<s4.year<<endl;
     
     return 0;
 }
