#include <iostream>
using namespace std;
string aa(int *a){
    string c="";
    while (*a!=0)
    {
        if(*a%2==1){
            c = "1" +c;
        }
        else {
            c = "0"+c;
        }
        *a/=2;
    }
    return c;
}
int count(string a){
    int b=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1'){
            b++;
        } 
    }
    return b;
}
int main(void){
    int a;
    while (cin>>a)
    {
        if (a==0){
            break;
        }
        string b = aa(&a);
        cout<<"The parity of "<< b <<" is "<<count(b)<<" (mod 2)" <<endl;
    }
    
}
