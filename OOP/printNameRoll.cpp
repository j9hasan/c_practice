#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int roll_no;
public:
    void inputData(){
        cout<<"Enter roll no: ";
        cin>>roll_no;
        cout<<"Enter your name: ";
        cin>>name;
    }
    void outputData(){
        cout<<"Your roll: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
main(){
    student s;
    cout<<"----------------------INPUT DATA-----------------------"<<endl;
    s.inputData();
    cout<<"----------------------OUTPUT-----------------------"<<endl;
    s.outputData();
}