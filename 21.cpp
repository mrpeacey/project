// 21. Write a program that uses a class Distance with data member feet and inches and another class String with data member a 
// character string. Overload operator + to add the two object of Distance type as well as to concatenate the two object of String. 
// Show the output of adding Distance and concatenating strings.

#include<iostream>
#include<string.h>
using namespace std;
class Distance{
    int feet,inch;
    public:
    Distance(){
        feet = 0;
        inch = 0;
    }
    Distance(int f,int i){
        feet = f;
        inch = i;
    }
    Distance operator+(Distance d){
        Distance d1;
        d1.feet = feet + d.feet;
        d1.inch = inch + d.inch;
        d1.feet += d1.inch/12;
        d1.inch = d1.inch%12;
        return d1;
    }
    void show(){
        cout<<"Feet:"<<feet<<endl;
        cout<<"Inch:"<<inch<<endl;
    }
};

class String{
    string str;
    public:
    String(){
        str = "";
    }
    String(string s){
        str =s;
    }
    String operator+(String s){
        String s1;
        s1.str = str+s.str;
        return s1;
    }

    void show(){
        cout<<str;
    }
};

int main(){
    Distance d1(2,5),d2(5,9),d3;
    d3 = d1+d2;
    d3.show();

    String s1("Hello"),s2("World"),s3;
    s3 = s1+s2;
    s3.show();
    return 0;
}