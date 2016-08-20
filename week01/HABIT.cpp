#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*
 * 각 접미사들의 첫 t 글자를 기준으로 한 그룹 번호가 주어질 때,
 * 주어진 두 접미사를 첫 2*t 글자를 기준으로 비교한다.
 * group[]은 길이가 0인 접미사도 포함한다.
 */
struct Comparator {

    //const vector<int>& group;
    vector<int>& group;
    int t;
    
    //Comparator(const vector<int>& _group, int _t): group(_group), t(_t) {
    Comparator(vector<int>& _group, int _t): group(_group), t(_t) {
        group = _group;
        t = _t;
    }

    bool operator () (int a, int b) {
        // 첫 t 글자가 다르면 이들을 이용해 비교한다.
        if(group[a] != group[b])
            return group[a] < group[b];
        // 아니라면 S[a + t..] 와 S[b + t..]의 첫 t 글자를 비교한다..
        return group[a + t] < group[b + t];        

        // => log n 정렬 가능해짐
    }    
};

// s 의 접미사 배열을 계산
vector<int> getSuffixArray (const string& s) {
    int n = s.size();
    /*
     * group[i] = 접미사들을 첫 t 글자를 기준으로 정렬했을 때,
     *            S[i..] 가 들어가는 그룹 번호.
     * t = 1 일 때는 정렬할 것 없이 S[i..]의 첫 글자로 그룹번호를
     * 정해줘도 같은 효과가 있다.
     */
    
    int t = 1;
    vector<int> group(n+1);
    for(int i=0 ; i<n ; i++)
        group[i] = s[i];
    group[n] = -1;

    // 접미사 배열이 될 반환값. lg(n) 번 정렬됨
    vector<int> perm(n);
    for(int i=0 ; i<n ; ++i)
        perm[i] = i;

    while(t < n){
        // group[] 은 첫 t 글자를 기준으로 계산해두었음
        // 첫 2t 글자를 기준으로 perm을 다시 정렬함
        Comparator compareUsing2T(group, t);
        sort(perm.begin(), perm.end(), compareUsing2T);

        // 2t 글자가 n을 넘는다면 접미사 배열 완성.
        t *= 2;

        if(t >= n)
            break;

        // 2t 글자를 기준으로 한 그룹 정보를 만듬
        vector<int> newGroup(n+1);
        newGroup[n] = -1;
        newGroup[perm[0]] = 0;
        for(int i=1 ; i<n ; ++i){
            if(compareUsing2T(perm[i-1], perm[i]))
                newGroup[perm[i]] = newGroup[perm[i-1]] + 1;
            else
                newGroup[perm[i]] = newGroup[perm[i-1]];
        }

        group = newGroup;
    }
    
    return perm;
}


// s[i..]와 s[j..]의 공통 접두사의 최대 길이를 계산
int commonPrefix (const string& s, int i, int j) {
    
    int k = 0;
    while(i < s.size() && j < s.size() && s[i] == s[j]){
        ++i;
        ++j;
        ++k;
    }

    return k;
}

/*
// code 20.11 원형 문자열
// 사전순으로 가장 앞에 오는 s의 회전 결과를 구한다
string minShift (const string& s) {
    
    string s2 = s + s;
    vector<int> a = getSuffixArray(s2); //s2 의 suffix array
    
    for(int i=0 ; i<a.size() ; ++i){
        if(a[i] <= s.size())
            return s2.substr(a[i], s.size());
    }

    return "failed";
}
*/

/*
//code 20.12 서로 다른 부분 문자열의 수
// s의 서로 다른 부분 문자열의 수를 센다
int countSubstrings (const string& s) {
    
    vector<int> a = getSuffixArray(s);
    int ret = 0;
    int n = s.size();

    for(int i=0 ; i<a.size() ; ++i){
        int cp = 0;
        if(i > 0)
            cp = commonPrefix(s, a[i-1], a[i]);
        // a[i] 의 (n-a[i])개의 접두사들 중에서 cp개는 중복
        ret += s.size() - a[i] - cp;
    }

    return ret;
}
*/

//HABIT
int longestFrequent (int k, const string& s) {
    
    vector<int> a = getSuffixArray(s);
    int ret = 0;

    for(int i=0 ; i+k <= s.size() ; ++i){
        ret = max(ret, commonPrefix(s, a[i], a[i + k -1]));    
    }

    return ret;
}


int main (void) {

    int C;
    cin >> C;
    while(C--){
        int K;
        cin >> K;
        string str;
        cin >> str;

        int LCP = longestFrequent(K, str);
        cout << LCP << endl;
    }

    return 0;
}
