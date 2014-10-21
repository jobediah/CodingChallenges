#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_answer(int number){
    int answer = 0;
    int number2 = number;
    
    while(number2 > 9){
        int digit = number2 % 10;
        
        if(digit == 0);
        else if(number % digit == 0)answer++;
        
        number2 /= 10;
    }
    
    if(number % number2 == 0)answer++;
    
    return answer;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        // Computer answer
        
        cout<<find_answer(n)<<endl;
    }
    return 0;
}


