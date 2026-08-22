#include<iostream>
#include<string.h>

using namespace std;
class Employee {
    public:
    string name;
    int id;
    void setter(string n,int i)
    {
        name=n;
        id=i;
    }
};
class Company {
    string name;
    Employee *ptr;// company owns employee
    public:
    void setter(string n)
    {
        name = n;
    }
    void setter(Employee *p)
    {
        ptr=p;
    }

    
    void check( )
    {
        cout <<ptr -> name;
        cout << ptr -> id;
    }
};
int main()
{
    Employee e1;
    e1.setter("abc",1);
    Company c;
    c.setter(&e1);
    c.check();
    

    return 0;
}