#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
    Struct são containers customisaveis que possuem múltiplas partes de informações
    e valores semelhantes. tipo instanciar objetos em alguma linguagem poo

*/

struct Car
{
    char model[25];
    int year;
    int price;
};


typedef struct //struct Student
{
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}Student;

void printStudent(Student student);

int main(){
    // Array of structs
    struct Car cars[] = {{"Jetta",2024,200000},
                        {"Mustang" ,2024,299000},  
                        {"Challenger" ,2024,500000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++)
    {
        printf("%s %d $%d\n",cars[i].model,cars[i].year,cars[i].price);
    }
    

    



    /*
     Student student1 ={"Spongebob",30,2.5,true};
     Student student2 = {"Patric", 36,1.5,false};
     Student student3 = {"Squidward", 48,3.2,false};
     Student student4 = {0};

    strcpy(student4.name, "Sandy");

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);
*/
    return 0;
}

void printStudent(Student student){

     printf("name %s\n",student.name);
    printf("age %d\n",student.age);
    printf("gpa %.2f\n",student.gpa);
    printf("is a full time student? %s\n",(student.isFulltime)? "yes" : "no");
    printf("\n");

};