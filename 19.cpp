#include<iostream>
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
    Distance(Distance &d){
        feet = d.feet;
        inch = d.inch;
    }

    Distance& addDistance (Distance &d){
        static Distance temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        temp.feet += temp.inch/12;
        temp.inch %=12;
        return temp;
    }

    Distance* addDistance (Distance *d){
        Distance *d1 = new Distance;
        d1->feet = feet + d->feet;
        d1->inch = inch + d->inch;
        d1->feet += d1->inch/12;
        d1->inch %=12;
        return d1;
    }

    void show(){
        cout<<"Feet:"<<feet<<endl;
        cout<<"Inch:"<<inch<<endl;
    }
};

int main(){
    Distance d0,d1(3,5),d3,*d4;
    Distance d2(d1);
    d3 = d1.addDistance(d0);
    d4 = d1.addDistance(&d2);
    d3.show();
    d4->show();
    return 0;
}