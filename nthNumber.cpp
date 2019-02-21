/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	if(n<1)
	return -1;
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return(nthFibonacci(n - 1) + nthFibonacci(n- 2));
    }
	
}

int nthPrime(int num)
{
	int count=0,i;
	if(num<1)
	return -1;
	for(i=2;count!=num;i++)
	{
		if(isprime(i))
		count++;
	}
	return i-1;
}
C
int isprime(int n) 
{ 
    int i;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2) {
        if(n%i == 0) return 0;
    }
    return 1;
}
