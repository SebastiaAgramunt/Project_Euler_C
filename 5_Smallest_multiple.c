#include <stdio.h>


int main (void)
{
    int not_found = 1;
    int n = 2;
    int n_up_to = 20;
    int smallest_multiple = 0;

    do
    {
        not_found = 0;
        for(int i = 1; i < n_up_to+1; i++)
        {
            if(n%i!=0)
            {
                not_found = 1;
                break;
            }
            
        }
        //printf("%d %d\n", n,not_found);
        smallest_multiple = n;
        n+=1;

    }while(not_found);

    printf("Smallest mutiple divisible is %d\n", smallest_multiple);
    return 0;

}