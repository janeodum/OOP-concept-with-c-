
# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;

class Publisher
{
    protected:
 string PubName, PubPlace;
public:
   virtual void SetPubDetails()
    {
        cout<<"Enter Publisher's Name"<<endl;
        getline(cin,PubName);
        cout<<"Enter Publisher's Address"<<endl;
         getline(cin,PubPlace);
    }


  virtual void displayPubDetails()
   {
        cout<<"Publisher's Name: "<<PubName<<endl;
    cout<<"Publisher's Address: "<<PubPlace<<endl;
    }
};

class Writer : public Publisher
{
    string WriterName, WriterAddress;
public:
    void SetWriterDetails()
    {
        cout<<"Enter Writer's Name"<<endl;
        getline(cin,WriterName);
        cout<<"Enter Writer's Address"<<endl;
        getline(cin,WriterAddress);
    }

    void displayWriterDetails()
    {
         Publisher::displayPubDetails();
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
     void SetBookDetails()
     {
        cout<<"Enter Title: "<<endl;
        getline(cin,Title);
        cout<<"Enter Number of Pages: "<<endl;
        cin>>Pages;
        cout<<"Enter Price of Book: "<<endl;
       cin>>Amount;
     }
     void displayBookDetails()
     {
         Publisher::displayPubDetails();
         cout<<"Title: "<<Title<<endl;
         cout<<"Amount: "<<Amount<<endl;
         cout<<"Number of Pages: "<<Pages<<endl;
     }
};

main()
{

    Writer W;
    Book B;
       Publisher * P1 = &W;
       Publisher *P2 = &B;
        P1->SetPubDetails();
        W.SetWriterDetails();
        P2->SetPubDetails();
        B.SetBookDetails();
        system("cls");
        W.displayPubDetails();
        B.displayPubDetails();



}


