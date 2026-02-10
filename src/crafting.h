#ifndef CRAFTING_H
#define CRAFTING_H

// Crafting system definitions

typedef struct {
    int input1;
    int input2;
    int output;
    int quantity;
} Recipe;

// Function prototypes
void initCrafting();
void craft(int recipeId);
void displayRecipes();

// Recipe IDs
#define RECIPE_WOODEN_PLANK 0   // 2x Wood -> 4x Wooden Plank
#define RECIPE_PICKAXE 1        // 4x Wood -> 1x Pickaxe
#define RECIPE_SWORD 2          // 2x Stone -> 1x Sword
#define RECIPE_HEAL 3           // 1x Meat -> Restore Health

#endif // CRAFTING_H