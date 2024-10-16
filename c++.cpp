#include <iostream>
using namespace std;
void ReadInfo(int &Num1,int &Num2)
{
  cout<<"please enter Num1 and Num2?"<<endl;
  cin>>Num1>>Num2;
}
int CheckInfo(int Num1,int Num2)
{
  int result =1;
for(int i =0;i<Num2;i++)
{
  result *=Num1;
}
return result;
  
  
}
void Print (int Num1, int Num2)
{
 cout<<"The Num1 you enter:"<<Num1<<endl;
cout<<"The Num2 you enter is:"<<Num2<<endl;
  
}

int main() 
{
  int Num1,Num2;
  ReadInfo(Num1,Num2);
  Print(Num1,Num2);
  int reuslt=CheckInfo(Num1,Num2);
  cout<<"the result is :"<<reuslt;
}
