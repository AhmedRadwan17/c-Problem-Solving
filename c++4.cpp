#include <iostream>
using namespace std;
enum ennumbertype{True,False};
void ReadInfo (int &Number)
{
  cout<<"enter?\n";
  cin>>Number;
}
ennumbertype CheckInfo(int Number)
{
  int result=0;
  for(int i=1;i<Number;i++)
  {
    if(Number%i==0)
    {
      result +=i;
    }
  }
  if(result==Number)
  {
      return ennumbertype::True;
  }
else 
{
    return ennumbertype::False;
}
}
void ExtraPrint(int limit)
{
    cout<<"The limit of Numbers is:\n"<<limit<<endl;
    for (int num=1;num<limit;num++)
    {
        if(CheckInfo(num)==ennumbertype::True)
        {
            cout<<num<<endl;
        }
    }

    cout<<endl;
    
    
}
int main() 
{
    int Number;
        ReadInfo(Number);
                 CheckInfo(Number);
                      ExtraPrint(Number);
    
}