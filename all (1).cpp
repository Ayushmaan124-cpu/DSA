#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    
    for(int i = 0; i < N; i++) {
        int distance = -1; 
        
        for(int j = i + 1; j < N; j++) {
            if(S[i] == S[j]) {
                distance = j - i - 1; 
                break; 
            }
        }
        
        cout << distance << " ";
    }
    
    return 0;
}