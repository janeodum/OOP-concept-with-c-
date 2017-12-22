
# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;

class Publisher    // Abstract Class
{
 string PubName, PubPlace;
 friend class Writer;
 friend class book;
public:
  virtual  void SetDetails()    // Virtual Function
    {
        cout<<"Enter Publisher's Name"<<endl;
        getline(cin,PubName);
        cout<<"Enter Publisher's Address"<<endl;
         getline(cin,PubPlace);
    }


 virtual void displayDetails()   // Virtual Function
   {
        cout<<"Publisher's Name: "<<PubName<<endl;
    cout<<"Publisher's Address: "<<PubPlace<<endl;
    }

    virtual void displayAll()=0;   // Pure Virtual Function
};

class Writer : public Publisher
{
    string WriterName, WriterAddress;
public:
    void SetDetails()
    {
        Publisher::SetDetails();
        cout<<"Enter Writer's Name"<<endl;
        getline(cin,WriterName);
        cout<<"Enter Writer's Address"<<endl;
        getline(cin,WriterAddress);
    }

    void displayDetails()
    {
         Publisher::displayDetails();
        cout<<"Writer's Name: "<<WriterName<<endl;
        cout<<"Writer's Address: "<<WriterAddress<<endl;
    }

    void displayAll()
    {
        Publisher::displayDetails();
        cout<<"Writer's Name: "<<WriterName<<endl;
        cout<<"Writer's Address: "<<WriterAddress<<endl;

    }
};

class Book: public Publisher
{
    string Title;
    int Pages;
    float Amount;
public:
     void SetDetails()
     {
        cout<<"Enter Title: "<<endl;
        getline(cin,Title);
        cout<<"Enter Number of Pages: "<<endl;
        cin>>Pages;
        cout<<"Enter Price of Book: "<<endl;
       cin>>Amount;
     }
     void displayDetails()
     {
         cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;
     }
     void displayAll()
    {
        cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;

    }

};

main()
{

    Writer W;
    Book B;

      Publisher *p2 = &W;  // A pointer to the Abstract Class can always be created
        Publisher *p3 = &B;  // You can create an instance of an abstract class

 p2->SetDetails();
p2->displayDetails();
  p3->SetDetails();
//p2->displayDetails();
 // p2->displayAll();
  //cout<<"  "<<endl;
  //p3->displayAll();

}


