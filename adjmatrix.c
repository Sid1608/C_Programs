struct Graph
{
    int V;
    int E;
    int **Adj;
};
struct Graph *adjmatrixofgraph()
{
    int u,v,i;
    struct Graph *G=(struct Graph*)malloc(sizeof(struct Graph));
    if(G)
    {
        printf("memory error");
        return;
    }
    printf("Enter no of nodes and no of edges");
    scanf("%d%d",&G->V,&G->E);
    G->Adj=malloc(sizeof(int)*(G->V*G->V));
    for(u=0;u<G->V;u++)
    {
        for(v=0;v<G->V;v++)
            G->Adj[u][v]=0;
    }
    printf("Enter node number in a pair that connects an edge");
    for(i=0;i<G->E;i++)
    {

        scanf("%d%d",&u,&v);
        G->Adj[u][v]=1;
        G->Adj[v][u]=1;
    }

}
