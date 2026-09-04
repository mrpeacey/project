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

int main(){
    string name,address;
    cout<<"Enter your details :"<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<endl<<"Address : ";
    cin>>address;
    Customer c(name,address);
    c.showCustomerDetail();
    return 0;
}