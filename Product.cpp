#include<iostream>
#include<string>
using namespace std;

class Products{
    protected:
    int id;
    string name;
    float price;
    public:
    Products(int i , string n , float p){
        id = i;
        name = n;
        price = p;
    }

    virtual void show(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class physicalProduct : public Products{
    float weight;
    public:
    physicalProduct(int i , string n , float p , float w) : Products(i , n , p){
        weight = w;
    }

    void show(){
        cout<<"Weight : "<<weight<<endl;
    }
};

class digitalProduct : public Products{
    float fileSize;
    public:
    digitalProduct(int i , string n , float p , float f) : Products(i , n , p){
        fileSize = f;
    }

    void show(){
        cout<<"File Size : "<<fileSize<<endl;
    }
};