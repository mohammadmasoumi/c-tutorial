#include <stdio.h>
#include <string.h>

const int COL = 10;
const int ROW = 10;

// typedef struct Person {
//     char firstName[20];
//     char lastName[20];
// } person;

typedef struct Cell {
    int x;
    int y;
    // person p;
    char content;
} cell;

typedef struct Map {
    cell mapCell[COL][ROW];
} map;

// implement move

void moveDown(map* board, int* x, int* y);

// https://www.geeksforgeeks.org/how-to-create-gui-in-c-programming-using-gtk-toolkit/

int main() {

    // create person
    // person adam;

    // strcpy(adam.firstName, "Mohmmad");
    // strcpy(adam.lastName, "Masoumi"); 

    // map
    map board;

    // start point
    int starX = 0;
    int starY = 0;

    for (int col = 0; col < COL; col++) {
        for (int row = 0; row < ROW; row++) {
                cell myCell;
                myCell.x = col;
                myCell.y = row;

                if (col == starX && row == starY)
                    myCell.content = '*';
                else
                    myCell.content = '-';

                board.mapCell[col][row] = myCell;
        }
    }

    moveDown(&board, &starX, &starY);

    for (int col = 0; col < COL; col++) {
        for (int row = 0; row < ROW; row++) {
                printf("%c", board.mapCell[col][row].content);
        }
        printf("\n");
    }

    return 0;
}

void moveDown(map* board,  int* x, int* y) {
    // cell starCell = board->mapCell[*x][*y];
    board->mapCell[*x][*y].content = '-';
    board->mapCell[++*x][*y].content = '*';
}