#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n-1;i++){
        if(p[i]==p[i+1]+1){
            swap(p[i],p[i+1]);
        }
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(p[i]<p[i+1])
        count++;
    }
    if(count==n-1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
