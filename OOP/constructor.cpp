#include <iostream>
using namespace std;
class Test
{
private:
    /* data */
    int n;
public:
    /* constructor */
    Test():n(20)
    {
        cout << "constructor is called" << endl;
    }
    // Test(int num)//parameterized constructor
    // {
    //     n = num;
    // }
    void display()
    {
        cout << "n is " << n;
    }
};
/* constructor defination */

main()
{
    Test t;
    // Test t(30);


    t.display();
}
