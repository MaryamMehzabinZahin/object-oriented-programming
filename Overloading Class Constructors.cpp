#include <iostream>
#include <string>
using namespace std;
class Human{
private:

        int age;
        string name;

public:


    Human()
    {
        cout<<"constructor speaking"<<endl;
        age=0;
        name="noname";
        cout<<"age ="<<age<<endl<<"name="<<name;
    }
    Human(int age)
    {
        cout<<"age constructor speaking"<<endl;
        age=age;
        name="noname";
        cout<<"age ="<<age<<endl<<"name="<<name;
    }
     Human(string p)
    {
        cout<<"age constructor speaking"<<endl;
        age=0;
        name=p;
        cout<<"age ="<<age<<endl<<"name="<<name;
    }


};
int main()
{
    Human zahin;
    Human zami(59);
    Human mitu("ppppppppoo");


}

