
# include <iostream>   // An header file for I/O operations
using namespace std;   // For Uniqueness

class Student
{   //////////// Class Attributes Starts from Here ////////////
    char * FirstName;    // Non-static variable
    string Surname;
    int Age;
    static int Level;  // A static variable

    ///////////////  Class Attributes  Ends Here ///////////////
    // The class attributes are public by default////////

public:  //// change of access mode modifier from private to public

    Student()  //// default constructors
    {
        FirstName="";
        Surname="";
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

     Student(char * FName)  //// constructor with one argument/parameter
    {
        FirstName=FName;
        Surname="";
        Age=0;
        Level = 150;  /* This is an assignment statement for class variable Level
                        A class variable can be reassigned a value in the class
                       But the initialization must be done outside the class. */
    }

    Student(char * FName, string SName)  //// constructor with two arguments/parameters
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

    Student(Student & std1)
    {
        FirstName = std1.FirstName;
        Surname = std1.Surname;
        Age=std1.Age;
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
};
int Student :: Level = 100;    //  Initialization of class variable

main()
{
    Student CSC_ClassRep("Esther","Abayomi", 89);
    Student TCS_ClassRep(CSC_ClassRep);

    CSC_ClassRep.displayParameters();
    TCS_ClassRep.displayParameters();
}
