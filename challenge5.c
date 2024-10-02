#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char title[50];
    char author[50];
    char year[5];
}Book;

Book createBook(char title[50],char author[50],char year[5]){
    Book book1;
    strcpy(book1.title,title);
    strcpy(book1.author,author);
    strcpy(book1.year,year);
    return book1;
}
int main(){
    Book book1 = createBook("white nights","fyodor Fiodor Dostoievski","1848");
    printf("\n\tBook name:\t %s",book1.title);
    printf("\n\tBook author:\t %s",book1.author);
    printf("\n\tBook year published:\t %s",book1.year);
}