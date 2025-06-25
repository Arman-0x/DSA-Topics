#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	
	int l=10000;
	int r=10000000;
	 long long limit = sqrt(r) + 1;
	vector<bool>prime(limit+1,true);
	  prime[0] =prime[1] = false;
	for(int i=2;i*i<=limit;i++){
		
		if(prime[i]){
											//primes upto sqrt of r;
		for(int j=i*i;j<=limit;j+=i){
			prime[j]=false;
		}
		}
	}
	//all primes here
	 vector<long long> basePrimes;
    for (long long i = 2; i <= limit; i++) {
        if (prime[i])
            basePrimes.push_back(i);
    }

	//mark all multiple of l and r
	
	 vector<bool> isPrime(r - l + 1, true);
	 
	 for (long long p : basePrimes) {
        long long start = max(p * p, (l + p - 1) / p * p);
        for (long long j = start; j <= r; j += p)
            isPrime[j - l] = false;
    }
    
     if (l == 1) isPrime[0] = false;//if 

    // Output primes in [L, R]
    for (long long i = 0; i <= r - l; i++) {
        if (isPrime[i])
            cout << (i + l) << " ";
    }
	
}
