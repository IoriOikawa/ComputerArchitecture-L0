#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LibRec {
    char* title;
    int deadline;
    struct LibRec *next;

} rec;


int isEmpty(rec* LL) {
    if (LL == NULL)
        return 1;
    else
        return 0;
}

int printLL(rec* LL) {
    if (isEmpty(LL)) {
        printf("Linked List is empty.\n");
        return 0;
    }
    else {
        rec *head = LL;

        printf("Books: ");
        printf("%s (%d days until due) -> ", head->title, head->deadline);
        while (head->next != NULL) {
            head = head->next;
            printf("%s (%d days until due) -> ", head->title, head->deadline);
        }
        printf("\n");

        return 1;
    }

}

int insert(rec** LL, rec* new_book) {
    if (*LL == NULL) {
        *LL = new_book;
        return 1;
    }
    else {
        rec* head = *LL;
        while (head->next != NULL) {
            head = head->next;
        }
        head->next = new_book;
        return 1;
    }
    return 0;
}

rec* setBook(char title[], int deadline) {
    rec* newbook = (rec*) malloc(sizeof(rec));
    newbook->title = title;
    newbook->deadline = deadline;
    newbook->next = NULL;

    return newbook;
}

void insert_new(rec** LL, char title[], int deadline) {
    rec* new_book = (rec*) malloc(sizeof(rec));
    new_book->title = title;
    new_book->deadline = deadline;
    new_book->next = NULL;

    if (*LL == NULL) {
        *LL = new_book;
    }
    else {
        rec* head = *LL;
        while (head->next != NULL)
            head = head->next;
        head->next = new_book;
    }

}

void remove_book(rec** LL, char title[]) {
    rec* head = *LL;

    if (isEmpty(*LL)) {
        printf("Remove failed: no book record.\n");
        return;
    }
    else {
        rec* prev;
        while (strcmp(head->title, title) != 0) {
            if (head->next != NULL) {
                prev = head;
                head = head->next;
            }
            else {
                printf("Remove failed: no such title.\n");
                return;
            }

        }

        // now have found
        prev->next = head->next;
        free(head);


    }
}

void insert_book_val(rec** LL, char title[], int deadline) {
    rec* curr = *LL;
    rec* prev;

    rec* new_book = (rec*) malloc(sizeof(rec));
    new_book->title = title;
    new_book->deadline = deadline;
    new_book->next = NULL;

    while (curr->deadline < deadline) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = new_book;
    new_book->next = curr;
}

int main() {

    rec* John = NULL;

    rec* new_book;
//    new_book = setBook('A');
//    insert(&John, new_book);
//    new_book = setBook('B');
//    insert(&John, new_book);
//    new_book = setBook('C');
//    insert(&John, new_book);

    insert_new(&John, "Calculus I", 180);
    insert_new(&John, "Calculus II", 360);
    insert_new(&John, "Calculus III", 720);
    printLL(John);

    insert_book_val(&John, "Linear Algebra", 250);
    printLL(John);

    remove_book(&John, "Calculus II");
    printLL(John);


//    rec* Alice = NULL;
//    new_book = setBook("Computer Architecture", 30);
//    insert(&Alice, new_book);
//    new_book = setBook("Discrete Mathematics", 60);
//    insert(&Alice, new_book);
//    new_book = setBook("Algorithms Analysis", 180);
//    insert(&Alice, new_book);
//
//    printLL(Alice);

    return 0;
}
