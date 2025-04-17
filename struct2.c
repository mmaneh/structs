#include <stdio.h>
#define N 2

 typedef struct{
	char brand[20];
	char model[20];
	int year;
	float price;
}automobile;

void printStruct(automobile* car) {
    printf("Brand : %s\n", car->brand);
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Prie: %f\n", car->price);

    return;
}

void theNewest (automobile* car) {
    automobile* new = &car[0];
    for (int i = 1; i < N; ++i) {
        if (new->year < car[i].year) {
             new = &car[i];
        }
     }
     printf("The newest is: \n");
     printStruct(new);

}

void theCheapest(automobile* car) {

    automobile* min = &car[0];

    for (int i = 1; i < N; ++i) {
       if (min->price > car[i].price) {
            min = &car[i];
       }
    }
    printf("The cheapest is: \n");
    printStruct(min);
}

int main () {

	automobile car[N];
	for (int i = 0; i < N; ++i) {
	    printf("Car info %d", i +1);

	    printf("the brand: ");
	    scanf("%s", car[i].brand );

	    printf("the model: ");
	    scanf("%s", car[i].model);

	    printf("the year: ");
	    scanf("%d", &car[i].year);

	    printf("the price: ");
	    scanf("%f", &car[i].price);
	}

    theCheapest(car);
    theNewest(car);
    
    return 0;
}
