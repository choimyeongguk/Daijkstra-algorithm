#include <stdio.h>
#define INF 10000

// 확인하지 않은 노드 중 최소경로 노드 반환
int min_nodes(int *nodes_num, int node, int *min_weight, int *visited)
{
    int i, min_node, min=INF ;
    visited[node] = 1 ;

    for(i=0;i<*nodes_num;i++)
    {
        if(*visited[i]==0)
        {
            if(*min_weight[i]<min)
            {
                min_node = i ;
                min = *min_weight ;
            }
        }
    }

    return min_node ;
}

int main()
{
    int i, min=INF, node=0 ;
    int node_num = 6 ;
    int nodes =
    {
        {0, 5, 1, 6, INF, INF}  // 0
        {5, 0, 2, 3, 1, INF}  // 1
        {1, 2, 0, INF, 4, INF}  // 2
        {6, 3, INF, 0, 1, 4}  // 3
        {INF, 1, 4, 1, 0, 3}  // 4
        {INF, INF, INF, 4, 3, 0}  // 5
    } ;

    int bia_node[6] = 0 ;  // 각 노드별 최소 경로의 직전 노드
    int visited[6] = 0 ;  // 확인한 노드

    for(i=0;i<6;i++)
    {
        printf("STEP %d: ", i+1) ;
        for(j=0;j<6;j++) printf("%d ", nodes[i][j]) ;
        node = min_nodes(&node_num, &node, &min_weight, &visited) ;

    }
}
