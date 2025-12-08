#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t result = 0;

        for(uint32_t i=0;i<32;i++){

            result <<=1;

            uint32_t last_bit = n & 1;

            result |= last_bit;

            n>>=1;
        }

        return result;
    }
};