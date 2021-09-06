/*
** EPITECH PROJECT, 2021
** pushswap.c
** File description:
** ctran
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include "mylist.h"

int sort_numbers(lists *list, int list_size, int v)
{
    nbs numbers;

    numbers.nb_stages = number_stages((*list).l_a);
    numbers.nb_negatives = number_negatives((*list).l_a);
    if (numbers.nb_negatives != 0)
        pb_neg(list, list_size, v);
    radix_pos_parent_loop(list, list_size, numbers, v);
    if (numbers.nb_negatives != 0)
        radix_neg_parent_loop(list, list_size, numbers, v);
    return (0);
}

void print_list(linked_list_t *l_a, linked_list_t *l_b)
{
    linked_list_t *tmp_a = l_a;
    linked_list_t *tmp_b = l_b;

    my_putstr("\n------l_a------\n");
    while (tmp_a != NULL){
        my_put_nbr(tmp_a->data);
        my_putchar((tmp_a->next != NULL) ? ' ' : '\n');
        tmp_a = tmp_a->next;
    }
    my_putstr("\n------l_b------\n");
    while (tmp_b != NULL){
        my_put_nbr(tmp_b->data);
        my_putchar((tmp_b->next != NULL) ? ' ' : '\n');
        tmp_b = tmp_b->next;
    }
    my_putchar('\n');
}

int check_sorted(linked_list_t *l_a)
{
    linked_list_t *tmp = l_a;

    while (tmp->next != NULL){
        if (tmp->data > tmp->next->data)
            return (84);
        tmp = tmp->next;
    }
    return (0);
}

int main(int ac, char *av[])
{
    lists list;
    int v = 0;

    if (ac != 1){
        v = (my_strcmp(av[1], "-v") == 0);
        list.l_a = my_params_to_list(ac, av, v);
        list.l_b = NULL;
        if (ac > 2 + v && check_sorted(list.l_a) == 84)
            sort_numbers(&list, ac - 1 - v, v);
        my_putchar('\n');
        return (0);
    }
    return (84);
}
