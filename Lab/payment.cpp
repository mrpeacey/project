#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class payment {
   public:
   virtual void putdata()=0;
    void complete()
    {
        cout << "payment sucessfull";
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
int main()
{    int choice;
    cout << "Choose Your Payment Method" << std::endl;
    cout << setw(25) <<left << "1.Credit Card " << setw(25) << "2.Digital Wallet" << setw(25) << "3.Cash On Delivery" << endl;
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
    return 0;
}