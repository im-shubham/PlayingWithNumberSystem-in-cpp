//.......................................DECIMAL TO BINARY ........................................................
#include<bits/stdc++.h>
using namespace std;

int main(){
    //    fast i/o....
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin>>n;
    long long int bit;

    vector<long long int> binary;
    while(n!=0){
        bit = n&1;
        binary.push_back(bit);
        n=n>>1;
    }
    reverse(binary.begin(),binary.end());
    for(long long int i : binary){
        cout<<i<<" ";
    }



    return 0;
}