#include<iostream>
#include<string>
using namespace std;
class Product{
    protected:
    string productName,productCost,productType;

    public:
    Product(){}
    Product(string n , string c , string t){
        productName = n;
        productCost = c;
        productType = t;
    }
};

int main(){
    cout<<"   | Product                           | Cost (USD) | Type     |"<<endl;
    cout<<"   | --------------------------------- | ---------- | -------- |"<<endl;
    cout<<" 1 | Microsoft Office 365 Subscription | $70/year   | Digital  |"<<endl;
    cout<<" 2 | Adobe Photoshop License           | $23/month  | Digital  |"<<endl;
    cout<<" 3 | Netflix Premium Plan              | $23/month  | Digital  |"<<endl;
    cout<<" 4 | Udemy Programming Course          | $15        | Digital  |"<<endl;
    cout<<" 5 | Antivirus Software                | $30/year   | Digital  |"<<endl;
    cout<<" 6 | Laptop                            | $800       | Physical |"<<endl;
    cout<<" 7 | Smartphone                        | $600       | Physical |"<<endl;
    cout<<" 8 | Wireless Mouse                    | $20        | Physical |"<<endl;
    cout<<" 9 | Mechanical Keyboard               | $50        | Physical |"<<endl;
    cout<<" 10| Headphones                        | $75        | Physical |"<<endl;

    int n;
    cout<<"Enter the number to select the product:"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
    {
        Product p("Microsoft Office 365 Subscription","$70/year ","Digital ");
        break;
    }
    case 2:
    {
        Product p("Adobe Photoshop License","$23/month ","Digital ");
        break;
    }
    case 3:
    {
        Product p("Netflix Premium Plan","$23/month ","Digital ");
        break;
    }
    case 4:
    {
        Product p("Udemy Programming Course","$15","Digital ");
        break;
    }
    default:
        break;
    }
}
