#include <iostream>
using namespace std;
class Distance
{
private:
    /* data */
    int km, hr;

public:
    Distance() : km(0), hr(0)
    {
    }
    void get()
    {
        cout << "Enter distance in Km" << endl;
        cin >> km;
        cout << "Enter hours" << endl;
        cin >> hr;
    }
    void show()
    {
        cout << "you travelled " << km << " km at " << km / hr << " km/hr" << endl;
    }
    void totalDistance(Distance pas)
    {
        Distance t;
        t.km = km + pas.km;
        t.hr = hr + pas.hr;
        cout << "total travelled " << t.km << " km" << endl;
        cout << t.hr << " hr" << endl;
    }
};

main()
{
    Distance yourDis, myDis;
    cout << "input your distance" << endl;
    yourDis.get();
    yourDis.show();

    cout << "my distance" << endl;
    myDis.get();
    myDis.show();

    yourDis.totalDistance(myDis);
}
