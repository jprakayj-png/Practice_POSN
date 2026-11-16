#include <bits/stdc++.h>
using namespace std ;

int convert(int n , int d) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string b16 ;
    cin >> b16 ;
    if (b16.size() > 4 || b16.size() == 0){
        cout << "Wrong" ;
        return 0 ;
    }
    else {
        int sum = 0 ;
        for (int i = 0 ; i < b16.size() ; i++){
            if (b16[i] >= 'A' && b16[i] <= 'F'){
                sum += ((b16[i] - 'A') + 10 ) * pow(16,b16.size()- 1 - i) ;
            }
            else if (b16[i] >= '0' && b16[i] <= '9'){
                sum += (b16[i] - '0') * pow(16,b16.size()- 1 - i) ;
            }
        }
        //cout << "10 bits : " << sum << "\n" ;
        convert(sum , 2) ;
        convert(sum , 8) ;
        return 0 ;
    }
}

int convert(int n , int d ){
    string s = "" ;
    while (n > 0){
        s += to_string(n % d) ; 
        n /= d ;
    }
    reverse(s.begin(),s.end()) ;
    cout << s << "\n" ;
    return 0 ;
}