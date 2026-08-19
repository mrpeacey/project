// 25. Create a class Polygon with data members side1, side2, and side3. Also include the methods getArea() and getPerimeter(). 
// Leave the body of these methods blank. Create a class Rectangle inheriting Polygon. Include a method to input side1 and side2 
// of the rectangle. Now override methods getArea() and getRectangle() to return area and perimeter of rectangle. Do same thing 
// for class triangle. Now create the objects of Rectangle  and Triangle and display their area and perimeter.

#include<iostream>
#include<cmath>
using namespace std;
class Polygon{
    protected:
    int side1,side2,side3;
    public:
    int getArea(){
    }
    int getPerimeter(){
    }
};
class Rectangle : public Polygon{
    public:
    void setsiderect(int a, int b){
        side1 = a;
        side2 = b;
    }
    int getArea(){
        return side1*side2;
    }
    int getPerimeter(){
        return 2*side1+2*side2;
    }
};
class Triangle : public Polygon{
    public:
    void setsidetri(int a, int b,int c){
        side1 = a;
        side2 = b;
        side3 = c;
    }
    int getArea(){
        int s;
        s = (side1+side2+side3)/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    int getPerimeter(){
        return side1+side2+side3;
    }
};
int main(){
    Rectangle r;
    Triangle t;
    r.setsiderect(3,4);
    t.setsidetri(3,4,5);
    cout<<"Rect area:"<<r.getArea()<<endl;
    cout<<"Rect peri:"<<r.getPerimeter()<<endl;
    cout<<"Tri area:"<<t.getArea()<<endl;
    cout<<"Tri peri:"<<r.getPerimeter()<<endl;
    return 0;
}
