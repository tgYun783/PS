#include <bits/stdc++.h>
using namespace std;
int power(int base, int exp) {
    if ( exp == 0 ) return 1;
    if ( exp == 1 ) return base;
    int t = power(base, exp/2) % 10;
    if ( exp % 2 == 0 ) {

        return (t * t) % 10;

    }
    return (t*t % 10) * base % 10;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int a, b;
        cin>>a>>b;
        a %= 10;
        int n = power(a, b);
        if (n == 0) cout<<"10"<<'\n';
        else cout<<n<<'\n';
    }


}