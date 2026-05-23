#include <stdio.h>

struct stores {
    char name[20];
    float price;
    int quantity;
};

// Prototypes
struct stores update(struct stores product, float p, int q);
float mul(struct stores stock);

int main() {
    float p_increment, value;
    int q_increment;
    struct stores item = {"XYZ", 25.75, 12};

    printf("\nInput increment values (price and quantity):\n");
    // Corrected scanf syntax
    if (scanf("%f %d", &p_increment, &q_increment) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    item = update(item, p_increment, q_increment);

    printf("Updated values of item:\n");
    printf("Name     : %s\n", item.name);
    printf("Price    : %.2f\n", item.price);
    printf("Quantity : %d\n", item.quantity);

    value = mul(item);
    printf("\nValue of the item = %.2f\n", value);

    return 0;
}

struct stores update(struct stores product, float p, int q) {
    product.price += p;    // Changed from +- to +=
    product.quantity += q; // Changed from +- to +=
    return product;
}

float mul(struct stores stock) {
    return (stock.price * stock.quantity);
}
