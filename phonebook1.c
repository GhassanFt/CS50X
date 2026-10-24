#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct //creating a datatype called person that has two strings (name, number)
{
    string name;
    string number;
}person;

int main(void){
    person people[3]; //array that has 3 elements from datatype person.
    people[0].name = "Kelly";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";


    people[2].name = "John";
    people[2].number = "+1-949-468-2750";

    //Search for name
    string name = get_string("Name: ");
    for(int i = 0; i < 3; i++){
        if(strcmp(people[i].name, name)==0){
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("NotFound\n");
    return 1;
}
