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

};
int main()
{
    Human zahin;


}
