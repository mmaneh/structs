#include <stdio.h>
#define N 2

 typedef struct{
	char brand[20];
	char model[20];
	int year;
	float price;
}automobile;

 void printCar(automobile* car) {
    printf("Brand : %s\n", car->brand);
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Prie: %f\n", car->price);

    return;
}

automobile* mostExpensive(automobile* car) {
    return car[0].price > car[1].price ? &car[0] : &car[1];
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
    printf("The most expensive is: ");
    automobile* carik = mostExpensive(car);
    printCar(carik);
    
    return 0;
}
