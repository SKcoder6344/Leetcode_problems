class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        bool* isprime = new bool[n];
        for(int i=0;i<n;i++) isprime[i] = true;

        isprime[0] = isprime[1] = false;

        for(int i=2;i*i<n;i++){
            if(!isprime[i]) continue;
            for(int j=i*i;j<n;j+=i){
                isprime[j] = false; 
            }
        }

        int count = 0;
        for(int i=2;i<n;i++){
            if(isprime[i]) count++;
        }

        return count;
    }
};
