#include <stdio.h>

typedef struct{
    char firstName[10];
    char lastName[10];
    float grades[6];
}Student;




int main(){
    Student student1 = {"Ali","Rostom",{13,14,15,16,17,18}};
    printf("You are %s %s and your grades are: \n",student1.firstName,student1.lastName);
    for(int i=0;i<6;i++){
        printf("\t grade %d is : %.02f\n",i+1,student1.grades[i]);
    }

}