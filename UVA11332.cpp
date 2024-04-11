#include <iostream>
using namespace std;

string calc(string sum){
    if (sum.length() <2){
        return sum;
    }
    int ans = 0;
    while (sum.length() > 1){
        ans = 0;
        for (int i = 0; i < sum.length(); i++){
            ans += sum[i] - '0';
        }
        sum = to_string(ans);
        
    }
    cout << sum << endl;
    return sum;
    
}

int main (){
    int sum;
    while (cin >> sum)
    {
        calc(to_string(sum));
    }
    
}