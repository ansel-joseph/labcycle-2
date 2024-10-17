#include <iostream>
using namespace std;
int main() {
cout<<"Armstrong numbers between 1 and 100";
for(int i=1; i<=1000; i++){
    int sum=0;
    int temp=i;
    while(temp>0){
        int digit=temp%10;
        sum+=digit*digit*digit;
        temp/=10;
    
    }
    if (sum==i){
        cout<<i<<endl;
    }
}
return 0;
}