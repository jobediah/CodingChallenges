#include <iostream>
#include <algorithm>
using namespace std;

int get_answer(string& input){
    int answer = 0;
    int count = input.length() - 1;
    int i = 0;
    while(i < count){
        if(input[i] < input[count]){
            input[count] -= 1;
            answer += 1;
        }
        
        else if(input[i] > input[count]){
            input[i] -= 1;
            answer += 1;
        }
        
        if(input[i] == input[count]){
            i += 1;
            count -= 1;
        }
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


