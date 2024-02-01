#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    const int mx=10e5;
int parsial[mx];
void solve(){
    
}
int main(){
    FASTER

    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) cin>>arr[i];

    for(int i=1;i<=n;i++){

        parsial[i]=parsial[i-1]+arr[i];
    }
    for(int i=1;i<=n;i++) cout<<parsial[i]<<" ";

    return 0;
}
