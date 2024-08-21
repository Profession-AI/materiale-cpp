[esercitazione] Break e continue

#include <stdio.h>

int main(){
    for (int counter = 0; counter < 11; counter++){
        printf("%d ", counter);
        if(counter % 3 == 0){
            break;
        }
    }
    return 0;
}

for (int counter = 1; counter < 11; counter++) {
    if (counter % 3 == 0) {
        continue;
    }
    printf("%d ", counter);
}
