class Solution {
public:

    std::string count(const std::string& str) {
        int n = str.size();
        std::string res = "";

        for (int i = 0; i < n; ) {
            char current_char = str[i];
            int count = 1;

            while (i + count < n && str[i + count] == current_char) {
                count++;
            }

            res += std::to_string(count) + current_char;
            i += count;
        }
        
        return res;
    }

    string countAndSay(int n) {
        std::string res = "1";
        if (n == 1) return "1";

        for (int i = 2; i <= n; i++) {
            res = count(res);
        }

        return res;
    }
};