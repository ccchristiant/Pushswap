/*
** EPITECH PROJECT, 2021
** radix_neg.c
** File description:
** ctran
*/

#include <stddef.h>
#include "my.h"
#include "mylist.h"

void radix_neg_pb(lists *list, int list_size, nbs numbers, int v)
{
    int l_a_size = 0;

    l_a_size = my_list_size((*list).l_a) - (list_size - numbers.nb_negatives);
    for (int j = 0; j < l_a_size; j++){
        pop_push(&(*list).l_a, &(*list).l_b);
        my_putstr("pb ");
        (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
    }
}

void radix_neg_child_loop(lists* list, int list_size, nbs numbers, int digit,
                          int v)
{
    for (int i = 0; i < numbers.nb_negatives; i++){
        if ((-1 * (*list).l_b->data >> digit & 1) == 0){
            pop_push(&(*list).l_b, &(*list).l_a);
            my_putstr("pa ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
        else{
            rotate(&(*list).l_b);
            my_putstr("rb ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
        if (i == numbers.nb_negatives - 1 &&
            my_list_size((*list).l_a) != list_size - numbers.nb_negatives)
            radix_neg_pb(list, list_size, numbers, v);
    }
}

void radix_neg_parent_loop(lists *list, int list_size, nbs numbers, int v)
{
    numbers.nb_stages = number_stages_neg((*list).l_b);
    for (int digit = 0; digit < numbers.nb_stages &&
             check_sorted((*list).l_b) == 84; digit++)
        radix_neg_child_loop(list, list_size, numbers, digit, v);
    for (int k = 0; k < numbers.nb_negatives; k++){
        pop_push(&(*list).l_b, &(*list).l_a);
        my_putstr((k != numbers.nb_negatives - 1) ? "pa " : "pa");
        (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
    }
}
void pb_neg(lists *list, int list_size, int v)
{
    linked_list_t *tmp_a_neg = NULL;

    for (int i = 0; i < list_size; i++){
        tmp_a_neg = (*list).l_a;
        if (tmp_a_neg->data < 0){
            pop_push(&(*list).l_a, &(*list).l_b);
            my_putstr("pb ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
        else{
            rotate(&(*list).l_a);
            my_putstr("ra ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
    }
}
