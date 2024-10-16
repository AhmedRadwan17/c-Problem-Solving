#include <iostream>
using namespace std;
int ReadpositiveNumber(string message)
{
  int PositiveNumber=0;
  do{
    cout<<message<<endl;
    cin>>PositiveNumber;
    
  }while(PositiveNumber<=0);
  return PositiveNumber;
}
void Print(int PositiveNumber)
{
  int Reminder,Counter0=0,Number1,Number2 ,Counter1=0,Number3,Counter2=0;
 cout<<"enter Number1?\n";
 cin>>Number1;
 cout<<"enter Number 2 ?\n";
 cin>>Number2;
 cout<<"enter Number 3 ?\n";
 cin>>Number3;
  cout<<"**********\n";
  while(PositiveNumber>0)
  {
    Reminder=PositiveNumber%10;
    PositiveNumber=PositiveNumber/10;
    
 if(Reminder==Number1)
 {
  Counter0++;
 }else if (Reminder==Number2)
 {
     Counter1++;
 }
 else {
     Counter2++;
 }
  }
  cout<<"result of Number"<<Number1<<"= "<<Counter0<<endl;
cout<<"result of Number"<<Number2<<"= "<<Counter1<<endl;
cout<<"result of Number"<<Number3<<"= "<<Counter2<<endl;
    
}
int main() 
{

  Print(ReadpositiveNumber("enter Positive Number\n"));
}