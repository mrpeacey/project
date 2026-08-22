// 28.  create a class Writer with pure virtual function write. Create classes Pen and Pencil inheriting writer. Create a 
// standalone function writingKit with reference of Writer. Use this function to write with Pen or Pencil.

#include<iostream>
using namespace std;
class Writer{
    public:
    virtual void write() = 0;
};

class Pen : public Writer{
    public:
    void write() override{
        cout<<"Writing with pen.";
    }
};

class Pencil : public Writer{
        public:
        void write() override{
            cout<<"Writing with pencil.";
        }
};

void writingkit(Writer &w){
    w.write();    
}

int main(){
    Pen p;
    Pencil pp;
    writingkit(p);
    writingkit(pp);
    return 0;
}