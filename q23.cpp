#include<iostream>
using namespace std;

class Celsius {
    float c;
    public:
   
    friend void operator << (ostream &out,Celsius &d);
          Celsius(float x)
      {
        c=x;
      }
 
};
 
           void operator << (ostream &out,Celsius &d)
      {
          out << d.c;
      }

class Fahrenheit {
    float f;
    public:
      friend void operator >>(istream &in,Fahrenheit &d);
      friend void operator << (ostream &out,Fahrenheit &d);
   
    
  
    
           operator Celsius()
      {
        return Celsius((f-32)*5/9);
        
      }

 

};
  void operator >>(istream &in ,Fahrenheit &d)
      {
        in >> d.f;
      }
  


int main()
{
    Fahrenheit f1;
    Celsius s1(0);
  cin >> f1;
    
   s1=f1;
  
   cout << s1;
   return 0;
}