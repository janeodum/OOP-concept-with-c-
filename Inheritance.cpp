# include <iostream>
# include <string>
using namespace std;

class School
{
    class SchoolParameters
    {
        string sch_name;
        string location;
        int     year_est;

        public:

        SchoolParameters(string s, string l, int y)
        {
            sch_name=s;
            location=l;
            year_est=y;
        }
        string getSchName()
        {
            return sch_name;
        }
        string getLocation()
        {
            return location;
        }
        int getYear()
        {
            return year_est;
        }
    };
    public:
    SchoolParameters NewSchool;

    School(string s, string l, int y): NewSchool(s,l,y){}
    void displaySchName()
    {
        cout<< NewSchool.getSchName()<<endl;
    }

    void displayLocation()
    {
        cout<<NewSchool.getLocation()<<endl;
    }

    void displayYear()
    {
        cout<<NewSchool.getYear()<<endl;
    }
};

class University: public School
{
    string Vice;
    public:

    University(string s, string l, int y, string VC): School(s,l,y)
    {
        Vice =VC;
    }
    void displaySchName()
    {
        School::displaySchName();
    }
};

class Polytechnic: public School
{
    string Rector;
    public:

    Polytechnic(string s, string l, int y, string Rec): School(s,l,y)
    {
        Rector =Rec;
    }
    void displaySchName()
    {
        School::displaySchName();
    }
};

main()
{
    University * Uni1[3]={new University("Unilorin","Ilorin",1945,"Prof. Ambali"),
                          new University("Kwasu","Molete",1990,"Prof. Na'Allah"),
                          new University("OAU","Ife",1954,"Prof. Ayobami")};
    Polytechnic * Poly1[3]={new Polytechnic("KwaraPoly","Ilorin",1955,"Dr. Agboola"),
                            new Polytechnic("OffaPoly","Offa",1965,"Dr. Ojo"),
                            new Polytechnic("LagosPoly","Lagos",1975,"Dr. Shola")};


    for(int i=0; i<3; i++)
    {
     (*Uni1[i]).displaySchName();
    }

    for(int i=0; i<3; i++)
    {
     (*Poly1[i]).displaySchName();
    }


     for(int i=0; i<3; i++)
    {
     if((*Uni1[i]).School::NewSchool.getLocation()==(*Poly1[i]).School::NewSchool.getLocation())
     {
         (*Uni1[i]).displaySchName();
         Uni1[i]->displaySchName();
         (*Poly1[i]).displaySchName();
     }
    }
}
