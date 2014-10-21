#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin>>T;

    for(int j = 0; j < T; j++){
        long long k;
        cin>>k;

        if(k % 2 == 0){
            cout<<k/2 * k/2<<endl;
        }

        else{
            cout<<(k/2+1) * (k/2)<<endl;
        }
    }

    return 0;
}
