#include<iostream>
#include<string>
using namespace std;
class Customer{
    string CustomerName,CustomerAddress;
    public:
    Customer(string n,string a){
        CustomerName = n;
        CustomerAddress = a;
    }
    void showCustomerDetail(){
        cout<<"Customer Name : "<<CustomerName<<endl;
        cout<<"Address : "<<CustomerAddress<<endl;
    }
};

