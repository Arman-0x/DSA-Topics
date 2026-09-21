class Solution {
public:
    bool isSumOfTwoPrimes(int n) {
        // Your code goes here
        if(n==2 || n==3 ){
            return false;
        }
        
        vector<bool> isPrime(n + 1, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {

        if (isPrime[i]) {

            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
                
                }
            }
        }
        int j=n-2;
        int i=2;
        while(i<=j){

            if(isPrime[i] && isPrime[j]){
                return true;
            }

            i++;
            j--;
        }

        return false;
    }
};