#include<iostream>
using namespace std;
class Student
{
   public:
     string fullName;
     int rollNum;
     double semPercentage;
     string collegeName;
     int collegeCode;
     Student()
     {
         cout<<"Student class initialised!!\nIam a student\n";
      }
   ~Student(){}
   };
   int main()
   {
   Student sushma;
   cout<<"Enter your name : ";
   getline(cin,sushma.fullName);
   cout<<"Enter your roll number : ";
   cin>>sushma.rollNum;
   cout<<"Enter your sem percentage : ";
   cin>>sushma.semPercentage;
   cout<<"Enter your college name : ";
   cin>>sushma.collegeName;
   cout<<"Enter your college code : ";
   cin>>sushma.collegeCode;
   cout<<"Name : "<<sushma.fullName<<endl;
   cout<<"RollNum : "<<sushma.rollNum<<endl;
   cout<<"SemPercentage : "<<sushma.semPercentage<<endl;
   cout<<"CollegeName : "<<sushma.collegeName<<endl;
   cout<<"CollegeCode : "<<sushma.collegeCode<<endl;
   return 0;
}
