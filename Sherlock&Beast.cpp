#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void findanswer(vector<int> vec){
    
    while(!vec.empty()){
        
        cout<<vec.size()<<endl;
        
        //Finds smallest number in vector
        int min = vec[0];
        for(int i = 1; i < vec.size(); i++){
            if(min > vec[i]){
                min = vec[i];
            }
        }
        
        //Cuts sticks
        for(int k = 0; k < vec.size(); k++){
            int temp2 = vec[k];
            vec[k] = temp2 - min;
        }
        
        //Erases all sticks that are 0
        for(int j = 0; j < vec.size(); j++){
            if(vec[j] < 1){
                vec.erase(vec.begin() + j);
                j--;
            }
        }
    }
}

int main() {
    int N;
    cin>>N;
    vector<int> v;
    for(int j = 0; j < N; j++)
    {
        int number;
        cin>>number;
        v.push_back(number);
    }
    
    findanswer(v);
    
    return 0;
}

