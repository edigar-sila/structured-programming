#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    int table[6][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    for (r = 0; r < 6; r++) {
        for (c = 0; c < 4; c++) {
            printf("table[%d][%d] = %d\n", r, c, table[r][c]);
        }
    }

    return 0;
}
