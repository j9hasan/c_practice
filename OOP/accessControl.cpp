#include <iostream>
using namespace std;
class accessControl
{
private:
    /* data not avilable outside class*/
    /* by default class variables and member func are private unless defined public*/
    int n;
protected:
    /* similar to private but they can accessed by subclass.*/
    /* class is B is enherited by class A, then B is subclass of A */
public:
    void inputData(){
        cout<<"Enter number: ";
        cin>>n;
    }
        void outputData(){
        cout<<"n is: "<<n<<endl;
    }

};
main(){
    accessControl t;
    // t.n = 10;
    t.inputData(); //accessible through member func
    t.outputData();

    
}