#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct dataset{
    int num;
    int index;
};

bool comp (struct dataset a, struct dataset b){
    return a.num > b.num;
}

int main (void) {

    struct dataset a[26];
    for(int i=0 ; i<26 ; i++){
        a[i].num = 0;
        a[i].index = i;
    }

    /*
    while(1){
        scanf("%c", &in);
        if(in == EOF)
            break;
        if(in >= 'A' && in <= 'Z')
            a[in - 'A'].num++;
        else
            a[in - 'a'].num++;
    }
*/
    string str;
    cin >> str;
    int len = str.size();
    for(int i=0 ; i<len ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            a[str[i] - 'A'].num++;
        else
            a[str[i] - 'a'].num++;

    }
    sort(a, a+26, comp);
/*    
    for(int i=0 ; i<26 ; i++)
        printf("%d", a[i].num);
*/
    if(a[0].num == a[1].num)
        printf("?");
    else
        printf("%c", a[0].index + 'A');


    return 0;
}
