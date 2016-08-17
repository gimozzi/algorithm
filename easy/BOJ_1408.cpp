#include <cstdio>

int main (void) {

    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int h, m, s;
    int t, t1, t2;
    t1 = (h1 * 60 * 60) + (m1 * 60) + s1;
    t2 = (h2 * 60 * 60) + (m2 * 60) + s2;
    t = 24*60*60 + t2 - t1;

    h = (t%(24*60*60)) / (60*60);
    m = t%(60*60) / 60;
    s = t%60;
    
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
