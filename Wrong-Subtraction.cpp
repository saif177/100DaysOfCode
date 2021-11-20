#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n , k;
    int val = 0;
    cin>>n>>k;
    while (k--)
    {
        val = n%10;
        if(val==0)
            {
                n = n/10;
            }
        else 
            {
                n -=1;
            }
    }
    cout<<n<<endl;
    
    return 0;
}