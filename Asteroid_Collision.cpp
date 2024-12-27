class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ans;
        
        for (int i : asteroids) {
            bool alive = true;
            while (!ans.empty() && i < 0 && ans.top() > 0) {
                if (ans.top() < -i) {
                    ans.pop();
                    continue;
                } else if (ans.top() == -i) {
                    ans.pop();
                }
                alive = false;
                break;
            }
            if (alive) {
                ans.push(i);
            }
        }
        
        vector<int> res(ans.size());
        for (int i = ans.size() - 1; i >= 0; --i) {
            res[i] = ans.top();
            ans.pop();
        }
        
        return res;
    }
};
