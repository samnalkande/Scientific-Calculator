#include<iostream>
#include<math.h>
using namespace std;
int main () {
float x , y , pi;
int c ;
cout<<endl;
cout<<"*************************CACULATOR**************************\n";
cout<<"------------------------------------------------------------\n";
cout<<"Enter a Operator"<<endl;
cout<<"------------------------------------------------------------\n";
cout<<"1: Division"<<endl;
cout<<"2: Multiplacation"<<endl;
cout<<"3: Substraction"<<endl;
cout<<"4: Addition"<<endl;
cout<<"5: Exponent"<<endl;
cout<<"6: Log"<<endl;
cout<<"7: Tan"<<endl;
cout<<"8: Sin"<<endl;
cout<<"9: Cos"<<endl;
cout<<"10: log10"<<endl;
cout<<"Enter a Function ";
cin>>c;
pi = 3.14;
switch (c)
{
case 1:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Enter Second Number :"<<endl;
   cin>>y;
   cout<<"Divion = "<<x/y<<endl;
    break;

case 2:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Enter Second Number :"<<endl;
   cin>>y;
   cout<<"Multiplication = "<<x*y<<endl;
    break;

case 3:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Enter Second Number :"<<endl;
   cin>>y;
   cout<<"Subtraction = "<<x-y<<endl;
    break;

case 4:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Enter Second Number :"<<endl;
   cin>>y;
   cout<<"Addition = "<<x+y<<endl;
    break;

case 5:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Enter Second Number :"<<endl;
   cin>>y;
   cout<<"Exponent = "<<pow(x,y)<<endl;
    break;

case 6:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Log = "<<log(x)<<endl;
    break;

case 7:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Tan = "<<tan(x)<<endl;
    break;

case 8:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Sin = "<<sin(x)<<endl;
    break;

case 9:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Cos = "<<cos(x)<<endl;
    break;

case 10:
   cout<<"Enter First Number :"<<endl;
   cin>>x;
   cout<<"Log10 = "<<log10(x)<<endl;
    break;

default:
   cout<<"Wrong Input please try again";
}
}