#include <bits/stdc++.h>
using namespace std;
int main(){

    int a , pas;
    cin >> a;
    pas = a / 5;
    if (a % 5 > 0) {
        pas++;
    }
    cout << pas;

    return 0;
}
