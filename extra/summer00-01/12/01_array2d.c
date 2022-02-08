#include <stdio.h>

/*

int arr[100];

0 1 2  ...   99
[][][][] ... []

int arr2D[10][10]

  0 1 2 ...      9 
0 [][][][] .... []
1 [][][][] .... []
2 [][][][] .... []
...
9 [][][][] .... []

the first is colomn
the second is row
arr2D[0][0]
arr2D[0][1]
...
arr2D[0][9]

arr2D[colomn][row]
*/

// uppercase -> ABCD
// lowercase -> abcd
// camelcase -> AbcdE
// snakecase -> abc_de

// constant
// convention
const int MAX = 5;

int main()
{

    // braces
    float arr2D[MAX][MAX] = {
        {0.0, 0.1, 0.2, 0.3, 0.4},
        {1.0, 1.1, 1.2, 1.3, 1.4},
        {2.0, 2.1, 2.2, 2.3, 2.4},
        {3.0, 3.1, 3.2, 3.3, 3.4},
        {4.0, 4.1, 4.2, 4.3, 4.4}};
    /* 
        i = 0 arr2D[0][0], arr2D[0][1], ... , arr2D[0][4]
        i = 1 arr2D[1][0], arr2D[1][1], ... , arr2D[1][4]
        ...
        arr2D[4][0], arr2D[4][1], ... , arr2D[4][4]
    */
    // nested for-loop: 5 * 5
    for (int i = 0; i < MAX; i++)
    { // i = 1
        for (int j = 0; j < MAX; j++)
        {                                                        // j = 0
            printf("arr[%d][%d]: [%1.1f]\t", i, j, arr2D[i][j]); // i = 0, j = 4
        }
        printf("\n");
    }

    // scanf("%d", &arr[i])

    return 0;
}