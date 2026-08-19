#include<iostream>
using namespace std;
class Time {
    int hr,min,sec;
    public:
    friend Time addTime(Time t1, Time t2);
    friend Time* addTime(Time *t1,Time *t2);

    void read()
    {
        cin >> hr >> min >> sec;
    }
    void display()
    {
        cout << " "<< hr<< " " << min <<" "<< sec;
    }
};
Time addTime(Time t1,Time t2)
{
    Time temp;
    temp.hr=t1.hr+t2.hr;
    temp.min=t1.min+t2.min;
    temp.sec=t1.sec+t2.sec;
    return temp;
}
Time* addTime(Time *t1,Time *t2){
    Time *ptr= new Time;
    (*ptr).hr= (*t1).hr+ (*t2).hr;
    (*ptr).min = (*t1).min+ (*t2).min;
    (*ptr).sec= (*t1).sec + (*t2).sec;
    return ptr;

}
int main()
{
    Time t1,t2;
    t1.read();
    t2.read();
    Time t3=addTime(t1,t2);
    Time *t4= addTime(&t1,&t1);

    t3.display();
    t4->display();
    return 0;
}