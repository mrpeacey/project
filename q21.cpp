#include<iostream>
#include<string.h>

class Distance {
    int feet;
    int inch;
    public:
    Distance()
    {
        feet = 0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
     Distance operator +(Distance d)
     {
       this->feet= this->feet + d.feet;
        this->inch=this->inch + d.inch;
        return *this;

     }
     void display()
     {
        std::cout << feet <<std::endl<< inch << std::endl;
      
     }
    

};
class String {
     std::string str;
     public:
       String(){
    str = "hello";
    }
    
    String operator +(String s)
    {
      this->str=this->str+s.str;
      return *this;
    }
    void display()
    {
        std::cout << str;
    }
};
int main()
{
    Distance d1,d2(22,22);
    Distance d3=d1+d2;
    d3.display();
    String s1,s2,s3;
    s3=s1+s2;
    s3.display();

    return 0;
}