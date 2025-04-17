#include <stdio.h>
#define N 4

typedef struct{
    char title[20];
    char author[20];
    int year;
}book;
void structPrint(book* library){
    printf("The title is: %s\n", library->title);
    printf("The author is: %s\n", library->author);
    printf("The year is: %d\n", library->year);
    return;
}
void oldestBook(book * library){
	book* min = &library[0];
    for (int i = 0; i < N; ++i){
        if(min->year > library[i].year){
           min = &library[i];
        }
    
    }
        printf("The oldest book is: ");
	structPrint(min);
    
    return;
}

int main() {
    book library[20];
    for (int i = 0; i < N; ++i){
        printf("%dth book info is: ", i + 1);
        printf("Enter the title of the book: ");
        scanf("%s", library[i].title);

        printf("Enter the author of the book: ");
        scanf("%s", library[i].author);

        printf("Enter the year of the book: ");
        scanf("%d", &library[i].year);
    }
    oldestBook(library);
    return 0;

}

