// 20. Write a program to increment the object of class Time by a second. The class has data members hour, min and sec. 
// You must overload ++ for pre  and post-increment. Display the value of time during and after increment. Use addTime() to 
// add first two   objects and store the result in the third object. Display the result. 

#include<iostream>
using namespace std;
class Time{
    int hour,minute,second;

    public:
    Time(int h,int m,int s){
        hour = h;
        minute = m;
        second = s;
    }
     Time operator++(){
        ++second;
        return Time(hour,minute,second);

    }
     Time operator++(int){
        second++;
        return Time(hour,minute,second);
    }
    void show(){
        cout<<"Hour:"<<hour<<endl;
        cout<<"Minute:"<<minute<<endl;
        cout<<"Second:"<<second<<endl;
    }
};
int main(){
    Time t1(1,2,3),t2(4,5,6);
    cout<<"Dusing increment";
    t1.show();
    t2.show();
    cout<<"After increment";
    ++t1;
    t2++;
    t1.show();
    t2.show();
    return 0;
}