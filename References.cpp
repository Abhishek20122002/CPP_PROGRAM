#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    for (int &x : arr){
        x = x + 5;
    }
    for (int x : arr){
        cout << x << " ";

    }
    cout << endl;
    return 0;
}
