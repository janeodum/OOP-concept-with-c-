# include <iostream>
using namespace std;

class Test
{
    int Number;
public:
   Test(int x){Number = x;}
  // explicit Test(int x){ Number=x;}
    void display(){cout<<" Number = "<<Number<<endl;}
};

main()
{
    Test T(10);
    T.display();
    T=80;   // Conversion character
    T.display();
}
