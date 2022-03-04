
main()
{
    void seq_search(int,int,int);
    int A[]={22,44,11,77,88,55,99,33,66,1,100}
    seq_search(A,11,66);
}
void seq_search(int L[],int N,int item)
{
    int flag=1,k;
    for(k=0;k<=N-1;k++)
    {
        if(L[k]==item)
        {
            flag=0;
            printf("search succesfull");
        }
    }
    if(flag==1)
        printf("Search unsuccessfull");
}
