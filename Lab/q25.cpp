#include<iostream>
using namespace std;
class Polygon {
    public: int side1,side2,side3;
    void getArea(){};
    void getPerimeter(){};
};
class Rectangle:public Polygon {
    public:
    void setter()
    {
        cin >> side1;
        cin >> side2;
    }
    void getArea()
    {
        cout << side1*side2<< endl;
    }
    void getPerimeter()
    {
        cout << 2*(side1+side2) << endl;
    }

};
class Triangle:public Polygon {
    public: int s= side1+side2+side3/2;
    void setter()
    {
        cin >> side1;
        cin >> side2;
        cin >> side3;
    }
    void getArea()
    { 
        cout << sqrt(s*(s-side1)*(s-side2)*(s-side3)) << endl;
    }
    void getPerimeter()
    {
        cout << s;
    }

};
int main()
{ 
    Rectangle r;
    r.setter();
    r.getArea();
    r.getPerimeter();
    Triangle t;
    t.setter();
    t.getArea();
    t.getPerimeter();
    return 0;
}