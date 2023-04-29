#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number: ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Number "<<i<<" is "<<marks[i]<<endl;
    }

    int *p=marks;
    for(int i=0;i<n;i++){
        cout<<"The value at "<<i<<" is "<<*(p+i)<<endl;
        cout<<"The address at "<<i<<" is "<<&marks[i]<<endl;
    }
    return 0;
}
