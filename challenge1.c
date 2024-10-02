#include <stdio.h>
#include <string.h>


typedef struct{
    char lastName[10];
    char firstName[10];
    int age;
}Person;


int main(){
    Person person1;
    strcpy(person1.lastName,"Rostom");
    strcpy(person1.firstName,"Ali");
    person1.age=21;
    printf("You are %s %s\n",person1.lastName,person1.firstName);
    printf("You are %d years old",person1.age);

}