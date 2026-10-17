//Implementation of linear search algorithem.
//where the concept is looking for an em+lement in an array by going one-by-one
//until we find the intended one

#include <cs50.h>
#include <stdio.h>

int main(void){
//An array of intgers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    //search for number
    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++){
        if(numbers[i] == n){
            printf("Found\n ");
            return 0;
        }
    }
    printf("Not Found\n ");
    return 1;
}
