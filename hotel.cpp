#include <iostream>
using namespace std;

int main()
{
  int meals,rates;
  cout<<"Enter number of meals"<<endl;
  cin>>meals;

  if(meals==0)
    {
      rates=300;
    }
  else if(meals==1)
  {
    rates=450;
  }
  else if(meals==2)
  {
    rates=520;
  }

  else
  {
    rates=590;
  }

  cout<<"The semester rate is : "<<rates;

return 0;
}
