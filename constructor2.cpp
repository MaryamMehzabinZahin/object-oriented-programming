#include <iostream>
#include <string>
using namespace std;
class Human{
private:

        int age;
        string name;

public:



    Human(int age=56)
    {
        cout<<"age constructor speaking"<<endl;
        age=age;
        name="noname";
        cout<<"age ="<<age<<endl<<"name="<<name;
    }



};
int main()
{
    Human zahin;

  }

