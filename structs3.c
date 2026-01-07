#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point myPoint;
    struct Point *ptr = &myPoint; // ptr now points to myPoint

    // Using scanf with a pointer
    printf("Enter X and Y coordinates: ");
    scanf("%d %d", &ptr->x, &ptr->y); 

    // Using printf with a pointer
    printf("Coordinates are: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}