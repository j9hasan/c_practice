#include <iostream>
#include<string.h>
using namespace std;
class Book
{
private:
    int page;
    float price;
    char name[30];
public:
    void setPage(int p){
        page = p;
    }
    void setPrice(float pr){
        price = pr;
    }
    void setName(char *n){
        strcpy(name,n);
    }
    void display(){
        cout<<"Book: "<<name<<" Page "<<page<<" "<<price<<"$"<<endl;
    }
    string getName(){
        return name;
    }
};
main(){
    Book b;
    cout<<"-----------------book1 data---------------";
    b.setPage(100);
    b.setName("Game of thrones");
    b.setPrice(300);
    b.display();
    cout<<b.getName();
}