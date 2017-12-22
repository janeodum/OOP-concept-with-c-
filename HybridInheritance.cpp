# include<iostream>
using namespace std;

class College
{
    string College_Name, College_Location;
public:
     void SetDetails()
     {
         cout<<"Enter the College Name: ";
         getline(cin,College_Name);
         cout<<"Enter the College Location: ";
         getline(cin,College_Location);
     }

     void displayDetails()
     {
         cout<<"College Name: "<<College_Name<<endl;
         cout<<"College Location: "<<College_Location<<endl;
     }
};

class Department: public College
{
    string Name_of_Department;
public:
    void SetDetails()
    {
        College::SetDetails();
        cout<<"Enter Name of Department: ";
        getline(cin,Name_of_Department);
    }

    void displayDetails()
    {
        College::displayDetails();
        cout<<"Department: "<<Name_of_Department<<endl;
    }
};

class Education
{
     string Degree, University;
 public:
    void SetDetails()
    {
        cout<<"Enter the Name of Your University: ";
        getline(cin,University);
        cout<<"Enter Your Degree: ";
        getline(cin,Degree);
    }

    void displayDetails()
    {
        cout<<"University: "<<University<<endl;
        cout<<"Degree: "<<Degree<<endl;
    }
};

class Lecturer: public Department, public Education
{
    string Lecturer_Name;
public:

    void SetDetails()
    {
        Department::SetDetails();
        Education::SetDetails();
        cout<<"Enter the Lecturer's Name: ";
         getline(cin,Lecturer_Name);
    }

    void displayDetails()
    {
        Department::displayDetails();
        Education::displayDetails();
        cout<<"Lecturer's Name: "<<Lecturer_Name<<endl;
    }
};


