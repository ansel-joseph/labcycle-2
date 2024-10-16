#include <iostream>
using namespace std;
int main() {
    int number,sum=0, reverse=0,digit;
    cout<<"Enter a number";
    cin>>number;
    int temp=number;
    do{
        digit=temp%10;
        sum+=digit;
        reverse=reverse*10+digit;
        temp /=10;
    }while (temp>0);
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Reverse of the number"<<reverse<<endl;
    return 0;
}