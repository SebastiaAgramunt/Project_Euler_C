#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N = 1000;

    //first compute the squares
    int *squares = (int*)calloc(N, sizeof(int));
    for(int a =0; a<N; a++) squares[a] = a*a;
    int found = 0;
    int c;
    for(int a = 1; a < N; a++)
    {
        for(int b = a; b < N; b++)
        {
            c = N-b-a;
            if(c < 0) break;
            if(c<=b){break;}
            if((squares[a] + squares[b]) == squares[c]){printf("a = %d b = %d c = %d sum = %d as = %d bs = %d cs = %d prod = %d\n",a,b,c,a+b+c,squares[a],squares[b],squares[c],a*b*c);}
        }
    }

    return 0;
}