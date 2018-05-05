#include<stdio.h>
#include<stdlib.h>


long long* prime_index(long long n)
{
    int* is_multiple = (int *)calloc(n,sizeof(int)); //init to zero
    long long* primes = (long long *)calloc(n,sizeof(long long)); //not init to zero, is faster


    int number = 2; //start by the first prime number
    *(is_multiple) = 1; //say number 0 and number 1 are multiples of prime numbers
    *(is_multiple + 1) = 1;
    int n_primes = 0;
    do
    {
        if(*(is_multiple+number)==0) //if the number is not mutiple of numbers bellow
        { 
            //then has to be prime! remove all the multiples
            for(int i = 2*number;i<n;i+=number) *(is_multiple + i) = 1; //set as multiple of prime number we just found
            *(primes + n_primes) = number; //update value of prime number
            n_primes++; //update the counter
        }
        number++;
    }while(number < n);

    return primes;

}

int main(void)
{
    long long n = 2000000;
    long long *primes = prime_index(n);
    long long suma = 0;
    int i = 0;
    do
    {
        printf("%lld\n", *(primes+i));
        suma+= *(primes+i);
        i+=1;
    }while(*(primes+i)!=0);
    printf("%lld\n", suma);

    return 0; 
}