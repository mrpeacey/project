// 24. Create a class Animal with data members name, age, color, noOfLegs. Include a method setData() to input data of the class. 
// Create a class Cat inheriting Animal. Also include showData() method in class Cat to show the data.

#include<iostream>
#include<string>
using namespace std;
class Animal{
    protected:
    string name;
    int age,noOfLegs;
    string color;
    public:
    void setData(string n,int a,int l,string c){
        name = n;
        age = a;
        noOfLegs = l;
        color = c;
    }
};
class Cat : public Animal{
    public:
    void show(){
        cout<<name;
        cout<<age;
        cout<<noOfLegs;
        cout<<color;
    }
};

int main(){
    Cat c;
    c.setData("name",2,4,"black");
    c.show();
}