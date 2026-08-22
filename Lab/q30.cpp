#include<iostream>
#include<string.h>
using namespace std;
class birthday {
    private:
    int yr,mon,day;
    public:
     void setter(int y,int m,int d)
    {
        yr=y;
        mon=m;
        day=d;
    }

    int Getyr()
    {
        return yr;
    }
    int Getmon()
    {
        return mon;
    }
    int Getday()
    {
        return day;
    }
};
class person {
    string name;
    birthday b;
    public: void putdata(int i,int j , int k)
    {
        b.setter(i,j,k);
    }

    void display()
    {
        cout <<b.Getyr();
        cout << b.Getmon();
        cout << b.Getday();
    }
};
int main()
{
    person p1;
    p1.putdata(2007,02,05);
    p1.display();

    return 0;
}