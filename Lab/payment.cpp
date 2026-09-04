#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class payment {
   public:
   virtual void putdata()=0;
    void complete()
    {
        cout << "Payment sucessfull \n";
    }
};
class CreditCard:public payment {
private:
    double  CardNo;
    string ExpireDate;
    int SecurityPin;
   public:
    void putdata()
    {
        cout << "Enter CardNo:";
        cin >> CardNo;
        cout << "Enter ExpiryDate (m/yr):";
        cin >> ExpireDate;
        cout << "Enter SecurityPin:";
        cin >> SecurityPin;
    }
    
};
class DigitalWallet:public payment {
    private:
     double Num;
    std::string passwd;
    public:
    void putdata()
    {
      cout << "Enter your number:";
      cin >> Num;
      cout << "Enter your password:";
      cin >> passwd;
    }
    
};
class CashOnDelivery:public payment {
    std::string location;
    string time;
    public:
    void putdata()
    {
        cout << "Enter your Location:";
        cin >> location;
        cout << "Enter time for the delivery:";
        cin >> time;
    }
};

 