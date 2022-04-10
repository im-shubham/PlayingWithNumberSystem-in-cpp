//.......................................BINARY TO DECIMAL ........................................................
#include<bits/stdc++.h>
using namespace std;

int main(){
    //    fast i/o....
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int ans=0;
    int n; cin>>n;
    int binary[n];
    for(int i=0;i<n;i++){
        cin>>binary[i];
    }
    for(int i=0;i<n;i++){
        if(binary[i]==1){
            ans= pow(2,n-1-i)+ans;
        }
    }
    cout<<ans<<endl;




    return 0;
}