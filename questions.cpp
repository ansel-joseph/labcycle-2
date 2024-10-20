#include <iostream>
using namespace std;
int main()
{
int num1=8;
double num2=6.6;
float num3=3.9;

double result1=num1*num2;
double finalresult=result1+num3;
cout<<"Before typecasting: "<<double(result1)<<endl;
cout<<"After typecasting: "<<int(result1)<<endl;
cout<<"Integer: "<<num1<<endl;
cout<<"Double: "<<num2<<endl;
cout<<"Float: "<<num3<<endl;
cout<<"Multiplication Result: "<<result1<<endl;
cout<<"Final Result"<<finalresult<<endl;


    return 0;
}