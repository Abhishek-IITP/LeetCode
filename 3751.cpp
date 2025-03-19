class Solution {
public:
    int totalWaviness(int num1, int num2) {


        int total = 0;

        for (int n = num1; n <= num2; n++) {

            string s = to_string(n);
            int m = s.size();

            if (m >= 3) {
                for (int i = 1; i < m - 1; i++) {

                    int a = s[i - 1] - '0';
                    int b = s[i]     - '0';
                    int c = s[i + 1] - '0';

                    if (b > a && b > c) total++;
                    else if (b < a && b < c) total++;
                }
            }
        }

        return total;
    }
};