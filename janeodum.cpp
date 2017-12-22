
#include <iostream>
#include <string>

using namespace std;

class School {  ///abstract base class

    class SchDetails{

    friend class University; /// making university a friend of SchDetails
    friend class Polytechnic; ///making Polytechnic a friend of SchDetails

public: /// public accessor and mutator functions

    string schName;   /// declaration of SchDetails parameters
    string Location;
    int Year;

public: /// public accessor and mutator functions



    SchDetails(string SN, string L, int Y){

        schName=SN; ///assignment operator
        Location=L;///assignment operator
        Year=Y;///assignment operator
            }

    string getSchName(){

        return schName;
     }
    string getLocation(){

        return Location;
          }
    int getYear(){

        return Year;
      }
    };
public:
    string schName;
    string Location;
    int Year;

SchDetails SC; ///  creating an instance of class SchDetails in School

    School(string SN, string L, int Y):SC(SN,L,Y){   /// constructor declared
         }

    string getSchName() ///getter function
     {
         return schName;
     }

    string getLocation() ///getter function
    {
        return Location;
    }

    int getYear() ///getter function
    {
          return Year;
    }

    virtual void displaySchName() ///Member function declaration /polymorphic function using virtual keyword
    {
        cout<<"school Name:"<<endl;

        cout<< SC.getSchName()<<endl;
    }

    virtual void displayLocation()/// Member function declaration /polymorphic function using virtual keyword
    {
        cout<<"school is located in:"<<endl;

        cout<<SC.getLocation()<<endl;
    }

    virtual void displayYear()///Member function declaration /polymorphic function using virtual keyword
    {
        cout<<"year founded:"<<endl;

        cout<<SC.getYear()<<endl;
    }

    virtual void displayDetails()///Member function declaration/polymorphic function using virtual keyword
    {
        cout<<"school Name:"<<getSchName()<<endl;

        cout<<"school Location:"<<getLocation()<<endl;

        cout<<"Year_established:"<<getYear()<<endl;
    }

    virtual void displaySchDetails()=0;///pure virtual function

};
 class University : public School{

    string schName;
    string Location;
    int Year;
    string Vice;

public:
    University(string SN,string L, int Y, string V ):School(SN,L,Y)
    {

    Vice=V; ///assignment operator

    }

    string getVice()

    {
      return Vice;
    }


    void displaySchName()
    {

    School::displaySchName(); /// calling member function directly with class name


    cout<< "vice chancelor is: "<<Vice<<endl;

    }

    void displaySchDetails()
    {

    School::displayDetails(); /// calling member function directly with class name



    cout<< "vice chancelor is"<<Vice<<endl;


    }

};

   int Num(){
   int SchCode;

        cout << "Enter School code: "<<endl;

		cin >> SchCode;

		if (SchCode>0)

       {
    cout<<"lets get going: "<<endl;
       }
       else
       {

    throw "please input a more valid code";

       }

       if ( SchCode == 0 ) /// here we have used equivalent relational operator, for comparison

      {

				throw 5;

      }

			};

template <class T> ///function template
    inline T SchChoice(T x)
   {

    T show; ///user defined datatype
    show=x;
    return show;
   };


class Polytechnic : public School
{
    string Rector;

public:
    Polytechnic(string SN, string L, int Y, string R):School(SN,L,Y)
    {

        Rector=R;

    }


    void displaySchName()
    {

      School::displaySchName(); /// calling member function directly with class name


      cout<< "Rector: "<<Rector<<endl;

    }

    void displayDetails()
    {

      School::displayDetails(); /// calling member function directly with class name

      cout<< "Rector is"<<Rector<<endl;

    }

