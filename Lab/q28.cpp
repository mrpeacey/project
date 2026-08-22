/*28. create a class Writer with pure virtual function write. Create classes Pen and Pencil inheriting
writer. Create a standalone function writingKit with reference of Writer. Use this function to write
with Pen or Pencil.*/
#include<iostream>
using namespace std;
class Writer {
    public:

    virtual void write() = 0;
};
void writingKit (Writer &w)
    {
        w.write();
    }
class Pen: public Writer {
    public:
    void write()
    {
        cout << "writing with pen";
    }

    
};
class Pencil: public Writer {
    public:
    void write()
    {
        cout << "writing with pencil";
    }
\
};
int main()
{
    Pen p1;
    Pencil pl1;
    writingKit(p1);
    writingKit(p1);
    return 0;
}