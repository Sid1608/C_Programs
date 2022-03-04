/* Floyd Warshall's Algorithm*/
#define INF 99999
struct Graph{
    int V,E;
    int *Adj;
};
void floydwarshall(struct Graph *G);
void printSolution(struct Graph *G)
main()
{
    struct Graph *G;
    int i,j;
    int matrix[4][4]={ {0,5,INF,10},
                       {INF,0,3,INF}
                       {INF,INF,0,1}
                       {INF,INF,INF,0}};
    G=(struct Graph*)malloc(sizeof(struct Graph));
    G->V=4;
    G->E=4;
    G->Adj=malloc((G->V)*(G->V)*sizeof(int));
    for(i=0;i<G->V;i++)
    {

        for(j=0;j<G->V;j++)
            *(G->Adj+i*G->V+j)=matrix[i][j];
    }
    printf("Orignal distace");
    printSolution(G);
    floydwarshall(G);
    printf("Matrix below shows the shortest distances between every");
    printSolution(G);
}
void floydwarshall(struct Graph *G)
{
    int i,j,k;
    int dist[G->V][G->V];
    for(i=0;i<G->V;i++)
    {
        for(j=0;j<G->V;j++)
        {
            dist[i][j]=*(G->Adj+i*G->V+j);
        }
    }
    for(k=0;k<G-V;k++)
    {
        for(i=0;i<G->V;i++)
        {
            for(j=0;j<G->V;j++)
            {
                if(dist[i][k]+dist[k][j]<dist[i][j]);
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    for(i=0;i<G->V;i++)
        for(j=0;j<G->V;j++)
            *(G->Adj+i*G->V+j)=dist[i][j];

}
void printSolution(struct Graph *G)
{
    int i,j;
    for(i=0;i<G->V;i++)
    {
        for(j=0;j<G->V;j++)
        {
            if(*(G->Adj+i*G->V+j)==INF)
                printf("%7s","INF");
            else
                printf("%7d",*(G->Adj+i*G->V+j));
        }
        printf("\n");
    }

}
