class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        char map_s_to_t[128] = {0};
        char map_t_to_s[128] = {0};

        for (int i = 0; i < s.length(); ++i) {

            char char_s = s[i];
            char char_t = t[i];

            if (map_s_to_t[char_s] != 0 && map_s_to_t[char_s] != char_t) {
                return false;
            }
            if (map_t_to_s[char_t] != 0 && map_t_to_s[char_t] != char_s) {
                return false;
            }

            map_s_to_t[char_s] = char_t;
            map_t_to_s[char_t] = char_s;
        }

        return true;
    }
};