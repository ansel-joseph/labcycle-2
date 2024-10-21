#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter three numbers";
int num1,num2,num3,sum,difference,product;
cin>>num1>>num2>>num3;
sum=num1+num2+num3;
difference=num1-num2-num3;
product=num1*num2*num3;
cout<<"The sum is "<<sum<<endl;
cout<<"The product is "<<product<<endl;
cout<<"The difference is "<<difference<<endl;
if(sum>product){
cout<<"Sum is greater "<<endl;
}else if(product>sum){
    cout<<"Product is greater";
}else{
    cout<<"Both the sum and product are equal";
}
    return 0;
}