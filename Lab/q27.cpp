#include<iostream>
using namespace std;
class Animal {
    public: virtual void MakeSound(){};
};
class Dog:public Animal {
    public: void MakeSound()
    {
        cout << "Bark"<< endl;
        
    }
};
    class Cat:public Animal {
    public: void MakeSound()
    {
        cout << "Meow" << endl;
        
    }
    

};
int main ()
{
  Animal *ptr;
  Dog d1;
  ptr= &d1;
  ptr -> MakeSound();
  Cat c1;
  ptr= &c1;
  ptr -> MakeSound();
    return 0;
}