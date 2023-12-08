#include <iostream>
using namespace std;
class Test
{
private:
    /* data */
    int n = 10;

public:
    void show()
    {
        cout << "the value of n:" << n << endl;
    }
};

main(){
    Test t,t1;
    t.show();
    t1.show();
}
