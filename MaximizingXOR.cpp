#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int count =0;
    for(int i = l; i < r + 1; i++){
        for(int j =l; j< r+1; j++){
            int dif;
            dif = i xor j;
            if(dif > count){
                count = dif;
            }
        }
    }
    return count;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

