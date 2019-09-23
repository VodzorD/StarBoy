//
// Created by 2 on 20.09.2019.
//

#include "library_wscallop.h"

typedef struct      s_film
{
    int     period;
    
};                  t_film

void    (const void *s1)
{
    size_t  index;
    void    minval;

    minval = s1[0];
    index = 0;
    while (s1[index])
    {
        if (s1[index] < minval)
            minval = s1[index];
        index++;
    }
}