class Solution {
public:
    string removeStars(string s) {
        string res;

        for(char i : s)
        {
            if(i == '*')
            {
                if(!res.empty())
                {
                    res.pop_back();
                }
            }
            
            else
                res.push_back(i);

        }

        return res;
    }
};
