#include<iostream>
using namespace std;

int main(){
    int *integer;
    float *decimal;

    integer=new int;
    decimal=new float;

    *integer=45;
    *decimal=45.45;

    cout<<*integer<<endl;
    cout<<*decimal<<endl;

    delete integer;
    delete decimal;

    return 0;
}
