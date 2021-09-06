/*
** EPITECH PROJECT, 2021
** number_stages_negatives.c
** File description:
** ctran
*/

#include <stddef.h>
#include "mylist.h"

int number_stages(linked_list_t *l_a)
{
    linked_list_t *tmp = l_a;
    int max = 0;
    int x = 0;

    while (tmp != NULL){
        if (tmp->data > max)
            max = tmp->data;
        tmp = tmp->next;
    }
    for (; (max >> x & 2147483647) >= 1; x++);
    return (x);
}

int number_stages_neg(linked_list_t *l_b)
{
    linked_list_t *tmp = l_b;
    int min = 0;
    int x = 0;

    while (tmp != NULL){
        if (tmp->data < min)
            min = tmp->data;
        tmp = tmp->next;
    }
    for (; (-1 * min >> x & 2147483647) >= 1; x++);
    return (x);
}

int number_negatives(linked_list_t *l_a)
{
    linked_list_t *tmp = l_a;
    int nb = 0;

    while (tmp != NULL){
        nb += (tmp->data < 0);
        tmp = tmp->next;
    }
    return (nb);
}