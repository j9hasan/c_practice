#include <iostream>
using namespace std;
class student{
    private:
    int n; /*class data members*/
    public:
    void showRoll(int, char name[10]);/*class member function*/
};
void student::showRoll(int roll,char name[10]){
    cout <<"roll: "<<roll<<" name :" <<name<<endl;
}
int main(){
    student s;
    s.showRoll(1,"Fariya");
}