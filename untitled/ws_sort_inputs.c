//
// Created by 2 on 20.09.2019.
//

#include "library_wscallop.h"

void    ft_swap(void a, void b)
{
    void    buff;

    buff = a;
    a = b;
    b = buff;
}

void    *ws_sort_inputs(const void *s, size_t n)
{
    size_t  index_x;
    size_t  index_y;
    void    *src;

    src = (void *)s;
    index_x = 0;
    if (!s && n)
        return (NULL);
    while (index_x != n)
    {
        index_y = index_x;
        while (index_y != 0 && src[index_y] < src[index_y - 1])
        {
            ft_swap(src[index_y], src[index_y - 1]);
            j--;
        }
        index_x++;
    }
    return (src);
}
