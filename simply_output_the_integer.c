#include<stdio.h>
int main()
{
    void PrintfN(int N);
    int N;
    scanf("%d",&N);
    PrintfN(N);
    return 0;
}

void PrintfN(int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%d\n",i+1);
    }
}