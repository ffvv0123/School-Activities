#pragma warning(disable:4996) 
#pragma warning(disable:6031) 
#include <stdio.h>

long long sum(int* a, int n) {
    
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i];
    }

    return ans;
}
