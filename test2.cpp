#include<iostream>
using namespace std;
int a(int b) {
    if(b <10){
        return b;
    }
    int c = 0;
    while (b>9) 
    {
        c += b%10;
        b/=10;
    }
    c+=b;
    return a(c);
}
int main(void){
    int d;
    cin>>d;
    cout<<a(d);
}