#include <stdio.h>
#include <stdint.h>
#include "mymodule.h"

#define MAX_COUNTER 10


int main() {
    static uint64_t warns_history[MAX_COUNTER];
    static int warn_index = 0;
    static uint64_t errors_history[MAX_COUNTER];
    static int error_index = 0;

    while(1){
        printf("wyjscie - 0, warn - 1, error - 2\n");
        int a;
        scanf("%d", &a);
        if(a==0) break;
        else if(a == 1){
            warns_history[warn_index] = WARN();
            warn_index = (warn_index+1)%MAX_COUNTER;
        }
        else if(a == 2){
            errors_history[error_index] = ERROR();
            error_index = (error_index+1)%MAX_COUNTER;
        }
        else printf("blad\n");
    }

    return 0;
}