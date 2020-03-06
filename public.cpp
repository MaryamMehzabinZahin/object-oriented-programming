#include <iostream>
using namespace std;
class Human{
//private:
public:
        int age;

public:
    void age2()
    {
        age=age-2;
    }
    void display()
    {
        cout<<"age ="<<age;
    }



};
int main()
{
    Human zahin;
    zahin.age=25;
    zahin.age2();
    zahin.display();
}
