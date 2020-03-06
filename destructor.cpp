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

    }

    ~Human()
    {
        cout<<"destructor speaking"<<endl;

    }



};
int main()
{
    Human zahin;

  }

