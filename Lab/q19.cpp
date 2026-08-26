#include<iostream>

class Distance {
    private: int feet,inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    Distance( Distance &d)
    {
        feet=d.feet;
        inch=d.inch;
    }
    Distance& addDistance(Distance &d)
    {
        static Distance temp;
        temp.feet=d.feet+ d.inch/12;
        temp.inch = d.inch%12;
        return temp;
    }
    Distance* addDistance( Distance *ptr)
    {
           static Distance temp;
           temp.feet= (*ptr).feet + (*ptr).inch/12;
           temp.inch = (*ptr).inch% 12;
           return &temp;
    }
  
   static Distance& addTime(Distance d1,Distance d2)
    {
        static Distance temp;
        temp.feet = d1.feet + d2.feet;
        temp.inch = d1.inch + d2.inch;
        return temp;
       
    }
    void display ()
    {
        std::cout << feet;
        std::cout << inch;
    }

};
int main()
{
    Distance d1(11 ,22);
    Distance d2(d1);
    Distance d3= Distance::addTime(d1,d2);
    d3.display();

  

    return 0;
}