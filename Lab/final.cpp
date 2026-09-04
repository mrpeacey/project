#include<stdio.h>
#include<string>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<sstream>
#include"order.cpp"
#include"payment.cpp"
#include"Product.cpp"
#include "Customer.cpp"
using namespace std;

int main()
{
    //Customer
     { 
        string name,address;
    cout<<"Enter your details :"<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<endl<<"Address : ";
    cin>>address;
    Customer c(name,address);
    c.showCustomerDetail();
    }
    //Order
    
        int  choice;
    int number;
    char ch;
    cout << "Do you want to create order(y/n):";
    cin >> ch;
    if (ch == 'y')
    {
        cout << "1.Digital Products \t 2.Physical Product \n";

        cin >> choice;
        if (choice == 1)
        {
            updatestock dp;
            cout << "How many? \n";

            cin >> number;
            dp.updateDp(number);
        }
        else
        {
            updatestock pp;
            cout << "How many ?\n";
            cin >> number;
            pp.updatePp(number);
        }

      
    }
    else
    {
        cout << "ThankYou";
    }
   //Product
   {
  string s,str,st;
    showProductList();
    cout<<"Enter the id:"<<endl;
    cin>>s;
    ifstream infile;
    infile.open("productList.csv");

  string id,name,type,filesize, price,weight;
    while(infile>>str){
        if(str == s){
            getline(infile,str);
            cout<<s<<str;
            st = s+str;
         } 
    }
    
   Products *P;
   stringstream ss(st);
                    ss>>id>>name>>price>>type>>weight>>filesize;
                    cout<<id<<endl;
                    cout<<name<<endl;
                    cout<<price<<endl;
                    cout<<type<<endl;
                    cout<<weight<<endl;
                    cout<<filesize<<endl;
        
    
    
    
                  
    if(weight == "-"){
        float p = stof(price);
        float f = stof(filesize);
        P = new digitalProduct(id,name,p,f);
    }
    else{
        float p = stof(price);
        float w = stof(weight);
        P = new physicalProduct(id,name,p,w);
    }

    P->show();
}
  

    //Payment
    { 
        cout << "Choose Your Payment Method" << std::endl;
    cout << setw(25) <<left << "1.Credit Card " << setw(25) << "2.Digital Wallet" << setw(25) << "3.Cash On Delivery" << endl;
    cout << "Enter your choice:";
    cin >> choice;
    switch(choice)
  {
    case 1: 
{CreditCard c;
            c.putdata();
            c.complete();
            break;
}
    case 2:
    { DigitalWallet dw;
            dw.putdata();
            dw.complete();
            break;
    }
    case 3: 
    {CashOnDelivery cod;
            cod.putdata();
            cod.complete();
            break;
    }
  }
    OrderHistory oh;
        oh.show(choice, number);
}
  return 0;
}