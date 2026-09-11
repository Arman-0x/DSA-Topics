class Solution {
public:
    const long long mod= 1e9+7;
     long long power(long long x, long long n) {
        if (n == 0)
            return 1;

        long long half = power(x, n / 2);

        half = (half * half) % mod;

        if (n % 2 == 0)
            return half;

        return (half * x) % mod;
    }
    int countGoodNumbers(long long n) {
        long long ans1=power(5,((n+1)/2)) ;//for even we have 5 choices
        long long ans2=power(4,(n/2)) ;//for odd we have 4 choices

        return (ans1*ans2) % mod;
    }
};