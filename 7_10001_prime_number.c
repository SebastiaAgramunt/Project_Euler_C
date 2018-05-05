#include<stdio.h>
#include<stdlib.h>
/*
long long *primes(int N,int n_primes)
{
    long long *primes_list = calloc(N,sizeof(long long));
    long long last_integer_found = 0;
    long long last_integer_index =0;

    primes_list[0] = 2;
    do
    {

    }while()

    return p;
}
*/
int* returnLast(const int* arr, int size){
    return (int*)(arr+(size-1));
}
int returnLast2(int* arr, int size){
    for(int i = 0; i< size;i++)
    {
        printf("%p\n", arr+i);
    }
    int *p = arr+(size-1);
    printf("this is the memory of the last element %p\n", p);
    return *(arr+(size-1));//*p;//(int*)(arr+(size-1));
}

int main(void)
{
    //int N = 100001;
    //int *primes_list = {1,2,3,4,5};
    //int list[10] = {1,2,3,4,5,6,7,8};
    int *list;
    for(int i = 0;i< 20;i++)
    {
        *(list+i) = i;
    }
    for(int i = 0;i< 21;i++)
    {
        printf("%d\n", list[i]);
        printf("%d\n", *(list+i));
        printf("%p\n", list+i);
        printf("%p\n", list);
        printf("%d\n",&(list+i))
    }
    //int *a = returnLast(list,8);
    //printf("%i\n", *a);
    //printf("%i\n", returnLast2(list,8));
    //long long *primes_list = calloc(N,sizeof(long long)); //zero initialize
    //long long* c = primes(10);

    //int q[17];
    //int *q = calloc(100,sizeof(int));
    //int n = sizeof(q)/sizeof(q[0]);
    //printf("%i\n", n);


    return 0;
}