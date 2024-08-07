#include <stdio.h>

int main(void) {
    int height, leftspaces, result = 0;

    do {
        printf("Height: ");
        result = scanf("%d", &height);
        // clear what is left, the * means only match and discard:
        scanf("%*[^\n]");
    }
    // while true
    while ((height < 1) || (height > 8) || (result == 0) || (result == EOF));

    // each row
    for (int row = 1; row <= height; ++row) {
        // left spaces
        leftspaces = height - row;
        for (int i = 0; i < leftspaces; ++i) {
            printf(" ");
        }
        // left hashes
        for (int i = 0; i < row; ++i) {
            printf("#");
        }
        // the gap
        printf("  ");
        // right hashes
        for (int i = 0; i < row; ++i) {
            printf("#");
        }
        // new row
        printf("\n");
    }
}
