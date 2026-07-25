#include<iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"_________________________________________________________________\n";
    cout<<"Abhinab Shrestha   Sec:A   Roll_no:13\n";
    cout<<"_________________________________________________________________\n";
    cout<<"Enter a number for division :";
    cin>>num;
    cout<<"Enter the value of n such the it divides the number by 2^n :";
    cin>>n;
    cout<<(num >> n)<<endl;
}