#include <bits/stdc++.h>
using namespace std ;

stack<string>st ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q , y = 0 , x = 0 ;
    cin >> q ;
    while(q--){
        string o ;
        cin >> o ;
        if (o == "UNDO"){
            if (st.empty()){
                continue ;
            }
            else {
                if (st.top() == "U"){
                    y-- ;
                }
                else if (st.top() == "D"){
                    y++ ;
                }
                else if (st.top() == "R"){
                    x-- ;
                }
                else if (st.top() == "L"){
                    x++ ;
                }
                st.pop() ;
            }
        }
        else {
            if (o == "U"){
                y++ ;
            }
            else if (o == "D"){
                y-- ;
            }
            else if (o == "R"){
                x++ ;
            }
            else if (o == "L"){
                x-- ;
            }
            st.push(o) ;
        }
        //cout << x << " " << y << "\n" ;
    }
    cout << y << " " << x << "\n" ;
    return 0 ;
}