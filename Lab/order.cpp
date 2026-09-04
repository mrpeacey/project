#include <iostream>
using namespace std;
class stock
{
public:
    int DigitalProduct = 500;
    int PhysicalProduct = 500;
};
class updatestock
{
public:
    stock s1;
    void updateDp(int n)
    {
        s1.DigitalProduct = s1.DigitalProduct - n;
    }
    void updatePp(int n)
    {
        s1.PhysicalProduct = s1.PhysicalProduct - n;
    }
};
class OrderHistory : public updatestock
{
public:
    void show(int choice, int number)
    {
        if (choice == 1)
        {
            cout << "You have purchased " << number << " "<< "Digital Product";
        }
        else
            cout << "You have purchased " << number << "Digital Product";
    }
};


