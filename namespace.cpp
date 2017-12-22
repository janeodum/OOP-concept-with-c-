#include<iostream>
#include <typeinfo>
#include <string>

namespace  NS1{

class Academics {
public:
    Academics( std::string ) {}
};

}

namespace NS2 {

class Academics {
public:
    Academics (int) {}
};

}

class Academics:
    public NS1::Academics,
    public NS2::Academics
{
public:
    Academics() :
        NS1::Academics(std::string ("Hello")),
        NS2::Academics(1986)
    {}
};

int main ()
{
    Academics Aca;
    std::cout <<  NS1.Academics () << std::endl;
    std::cout << typeid (NS2::Academics).name () << std::endl;
    std::cout << typeid (Aca).name () << std::endl;
}
