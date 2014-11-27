/*************************************************************
 *   Author:         Jobediah
 *   Date created:   11-27-2014
 ***************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long int get_answer(string& input){
    long int answer = 0;
    long int count = input.length() - 1;
    
    if(count == 0) return 0;

    for(long int i = 0; i < count; i++){
        if(input[i] == input[i+1]) answer++;
    }
    return answer;
}


int main() {
    int T;
    cin>>T;

    for(int i = 0; i < T; i++){
        string test_string;
        cin>>test_string;
        cout<<get_answer(test_string)<<endl;
    }
    return 0;
}