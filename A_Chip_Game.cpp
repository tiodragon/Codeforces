#include <bits/stdc++.h>
using namespace std;
int t, n, m;
int main() {
    scanf("%d",&t);
    while(t--) { 
        scanf("%d%d",&n,&m);
        printf((((n > 1? ((n-1) % 2 == 0 ? 2 : 1): 0) + (m > 1 ? ((m-1) % 2 == 0 ? 2 : 1) : 0)) % 2 == 1 ? "Burenka":"Tonya")); 
        printf("\n");   
    }
}