#include <stdio.h>

int main(void) {

    int a = 20;
    if(a < 20){
        printf("a is less than 20\n" );
    }else if(a == 20){
        printf("a is 20\n" );
    }else{
        printf("a is not less than 20\n" );
    }
    printf("a is %d\n", a);

    return 0;
}
