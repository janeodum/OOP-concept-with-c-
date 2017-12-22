# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;

class Publisher
{
protected:  string PubName, PubPlace;
public:
    void SetDetails()
    {
        cout<<"Enter Publisher's Name"<<endl;
        getline(cin,PubName);
        cout<<"Enter Publisher's Address"<<endl;
         getline(cin,PubPlace);
    }

    void displayDetails()
    {
        cout<<"Publisher's Name: "<<PubName<<endl;
        cout<<"Publisher's Address: "<<PubPlace<<endl;
    }
};

class Writer
{
 protected:
        string WriterName, WriterAddress;
public:
    void SetDetails()
    {
        cout<<"Enter Writer's Name"<<endl;
        getline(cin,WriterName);
        cout<<"Enter Writer's Address"<<endl;
        getline(cin,WriterAddress);
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
    friend  void displayAll(Book &Book1);
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

     void displayDetails()
     {
         Publisher::displayDetails();
         Writer::displayDetails();
         cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;
     }
};

void displayAll(Book & Book1)
{
    cout<<Book1.Title<<" "<<Book1.Pages<<" "<<Book1.Amount<<endl;
     cout<<Book1.WriterName<<" "<<Book1.WriterAddress<<endl;
    cout<<Book1.PubName<<" "<<Book1.PubPlace<<endl;
}

main()
{
    Book B;
   B.SetDetails();
   system("cls");
    //displayDetails();
    displayAll(B);
}


