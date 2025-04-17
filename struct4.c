#include <stdio.h>
#define N 3
enum category {electronics, food, clothing};

typedef struct{
    char name[20];
    enum category category;
    float price;
}Production;
void structPrint(Production* product){
    printf("The name is: %s\n", product->name);
    printf("The category is: %u\n", product->category);
    printf("The price is: %f\n", product->price);
    return;
}
void foodCategory(Production * product){
    for (int i = 0; i < N; ++i){
        if(product[i].category == food){
            structPrint(&product[i]);
        }
    }
    return;
}

int main() {
    Production product[20]; 
    for (int i = 0; i < N; ++i){
        printf("%dth product is: ", i + 1);
        printf("Enter the name of the product: ");
        scanf("%s", product[i].name);

        printf("Enter the category of the product: ");
        scanf("%s", product[i].category);

        printf("Enter the price of the product: ");
        scanf("%f", &product[i].price);
    }
    foodCategory(product);
    return 0;

}
