#include <stdio.h>
 struct automobile{
	char brand[20];
	char model[20];
	int year;
	float price;
};
int main () {

	
	const int n = 3;
	struct automobile car[n];
	for (int i = 0; i < n; ++i){
	    
	    printf("Car info %d", i +1);

	    printf("the brand: ");
	    scanf("%s", &car[i].brand );

	    printf("the model: ");
	    scanf("%s", &car[i].model);

	    printf("the year: ");
	    scanf("%d", &car[i].year);

	    printf("the price: ");
	    scanf("%f", &car[i].price);

	    printf("\n");
	}

for (int i = 0; i < n; ++i){

            printf("Car info %d", i +1);

            printf("the brand: %s ", car[i].brand);
       

            printf("the model: %s ", car[i].model);
           
	    printf("the year: %d ",car[i].year);
           

            printf("the price: %f ", car[i].price);
           

            printf("\n");
}

}
