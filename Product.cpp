#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

class Products{
    protected:
    string id;
    string name;
    float price;
    public:
    Products(string i , string n , float p){
        id = i;
        name = n;
        price = p;
    }

    virtual void show(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class physicalProduct : public Products{
    float weight;
    public:
    physicalProduct(string i , string n , float p , float w) : Products(i , n , p){
        weight = w;
    }

    void show(){
        Products :: show();
        cout<<"Weight : "<<weight<<endl;
    }
};

class digitalProduct : public Products{
    float fileSize;
    public:
    digitalProduct(string i , string n , float p , float f) : Products(i , n , p){
        fileSize = f;
    }

    void show(){
        Products :: show();
        cout<<"File Size : "<<fileSize<<endl;
    }
};

void showProductList(){
    string str;
    ifstream infile;
    infile.open("productList.csv");
    while (getline(infile,str))
    {
        cout<<str<<endl;
    }
    infile.close();
}

int main(){
    string s,str,st;
    showProductList();
    cout<<"Enter the id:"<<endl;
    cin>>s;
    ifstream infile;
    infile.open("productList.csv");
 



//   while(infile >> str)
//   {
//    if(s==str)
//    {
//     cout << str;
//     getline(infile,str);
//      cout << str;
//      st=str;
//    }
// }
//  cout << endl;

// stringstream ss(st);
// string i,n,p,w,t;
// ss >> i >> n >> p >> w>>t;
// cout << i << n <<p <<w << t<<endl;
//  int i2= stoi(i);
// cout << i2;

 
 
  
    

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
    return 0;
}

