/*
** EPITECH PROJECT, 2021
** my_list_size.c
** File description:
** my list size
*/

#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    while (begin != NULL) {
        i++;
        begin = begin->next;
    }
    return (i);
}
