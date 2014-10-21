#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findanswer(int x, int y, int a[])
{
    int answer = 3;
    
    for(int j = x; j < y + 1; j++)
    {
        if(a[j] == 2)
        {
            answer = 2;
        }
        
        else if(a[j] == 1)
        {
            answer = 1;
            j = y;
        }
    }
    
    return answer;
}

int main() {
    int T;
    int N;
    cin>>N>>T;
    int width[N];
    
    
    for(int i = 0; i < N; i++)
    {
        cin>>width[i];
    }
    
    for(int j = 0; j < T; j++)
    {
        int t;
        int n;
        cin>>t>>n;
        
        cout<<findanswer(t,n, width)<<endl;
    }
    
    return 0;
}

