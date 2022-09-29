#include <stdio.h>
#define INF 10000

int min_nodes(int *nodes_num, int *bia_node, int *visited)
{
    int i, min_node=100 ;
    for(i=0;i<*nodes_num;i++)
    {
        if(*visited[i]!=0)
        {
            if
        }
    }
}

int main()
{
    int nodes_num = 6 ;
    int nodes =
    {
        {0, 5, 1, 6, INF, INF}  // 0
        {5, 0, 2, 3, 1, INF}  // 1
        {1, 2, 0, INF, 4, INF}  // 2
        {6, 3, INF, 0, 1, 4}  // 3
        {INF, 1, 4, 1, 0, 3}  // 4
        {INF, INF, INF, 4, 3, 0}  // 5
    } ;
    int min_weight[6] = 0 ;
    int bia_node[6] = 0 ;
    int visited[6] = 0 ;
}
