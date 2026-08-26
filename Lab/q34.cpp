#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()

{
   ofstream outf("write.txt");
   char ch;
  

 
  while(ch!='\n')
  {
    ch=getchar();
    outf << ch;
  }

outf.close();



  

  ifstream inf("write.txt");
  string str;

  while(!inf.eof())
  {
    getline(inf,str);
    cout << str<< "\n";

}
  

    return 0;
}

