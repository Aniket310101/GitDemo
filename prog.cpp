#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(){

    int n=10;
    int cnt = 0;
    int c = 1;
    for(int i = 0;i<n;i++){
        cnt+=i;
        c*=i;
    }
    cout<<"The total Sum: "<<cnt<<endl;
    cout<<"The total Product: "<<c;

}