#include <iostream>
using namespace std;
enum ennumbertype{pri,Nopri};
void ReadInfo(int &Number)
{
  cout<<"Please enter Number?\n";
  cin>>Number;
}
ennumbertype CheckInfo(int Number)
{
  if(Number<=1)
  {
    return ennumbertype:: Nopri;
  }
   for(int i =2;i<=Number;i++)
  {
    if(Number%i==0)
    {
      return ennumbertype::Nopri;
    }else
    {
      return ennumbertype::pri;
    }
    
  }
}
void Print (ennumbertype numbertype)
{
  if(numbertype==ennumbertype::Nopri)
  {
    cout<<"Number is No Pri";
  }else
  {
    cout<<"Number is  Pri";
  }
}
void PrimeupTo(int Limit)
{
    cout<<"the limit of Numbers"<<Limit<<"are:\n";
    for(int num=2;num<=Limit;num++)
    {
        
        if(CheckInfo(num)==ennumbertype::pri)
        {
            cout<<"\t"<<num<<""<<endl;
        }
    }
    cout<<endl;
    
}
int main() 
{
    int Number;
    ReadInfo(Number);
    Print(CheckInfo(Number));
   PrimeupTo(Number);
}