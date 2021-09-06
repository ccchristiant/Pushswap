/*
** EPITECH PROJECT, 2021
** advanced_ops.c
** File description:
** ctran
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include "mylist.h"

void pop_push(linked_list_t **l_pop, linked_list_t **l_push)
{
    if (*l_pop != NULL)
        push(l_push, pop(l_pop));
}

void rotate(linked_list_t **head)
{
    if (my_list_size(*head) != 1)
        push_end(*head, pop(head));
}

void swap(linked_list_t **head)
{
    int tmp = (*head)->data;

    (*head)->data = (*head)->next->data;
    (*head)->next->data = tmp;
}
