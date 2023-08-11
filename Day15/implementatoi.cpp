#include <bits/stdc++.h> 
int atoi(string s) {

    int len = s.length() ; 

    double ans = 0 ; 
    bool neg = (s[0] == '-') ;  ; 

    int i = 0  ; 

    while(i<len){
        if(s[i] <= '9' && s[i] >= '0'){
            ans = ans*10 + s[i]-'0' ; 
        }
        i++ ; 
    }
    
    ans = neg ? -ans : ans ; 


    return ans ; 
}