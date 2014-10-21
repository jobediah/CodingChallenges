/*************************************************************
         
*   Date created:   10-20-2014
*   File:           Coding challenge Demo
*   
**************************************************************/

#include <iostream>
#include <vector>
using namespace std;


void solution(vector<long long int> &A, long long int n) {
    long long int sum1, sum2, sum3;
    int counter = 0;
    for(int j = 0; j < n; j++){
        sum1 += A[j];
    }
    
    for(int i = 0; i < n; i++){
        sum2 += A[i];
        sum3 = sum1 - sum2 - (long long int)A[i+1];
        if(sum2 == sum3){
            cout<<(i+1)<<endl;
            counter++;
        }
    }
    
    if(counter == 0){
        cout<<-1<<endl;
    }
}
    
    int main() {
        int n,integer;
        cin>>n;
        vector<long long int> a;
        for(int i = 0; i < n; i++){
            cin>>integer;
            a.push_back(integer);
        }
        
        solution(a, n);
        return 0;
    }