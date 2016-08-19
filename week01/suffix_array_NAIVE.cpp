#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>      //strcmp

using namespace std;

// BOJ_11656.cpp

struct SuffixComparator {

    const string& s;
    SuffixComparator(const string& s) : s(s) {}
    bool operator () (int i, int j) {
        return strcmp(s.c_str() + i, s.c_str() + j) < 0;
    }
};

vector<int> getSuffixArrayNaive (const string& s) {

    vector<int> perm;
    for(int i=0 ; i<s.size() ; ++i)
        perm.push_back(i);
    
    sort(perm.begin(), perm.end(), SuffixComparator(s));

    return perm;
}

int main (void) {

    string str;
    cin >> str;
    vector<int> suffix_array = getSuffixArrayNaive(str);

    for(int i=0 ; i<suffix_array.size(); i++){
        for(int j=suffix_array[i] ; j<str.size() ; j++)
            cout << str[j];
        cout << "\n";
    }

    return 0;
}
