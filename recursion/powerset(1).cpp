//subset
class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& nums, int idx, vector<int>& temp) {
        if(idx >= nums.size()) {
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        solve(nums, idx+1, temp);
        temp.pop_back();
        solve(nums, idx+1, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;

        solve(nums, 0, temp);

        return result;
    }
};

//power set
class Solution {
public:
    vector<string> result;

    void solve(string &curr, string &s, int idx) {
        // Base case: If the current index reaches the length of the string
        if (idx == s.length()) {
            // If the current string is not empty, add it to the result
            if (curr != "") {
                result.push_back(curr);
            }
            return;
        }

        // Include the character at the current index and proceed
        curr.push_back(s[idx]);
        solve(curr, s, idx + 1);

        // Exclude the character at the current index and proceed
        curr.pop_back();
        solve(curr, s, idx + 1);
    }

    vector<string> AllPossibleStrings(string s) {
        string curr = "";
        // Start the recursive function to generate all possible strings
        solve(curr, s, 0);

        // Sort the result lexicographically
        sort(begin(result), end(result));

        // Return the final result
        return result;
    }
};
