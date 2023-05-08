#include <iostream>
using namespace std;
void sum(){
    int sum=0,n;
    cout<<"Enter the Number: ";
    cin>>n;
    while(n>0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    cout<<"The Sum of Individual Digits Of Positive Number is: "<<sum<<endl;
}
int main(){
    sum();
}
