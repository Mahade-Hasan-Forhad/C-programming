#include<stdio.h>
int main()
{
    int N,i,array[100];
    int max=0;
    scanf("%d\n",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    printf("%d",max);
}
