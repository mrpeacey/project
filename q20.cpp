#include<iostream>
class Time{
    int hr,min,sec;
    public:
     Time()
     {
        hr=1;
        min=20;
        sec=33;
     }
     void operator++ ()
     {
        ++sec;
     }
     void operator ++(int)//for the post increment dummy int is required
     {
       
       sec++;

     }
     void display()
     {
        std::cout << " hr: "<< hr << "min: "<< min << "sec: "<<sec;
     }
};
int main()
{
    Time t1;
    t1.display();
    ++t1;
    t1.display();
    t1++;
    t1.display();

    return 0;
}