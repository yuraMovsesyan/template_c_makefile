#include <stdio.h>            
#include "./header/test.h"
#include "./header/test2.h"

#ifdef RUN_TESTS_ON_MAKE
#include "../test/header/add_test.h"
#endif


int main()                      
{             
    #ifdef RUN_TESTS_ON_MAKE
        add_test();
        return 0;
    #endif

    say_hi("Yura");
    print_5();
    printf("2 + 2 = %d \n", add(2, 2)); 
    
    return 0;                       
}        