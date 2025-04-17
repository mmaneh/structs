#include <stdio.h>
#define N 5
typedef struct {
    char name[30];
    int age;
    float mark;
}student;
void structPrint(student* person){
    printf("The name is: %s\n", person->name);
    printf("The age is: %d\n", person->age);
    printf("The name is: %f\n", person->mark);
    return;
}
void theHighestMark(student* person){
    student* max = &person[0];
    for (int i = 1; i < N; ++i) {
        if(max -> mark < person[i].mark ){
            max = &person[i];
        }
    }
    printf("The student with highest mark is: ");
    structPrint(max);
}

int main() {
    student person[N];

    for (int i = 0; i < N; ++i){
        printf(" %d Student info\n", i + 1);
        printf("Enter the name of the student: ");
        scanf("%s", person[i].name);

        printf("Enter the age of the student: ");
        scanf("%d", &person[i].age);

        printf("The mark of the student is: ");
        scanf("%f", &person[i].mark);
    }    
        theHighestMark(person);
        return 0;
    
}
