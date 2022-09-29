#include <stdio.h>
#define INF 10000

int nodes[6][6] =
    {
        {0, 5, 1, 6, INF, INF},   // 0
        {5, 0, 2, 3, 1, INF},     // 1
        {1, 2, 0, INF, 4, INF},   // 2
        {6, 3, INF, 0, 1, 4},     // 3
        {INF, 1, 4, 1, 0, 3},     // 4
        {INF, INF, INF, 4, 3, 0}  // 5
    } ;

int min_node(int node, int visited[]) ;
void result(int i, int node, int bia_node[], int visited[]) ;

int main()
{
    int i, j, node=0 ;
    int bia_node[6] = {0} ;  // 각 노드별 최소 경로의 직전 노드
    int visited[6] = {0} ;  // 확인한 노드

    for(i=0;i<6;i++)
    {
        result(i, node, bia_node, visited) ;
        node = min_node(node, visited) ;

        for(j=0;j<6;j++)
        {
            if(nodes[0][node]+nodes[node][j]<nodes[0][j])
            {
                nodes[0][j] = nodes[0][node]+nodes[node][j] ;
                bia_node[j] = node ;
            }
        }
    }

    return 0 ;
}

// 확인하지 않은 노드 중 최소경로 노드 반환
int min_node(int node, int visited[])
{
    int i, node_bf, min=INF ;
    visited[node] = 1 ;

    for(i=0;i<6;i++)
    {
        if(visited[i]==0)
        {
            if(nodes[node][i]<min)
            {
                node_bf = i ;
                min = nodes[node][i] ;
            }
        }
    }

    return node_bf ;
}

// 각 과정별 결과 출력
void result(int i, int node, int bia_node[], int visited[])
{
    int j ;

    printf("STEP %d  : ", i+1) ;
    for(j=0;j<6;j++)
    {
        if(nodes[0][j]==INF)
        {
            printf("* ") ;
        }
        else
        {
            printf("%d ", nodes[0][j]) ;
        }
    }
    printf("\nBIA     : ") ;
    for(j=0;j<6;j++)
    {
        printf("%d ", bia_node[j]) ;
    }
    printf("\nVISITED : ") ;
    for(j=0;j<6;j++)
    {
        printf("%d ", visited[j]) ;
    }
    printf("\nNODE    : %d\n", node) ;
    printf("\n\n") ;
}
