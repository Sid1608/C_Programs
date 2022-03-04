void bin_seach(int L[],int N,int item);
main()
{
    int A[]={3,11,12,25,35,47,54,56,66,77,89,90};
    int item=89;
    bin_search(A,12,item);

}
void bin_search(int L[],int N ,int item)
{
    int l=0,u=N-1,m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(item==L[m])
        {
            printf("search succesfull at index %d,Item found ",m);
            return;
        }
        else if(item>L[m])
            l=m+1;
        else
            u=m-1;
    }
    printf("Search unsuccesfull");
}
