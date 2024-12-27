#define mod 1000000007
class Solution {
public:
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2+n%2;

        long long total = (powers(5,even) * powers(4,odd)) % mod;

        return total;
    }

    long long powers(long long x, long long y)
    {
        if(y == 0)
        {
            return 1;
        }
        long long ans=1;

        while(y > 0)
        {
            if(y % 2 ==1)
            {
                ans *= x;
                ans %= mod;
            }
            x *= x;
            x %= mod;
            y /= 2; 
        }

        return ans % mod;
    }
};
