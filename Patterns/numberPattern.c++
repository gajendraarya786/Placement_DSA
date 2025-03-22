#include <bits/stdc++.h>
using namespace std;

void numPattern(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
    }
    cout << endl;
}
}

// reversing the same pattern

void numPatternReverse(int n){
    for(int i = n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    numPatternReverse(n);
}