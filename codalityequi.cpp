/*************************************************************
         
*   Date created:   10-20-2014
*   File:           Coding challenge Demo
*   
**************************************************************/

#include <iostream>
#include <vector>
using namespace std;


void solution(vector<long long int> &A, long long int n) {
    long long int sum = 0;
    long long int Lsum = 0;
    long long int Rsum = 0;
    int counter = 0;
    int n = A.size();
    
    if(n <= 1){
        cout<<0<<endl;
        break;
    }
    
    for(int j = 0; j < n; j++){
        sum += A[j];
    }
    
    for(int i = 0; i < n; i++){
        Rsum = sum - Lsum - (long long int)A[i];
        if(Lsum == Rsum){
            cout<<i<<endl;
            counter++;
        }
        
        Lsum += A[i];
    }
    
    if(counter == 0){
        cout<<-1<<endl;
    }
    return 0;
}
    
    int main() {
        int n,integer;
        cin>>n;
        vector<long long int> a;
        for(int i = 0; i < n; i++){
            cin>>integer;
            a.push_back(integer);
        }
        
        solution(a, n)
        
        return 0;
    }