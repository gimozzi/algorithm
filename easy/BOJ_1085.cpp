#include <cstdio>
#include <vector> 
#include <algorithm>

using namespace std;

int main (void) {
    
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    vector<int> v(4);
    v[0] = x;
    v[1] = y;
    v[2] = w-x;
    v[3] = h-y;
    sort(v.begin(), v.end());
    printf("%d", v[0]);

    return 0;
}
