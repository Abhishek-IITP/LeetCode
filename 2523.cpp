class Solution {
public:
    bool isprime(int num)
    {
        if(num==1)
        {
            return false;
        }
        int p = sqrt(num) + 1;
        for(int i = 2; i < p; i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) 
    {
        pair<int, int> primes = {-1, -1};
        int lastprime = INT_MIN;
        
        for(int i = left; i <= right; i++)
        {
            if(isprime(i))
            {
                if(primes.first == -1)
                {
                    primes.first = i;
                }
                else if(primes.second == -1)
                {
                    primes.second = i;
                }
                else
                {
                    if(primes.second - primes.first > i - lastprime)
                    {
                        primes.first = lastprime;
                        primes.second = i;
                    }
                }
                
                if(primes.second - primes.first == 2)
                {
                    break;
                }
                
                lastprime = i;
            }
        }
        
        if(primes.first == -1 || primes.second == -1)
        {
            return {-1, -1};
        }
        return {primes.first, primes.second};
    }
};
