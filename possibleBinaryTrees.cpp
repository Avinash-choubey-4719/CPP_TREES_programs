#include<bits/stdc++.h>
using namespace std;

int possibleBinaryTrees(int n){
    int bt[n + 1];

    memset(bt, 0, sizeof(bt));

    bt[0] = 1;
    bt[1] = 1;
    bt[2] = 2;
    bt[3] = 5;
    bt[4] = 14;

    if(n < 4 && n > -1){
        return bt[n];
    }

    for(int i = 5;i<=n;i++){
        int j = 0;
        int k = i - 1;
        while(j != i){
            bt[i] += bt[j] * bt[k];
            j++;
            k--;
        }
    }

    return bt[n];

}

int main(){
    int n = 5;
    int result = possibleBinaryTrees(n);
    cout<<result<<endl;
    return 0;
}