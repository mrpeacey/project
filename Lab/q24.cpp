#include<iostream>
#include<string.h>
class Animal {
    public:
    std::string name;
    int age;
    std::string color;
    int noOfLegs;
    public:
    void setData()
    {
        std::cin >>name >> age >> color >> noOfLegs;
    }
};
class Cat: public Animal {
    public:
       void ShowData()
    {
        std::cout << name << age << color << noOfLegs;
    }

};
int main()
{
    Cat c;
    c.setData();
    c.ShowData();
    return 0;
}