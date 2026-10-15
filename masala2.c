#include <stdio.h>

int main(){
    FILE *f = fopen("sonlar.txt", "r");
    char harf, katta_harflar=0;

    while(fscanf(f, "%s", harf) == 1){
        
    }
}