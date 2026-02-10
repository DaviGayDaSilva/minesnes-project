// Inventory Management Module
#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int id;
    char name[50];
    int quantity;
} Item;

void addItem(Item *inventory, int *size, int id, const char *name, int quantity) {
    inventory[*size].id = id;
    snprintf(inventory[*size].name, sizeof(inventory[*size].name), "%s", name);
    inventory[*size].quantity = quantity;
    (*size)++;
}

void displayInventory(Item *inventory, int size) {
    printf("Inventory:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Quantity: %d\n", inventory[i].id, inventory[i].name, inventory[i].quantity);
    }
}

int main() {
    Item inventory[100];
    int size = 0;

    addItem(inventory, &size, 1, "Potion", 10);
    addItem(inventory, &size, 2, "Ether", 5);
    displayInventory(inventory, size);
    
    return 0;
}