    void displaySchDetails()
    {

    School::displayDetails(); /// calling member function directly with class name


    cout<< "Rector is"<<Rector<<endl;

    }

};
 namespace StudentUni{ ///user defined namespace
            int num() {
            int MatricNo;
            cout<<"Are you  a member of either Unilorin, kwasu,OAU  if yes?"<<endl;
            cin>>MatricNo;
            if (MatricNo > 0)
            { cout<<"welcome to my code for modeling a school"<<endl;
            }
            else { throw ("try inputing a valid matricNO");}
            }
            }
    namespace StudentPoly{ ///user defined namespace
            int num() {
            int MatricNo;
            cout<<"Are you  a member of either KwaraPoly, LagosPoly  if yes?"<<endl;
            cin>>MatricNo;
            if (MatricNo > 0)
            { cout<<"welcome to my code for modeling a school"<<endl;
            }
            else { throw "try inputing a valid matricNO";}
            }
            }

int main()
{

    try
     {
        int ques;
        ques=Num();

     }

      catch (int a) ///exception handler

     {
			cout << "An exception occurred!" << endl;

			cout << "Exception number is: " << a << endl;
     }


    cout<< "implementing templates:"<<endl;

     string i;

     string j;

     int y;

     i=SchChoice <string> (i);

     cout<< "enter school choice"<<endl;

     cin >> i ;

     j=SchChoice<string> (j);

     cout<< "enter school Location"<<endl;

     cin>> j;

     y=SchChoice<int>(y);

     cout<< "enter Year established:"<<endl;

     cin >> y;

     cout<<"implementing Namespace"<<endl;



     using namespace StudentPoly;  ///using directives
     using namespace StudentUni;/// using directives



       /// Pointer of class type
       /// Object Pointers with dynamic allocation
       University *Uni1[3]={new University("Unilorin","Ilorin",1945,"Prof. Ambali"), ///derived class pointer

                            new University("Kwasu","Molete",1990,"Prof. Na'Allah"),

                            new University("OAU","Ife",1954,"Prof. Ayobami")};

       Polytechnic *Poly1[3]={new Polytechnic("KwaraPoly","Ilorin",1955,"Dr. Agboola"), ///derived class pointer

                              new Polytechnic("OffaPoly","Offa",1965,"Dr. Ojo"),

                              new Polytechnic("LagosPoly","Lagos",1975,"Dr. Shola")};



        cout<<"displaying instances of polytechnic and university"<<endl;
        Uni1[0]->displaySchName();/// Accessing member with pointer ///late binding occurs
        Uni1[0]->displayLocation();/// Accessing member with pointer
        Uni1[0]->displayYear();/// Accessing member with pointer


        Uni1[1]->displaySchName();/// Accessing member with pointer
        Uni1[1]->displayLocation();/// Accessing member with pointer
        Uni1[1]->displayYear();/// Accessing member with pointer

        Uni1[2]->displaySchName();/// Accessing member with pointer
        Uni1[2]->displayLocation();/// Accessing member with pointer
        Uni1[2]->displayYear();/// Accessing member with pointer


        Poly1[0]->displaySchName();/// Accessing member with pointer /// late binding occurs
        Poly1[0]->displayLocation();/// Accessing member with pointer
        Poly1[0]->displayYear();/// Accessing member with pointer

        Poly1[1]->displaySchName();/// Accessing member with pointer
        Poly1[1]->displayLocation();/// Accessing member with pointer
        Poly1[1]->displayYear();/// Accessing member with pointer

        Poly1[2]->displaySchName();
        Poly1[2]->displayLocation();/// Accessing member with pointer
        Poly1[2]->displayYear();

cout<<"school in the same location are:"<<endl;

for(int i=0; i<3; i++)
{

if((*Uni1[i]).School::SC.getLocation()==(*Poly1[i]).School::SC.getLocation())
     {

     (*Uni1[i]).displaySchName();
     (*Poly1[i]).displaySchName();

     (*Uni1[i]).displayLocation();
     (*Poly1[i]).displayLocation();

     (*Uni1[i]).displayYear();
     (*Poly1[i]).displayYear();


    }

    }

    delete[] Uni1;
    delete[] Poly1;  ///Garbage Collection for an array of elements
    return 0;


};
