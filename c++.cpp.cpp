#include <iostream>
using namespace std;
int ReadpositiveNumber(string message)
{
  int Number=0;
  do{
    cout<<message<<endl;
    cin>>Number;
    
  }while(Number<=0);
  return Number;
}
int  CheckInfo(int Number)
{
 int originaNumber=Number;
  int Reimnder,Number2=0;
  while (Number>0)
  {
  Reimnder=Number%10;
  Number=Number/10;
  Number2=Number2*10+Reimnder;
  }
if(Number2==originaNumber)
  {
    cout<<"Pass";
  }
  else 
  {
    cout<<"Fail";
  }
   return Number2; 
}
int main() 
{
    CheckInfo(ReadpositiveNumber("enter Positive Number?\n"));
}