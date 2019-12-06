#include<iostream>
using namespace std;
int main()
{
int a,b,choice;
cout<<"1.add \n 2.sub \n 3.mul \n  4.div ";
cout<<"Enter your choice ";
cin>>choice;
switch(choice)
{
    case 1:
    int sum;

    cout<<"Enter first number"<<endl;
        cin>>a;
         cout<<"Enter second number"<<endl;
         cin>>b;
sum=a+b;
cout<<"sum of numbers is :"<<sum;
           break;
           case 2:
    int sub;

    cout<<"Enter first number"<<endl;
        cin>>a;
         cout<<"Enter second number"<<endl;
         cin>>b;
sub=a-b;
cout<<"sum of numbers is :"<<sub;
           break;
           case 3:
    int mul;

    cout<<"Enter first number"<<endl;
        cin>>a;
         cout<<"Enter second number"<<endl;
         cin>>b;
mul=a*b;
cout<<"sum of numbers is :"<<mul;
           break;
           case 4:
    int div;

    cout<<"Enter first number"<<endl;
        cin>>a;
         cout<<"Enter second number"<<endl;
         cin>>b;
div=a+b;
cout<<"sum of numbers is :"<<div;
           break;


}
return 0;
}