#include <iostream>

using namespace std;

string aa(int inp){   
    int sum = 0;
    string ans;
    while (cin >> inp){
        if (inp == 0){
            break;
        }
        ans = "";
        sum = 0;
        while (inp > 0){
            
            if(inp % 2 == 1){
                ans = "1"+ ans;
                sum++;
            }
            else{
                ans = "0" + ans;
            }
            inp /= 2;
        }

        cout<<"The parity of "<<ans<<" is "<<sum<<" (mod 2)."<<endl;    
        }
        return ans;
}
int main(){
    int inp;
    aa(inp);
    return 0;
}
