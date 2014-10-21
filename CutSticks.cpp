#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int find_answer(string st){
    int answer = 1;
    int alphabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < st.length(); i++){
        alphabet[st[i] - 'a'] += 1;
    }
    
    int count = 0;
    
    for(int k = 0; k < 26; k++){
        if(!(alphabet[k] % 2 == 0)){
            count += 1;
        }
    }
    
    if(count > 1){
        answer = 0;
    }
    
    return answer;
}


int main() {
    
    string s;
    cin>>s;
    
    int flag = 0;
    
    flag = find_answer(s);
    
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}




