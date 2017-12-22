# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;

class Publisher
{
 string PubName, PubPlace;
 friend class Book;  // Friendship between base class and derived class
public:
    void SetDetails()
    {
        cout<<"Enter Publisher's Name"<<endl;
        getline(cin,PubName);
        cout<<"Enter Publisher's Address"<<endl;
         getline(cin,PubPlace);
    }

    Publisher & operator=(Publisher& P)   // Overloading the operator "="
    {
        PubName=P.PubName;
        PubPlace=P.PubPlace;

        return * this;
    }

    void displayDetails()
    {
        cout<<"Publisher's Name: "<<PubName<<endl;
        cout<<"Publisher's Address: "<<PubPlace<<endl;
    }
};

class Writer
{
    string WriterName, WriterAddress;
    friend class Book;   // Friendship between base class and derived class
public:
    void SetDetails()
    {
        cout<<"Enter Writer's Name"<<endl;
        getline(cin,WriterName);
        cout<<"Enter Writer's Address"<<endl;
        getline(cin,WriterAddress);
    }

     Writer & operator=(Writer& W)   // Overloading operator "="
    {
        WriterName=W.WriterName;
        WriterAddress=W.WriterAddress;
        return * this;
    }
    void displayDetails()
    {
        cout<<"Writer's Name: "<<WriterName<<endl;
        cout<<"Writer's Address: "<<WriterAddress<<endl;
    }
};

class Book: public Publisher, public Writer
{
    string Title;
    int Pages;
    float Amount;
public:
     void SetDetails()
     {
         Publisher::SetDetails();
         Writer::SetDetails();
        cout<<"Enter Title: "<<endl;
        getline(cin,Title);
        cout<<"Enter Number of Pages: "<<endl;
        cin>>Pages;
        cout<<"Enter Price of Book: "<<endl;
       cin>>Amount;
     }

     Book& operator = (Book & B)
     {
        //(Publisher) (*this)=B;
        (Writer) (*this)=B;
         Title = B.Title;
         Pages = B.Pages;
         Amount = B.Amount;

         return *this;
     }

     void displayDetails()
     {
         Publisher::displayDetails();
         Writer::displayDetails();
         cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;
     }

     void displayAll()
     {
          cout<<"Publisher's Name: "<<PubName<<endl;
        cout<<"Publisher's Address: "<<PubPlace<<endl;
          cout<<"Writer's Name: "<<WriterName<<endl;
        cout<<"Writer's Address: "<<WriterAddress<<endl;
         cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;

     }
};

main()
{
    Writer W;
    Publisher P;
    Book B;
   B.SetDetails();
    W=B;  // Passing an instance of Derived class Book into an instance of a Base class Writer
    P=B;  // Passing an instance of Derived class into an instance of a Base class Publisher

   system("cls");
    //displayDetails();
    W.displayDetails();
       // P.displayDetails();
}


