#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool compare(pair<char,int>p1,pair<char,int>p2){
        return p1.second>p2.second;
    }

    string frequencySort(string s) {
        std::map<char, int> charFrequency;
        for (char c : s) {
            charFrequency[c]++;
        }
        std::vector<std::pair<char, int>> charFrequencyVector(charFrequency.begin(), charFrequency.end());
        std::sort(charFrequencyVector.begin(), charFrequencyVector.end(), compare);
        std::string sortedString;
        for (auto pair : charFrequencyVector) {
            sortedString +=string(pair.second, pair.first);
        }

        return sortedString;
    }
};