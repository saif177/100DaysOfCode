#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

    ll k , w , n , total = 0;

    cin>>k>>w>>n;
    
    for(int i=1; i<=n; i++){
    
        total +=  (i*k);  
    
    }
    
     if(total<w)
     cout<<0<<endl;
     else
     cout<<(total-w)<<endl;
    return 0;
}