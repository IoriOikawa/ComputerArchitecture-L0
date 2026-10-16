#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct record {
    char* name;
    int ID;
    char if_grad;
} SR;

int same_name (SR* s1, SR* s2) {
    if (strcmp(s1->name, s2->name) == 0)
        return 1;
    else
        return 0;
}

int main() {

    SR Alice;
    Alice.name = "Alice";
    Alice.ID = 987654;
    Alice.if_grad = 'F';
    printf("Name: %s, ID: %d, if graduate class: %c\n", Alice.name, Alice.ID, Alice.if_grad);

    SR CSCI260[25];
    CSCI260[17].name = "Bob";
    CSCI260[17].ID = 1001;
    CSCI260[17].if_grad = 'T';
    SR* Bob = &CSCI260[17];
    printf("Name: %s, ID: %d, if graduate class: %c\n", (*Bob).name, Bob->ID, (*Bob).if_grad);


    SR* John = (SR*) malloc(sizeof(SR));
    John->name = "John Doe";
    (*John).ID = 123456;
    John->if_grad = 'T';
    printf("Name: %s, ID: %d, if graduate class: %c\n", (*John).name, John->ID, (*John).if_grad);
    
    int flag = same_name(&Alice, John);
    if (flag)
        printf("Same name!\n");
    else
        printf("Not same names.\n");



    return 0;
}
