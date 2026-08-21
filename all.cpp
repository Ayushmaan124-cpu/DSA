#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1;
    string S2;
    getline(cin, S1);
    getline(cin, S2);
    
    int m = S1.size();
    int N;
    cin >> N;
    
    for(int i = m - 1; i >= 1; i--)
    {
        if(i % N == 0)
        {
            S1.insert(i, S2);
        }
    }
    cout << S1;
    return 0;
}