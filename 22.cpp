// 22. Write a program defining a class matrix with data element as two dimensional matrix , row and col as integer. Define the 
// member functions read() to read the value of matrices and show() to display the matrix objects. Overload the operator + to add 
// two matrix objects and also overload the operator * to multiply the two matrix objects. Input the two matrices object and compute 
// sum and product of matrices using the operators and show the result.

#include<iostream>
using namespace std;
class matrix{
    int data[3][3];
    public:
    void read(){
        cout<<"Enter values of matrix:";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>data[i][j];
            }
        }
    }

    void show(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    matrix operator +(matrix m){
        matrix n;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                n.data[i][j] = data[i][j] + m.data[i][j];
            }    
        }
        return n;    
    }

    matrix operator *(matrix m){
        matrix n;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                n.data[i][j] = 0;
                for(int k=0;k<3;k++){
                    n.data[i][j] = data[i][k] * m.data[k][j] + n.data[i][j];
                }
            }
        }
        return n;
    }
};

int main(){
    matrix m1,m2,m3,m4;
    m1.read();
    m2.read();
    cout<<"matrix1"<<endl;
    m1.show();
    cout<<"matrix2"<<endl;
    m2.show();
    m3 = m1 + m2;
    cout<<"matrix addn"<<endl;
    m3.show();
    m4 = m1*m2;
    cout<<"matrix mult"<<endl;
    m4.show();
    return 0;
}