class Solution {
public:

    std::string count(const std::string& s) {
        int n = s.size();
        std::string ans = "";

        for (int i = 0; i < n; ) {
            char current_char = s[i];
            int count = 1;

            while (i + count < n && s[i + count] == current_char) count++;
            ans += std::to_string(count) + current_char;
            i += count;
        }

        return ans;
    }

    string countAndSay(int n) {
        std::string res = "1";
        if (n == 1) return res;

        for (int i = 2; i <= n; i++) {
            res = count(res);
        }

        return res;
    }
};