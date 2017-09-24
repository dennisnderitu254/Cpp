#include <iostream>
using namespace std;

int main()
{
  int money,x,y;
  cout<<"Enter amount of money in shillings"<<endl;
  cin>>money;

  /*
  <<"1000 shillings notes"<<money/1000<<endl;
  cout<<"500 shillings notes"<<money/500<<endl;
  cout<<"200 shillings notes"<<money/200<<endl;
  cout<<"100 shillings notes"<<money/100<<endl;
  cout<<"50 shillings notes"<<money/50<<endl;
  cout<<"20 shillings coins"<<money/20<<endl;
  cout<<"10 shillings notes"<<money/10<<endl;
  cout<<"5 shillings coins"<<money/5<<endl;
  cout<<"1 shillings coins"<<money/1<<endl;
*/

int number, a,b,c,d,e,f,g,h;
cout<<"Enter amount of money in shillings"<<endl;
cin>>number;
cout<<"1000:"<<(number/1000)<<endl;
a=number%1000;
cout<<"500:"<<(number/500)<<endl;
b=a%500;
cout<<"200:"<<(number/200)<<endl;
c=b%200;
cout<<"100:"<<(number/100)<<endl;
d=c%100;
cout<<"50:"<<(number/50)<<endl;
e=d%50;
cout<<"20:"<<(number/20)<<endl;
f=e%20;
cout<<"10:"<<(number/10)<<endl;
g=f%10;
cout<<"5:"<<(number/5)<<endl;
h=g%5;

cout<<"1: "<<(h/1)<<endl;
return 0;

}
