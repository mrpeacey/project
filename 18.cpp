// 18. Create a class Time with private integer data members hour, minute, second. Include public methods to 
// read and display data of the objects. Overload the friend function addTime() to pass the object of Time by 
// value and address. One overloaded addTime() returns the resultant object by value and another by address.

#include<iostream>
using namespace std;
class Time{
    int hour,minute,second;

    public:
    void read(){
        cout<<"Enter hour"<<endl;
        cin>>hour;
        cout<<"Enter minute"<<endl;
        cin>>minute;
        cout<<"Enter second"<<endl;
        cin>>second;
    }
    void display(){
        cout<<"Hour:"<<hour<<endl;
        cout<<"Minute:"<<minute<<endl;
        cout<<"Second:"<<second<<endl;
    }
    
    friend Time addTime(Time t,Time t2){
        Time t1;
        t1.hour = t.hour + t2.hour;
        t1.minute = t.minute + t2.minute;
        t1.second = t.second + t2.second;
        if(t1.second>=60){
            t1.minute += t1.second/60;
            t1.second %= 60;
        }
        if(t1.minute >= 60){
            t1.hour += t1.minute/60;
            t1.minute %= 60;
        }
        return t1;
    }

    friend Time *addTime(Time *t,Time *t2){
        Time *t1 = new Time;
        t1->hour = t->hour + t2->hour;
        t1->minute = t->minute + t2->minute;
        t1->second = t->second + t2->second;
        if(t1->second>=60){
            t1->minute += t1->second/60;
            t1->second %= 60;
        }
        if(t1->minute >= 60){
            t1->hour += t1->minute/60;
            t1->minute %= 60;
        }
        return t1;
    }
};

int main(){
    Time t,t1,t2,*t3;
    t.read();
    t.display();
    t1.read();
    t1.display();
    t2 = addTime(t,t1);
    cout<<"By value"<<endl;
    t2.display();
    t3 = addTime(&t,&t1);
    cout<<"By address"<<endl;
    t3->display();
}