/*
** EPITECH PROJECT, 2021
** my_params_to_list.c
** File description:
** my params to list
*/

#include <stdlib.h>
#include "my.h"
#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av, int v)
{
    linked_list_t *list;
    linked_list_t *param;

    list = NULL;
    for (int i = ac - 1; i > v; i--) {
        param = malloc(sizeof(*param));
        if (param == NULL)
            return (0);
        param->data = my_getnbr(av[i]);
        param->next = list;
        list = param;
    }
    return (list);
}