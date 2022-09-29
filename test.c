#include <stdio.h>
#define INF 10000

void result(int a[])
{
    printf("%d", a[0]) ;
}

int main()
{
    int nodes[6][6] =
    {
        {0, 5, 1, 6, INF, INF},   // 0
        {5, 0, 2, 3, 1, INF},     // 1
        {1, 2, 0, INF, 4, INF},   // 2
        {6, 3, INF, 0, 1, 4},     // 3
        {INF, 1, 4, 1, 0, 3},     // 4
        {INF, INF, INF, 4, 3, 0}  // 5
    } ;

    int array[6] = {1, 2, 3, 4, 5, 6};


    result(array) ;
}
