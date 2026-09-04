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
            cout << "you have purchased " << number << " "<< "Digital Product";
        }
        else
            cout << "you have purchased " << number << "Digital Product";
    }
};

int main()
{
    int choice;
    int number;
    char ch;
    cout << "Do you want to create order(y/n):";
    cin >> ch;
    if (ch == 'y')
    {
        cout << "1.Digital Products \t 2.Physical Product \n";

        cin >> choice;
        if (choice == 1)
        {
            updatestock dp;
            cout << "How many? \n";

            cin >> number;
            dp.updateDp(number);
        }
        else
        {
            updatestock pp;
            cout << "How many ?\n";
            cin >> number;
            pp.updatePp(number);
        }

        OrderHistory oh;
        oh.show(choice, number);
    }
    else
    {
        cout << "ThankYou";
    }
}
