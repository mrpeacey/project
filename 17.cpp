#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;

    public:
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    void setter(int l,int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        return length*breadth;
    }
    int getPerimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r;
    r.setter(4,5);
    cout<<"Length:"<<r.getlength()<<endl;
    cout<<"Breadth: "<<r.getbreadth()<<endl;
    cout<<"Area:"<<r.getArea()<<endl;
    cout<<"Perimeter:"<<r.getPerimeter()<<endl;
}