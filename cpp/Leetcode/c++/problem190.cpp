#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>bits(n);
        string binstring=bits.to_string();
        while(binstring.length()<32){
            binstring='0'+binstring;
        }
        reverse(binstring.begin(),binstring.end());
        return bitset<32>(binstring).to_ulong();    
    }
};