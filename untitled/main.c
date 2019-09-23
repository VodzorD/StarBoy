//
// Created by 2 on 20.09.2019.
//

#include "library_wscallop.h"
#include <stdio.h>

int     main(void)
{
    char *s1 = "dcba";

    printf("%s\n", ws_sort_inputs(s1, 4));
    return (0);
}