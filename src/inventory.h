#ifndef INVENTORY_H
#define INVENTORY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of items in the inventory
#define MAX_ITEMS 100

typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

typedef struct {
    Item items[MAX_ITEMS];
    int itemCount;
} Inventory;

// Function prototypes
void initializeInventory(Inventory *inventory);
void addItem(Inventory *inventory, const char *name, int quantity, float price);
void removeItem(Inventory *inventory, const char *name);
void displayInventory(const Inventory *inventory);

#endif // INVENTORY_H
