#include <stdio.h>

// Function to handle player movement
void movePlayer(int direction) {
    switch (direction) {
        case 0: // Move Up
            printf("Player moves up\n");
            break;
        case 1: // Move Down
            printf("Player moves down\n");
            break;
        case 2: // Move Left
            printf("Player moves left\n");
            break;
        case 3: // Move Right
            printf("Player moves right\n");
            break;
        default:
            printf("Invalid direction\n");
    }
}

// Function to perform player action
void playerAction(int action) {
    switch (action) {
        case 0: // Jump
            printf("Player jumps\n");
            break;
        case 1: // Shoot
            printf("Player shoots\n");
            break;
        default:
            printf("Invalid action\n");
    }
}