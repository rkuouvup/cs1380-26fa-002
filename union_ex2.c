#include <stdio.h>

enum item_type {BOOK, MUG, SHIRT};

struct catalog_item_t {
    int stock_number;
    double price;
    enum item_type type;
    union {
        struct {
            char title[32];
            char author[32];
            int num_pages;
        } book;
        struct {
            char design[32];
        } mug;
        struct {
            char design[32];
            unsigned int colors;
            int sizes;
        } shirt;
    } item;
};

int main() {
    struct catalog_item_t item1 = {
        .stock_number = 12345,
        .price = 23.5,
        .type = SHIRT,
        .item.shirt = {"CS T-Shirt", 1860891, 38}
    };
    struct catalog_item_t item2 = {
        .stock_number = 98765,
        .price = 15.0,
        .type = MUG,
        .item.mug = {"Thanksgiving"}
    };

    printf("T-short price:\t%lf", item1.price);
    printf("\tcolor: #%X\n", item1.item.shirt.colors);
    printf("Mug price:\t%lf", item2.price);
    printf("\tdesign: %s\n", item2.item.mug.design);
    return 0;
}