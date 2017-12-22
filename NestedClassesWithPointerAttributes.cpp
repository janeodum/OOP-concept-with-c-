# include <iostream>   // An header file for I/O operations
using namespace std;   // For Uniqueness


class Person
{
    class Student
{
    class Date
{
    int day;
    char * month;
    int year;
    // class attributes: they are private by default

    public:

    void ManageDate(int d, char* M, int y)   //// initialization of actual parameters
    {
        day=d;
        month=M;
        year= y;
    }

    Date()   //default constructor
    {
        day=0;
        month="";
        year=0;
    }

    Date(int D, char* m, int Y)
    {
        day=D;
        month=m;
        year =  Y;
    }

    int getDay()
    {
        return day;
    }

    int getYear()
    {return year;
    }

    char * getMonth()
    {
        return month;
    }
};


    //////////// Class Attributes Starts from Here ////////////
    char * FirstName;    // Non-static variable
    string Surname;
    int Age;
    static int Level;  // A static variable
    Date * DOB;    // An instance of class Date as an attribute of class Student

    ///////////////  Class Attributes  Ends Here ///////////////
    // The class attributes are public by default////////

public:  //// change of access mode modifier from private to public

   Student()
   {

   }
    Student(int D, char* m, int Y):DOB(new Date(D,m,Y))
    {
        FirstName="";
        Surname="";
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

     Student(char * FName, Date *D)  //// constructor with one argument/parameter
    {
        FirstName=FName;
        Surname="";
        DOB=D;
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

    Student(char * FName, string SName,int D, char* m, int Y):DOB (new Date(D,m,Y)) //// constructor with two arguments/parameters
    {
        FirstName=FName;
        Surname=SName;
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

    Student(char * FName, string SName, int age)  //// constructor with two arguments/parameters
    {
        FirstName=FName;
        Surname=SName;
        Age=age;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }
    void SetFullNames(char * FName, string SName)
    {
        FirstName = FName;
        Surname = SName;
    }
    void SetAge(int age)
    {
        Age=age;
    }
    /////// User-defined functions  to initialize class attributes

    char * GetFName()
    {
        return FirstName;
    }
    string GetSName()
    {
        return Surname;
    }
    int GetAge()
    {
        return Age;
    }
    int GetLevel()
    {
        return Level;
    }
    /////////////// User-defined functions to return initialized class attributes
    //////////////  to the caller

    void displayFullName()
    {
        cout<<GetFName()<<" "<<GetSName()<<endl;
    }

    void displayParameters()
    {
        cout<<GetFName()<<endl;
        cout<<GetSName()<<endl;
        cout<<GetAge()<<endl;
        cout<<GetLevel()<<endl;
    }

    Date* GetDate()
    {
        return DOB;
    }
};

    Student * UniStudent;
    string Address;

public:
    Person(Student * U, string add):UniStudent(U)
    {
        Address = add;
    }

    Person(char * FName, string SName,int D, char* m, int Y, string Add):UniStudent (new Student(FName, SName,(D,m,Y)))
           {
                Address=Add;
           }
    string GetAddress(){return Address;}

    Student * GetStudent(){return UniStudent;}

    void display()
    {
        UniStudent->displayParameters();
        cout<<GetAddress()<<endl;
    }
};

int Person::Student :: Level = 100;    //  Initialization of class variable



