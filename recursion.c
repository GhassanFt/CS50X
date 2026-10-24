#include<cs50.h>
#include <stdio.h>

void draw(int n); //prototype.

int main (void){
    int height = get_int("Height: ");
    draw(height);

}

void draw(int n){

    if (n <= 0){
        return; //base case of recursion
    }
    //print pyramid of height n - 1
    draw(n - 1);
    
    //print one more row
    for (int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}
