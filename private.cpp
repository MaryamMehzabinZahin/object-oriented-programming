#include <iostream>
using namespace std;
class Human{
private:

        int age;

public:
    void realage(int value)
    {
        age=value;
    }
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
    zahin.realage(25);
    zahin.age2();
    zahin.display();
}
