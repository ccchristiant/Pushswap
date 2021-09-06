/*
** EPITECH PROJECT, 2021
** radix_pos.c
** File description:
** ctran
*/

#include <stddef.h>
#include "my.h"
#include "mylist.h"

void radix_pos_pa(lists *list, nbs numbers, int digit, int v)
{
    int l_b_size = my_list_size((*list).l_b) - numbers.nb_negatives;

    for (int j = 0; j < l_b_size; j++){
        pop_push(&(*list).l_b, &(*list).l_a);
        if (digit == numbers.nb_stages - 1 && j == l_b_size - 1 &&
            numbers.nb_negatives == 0)
            my_putstr("pa");
        else
            my_putstr("pa ");
        (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
    }
}

void radix_pos_child_loop(lists *list, int list_size, nbs numbers, int digit,
                          int v)
{
    for (int i = 0; i < list_size - numbers.nb_negatives; i++){
        if (((*list).l_a->data >> digit & 1) == 0){
            pop_push(&(*list).l_a, &(*list).l_b);
            my_putstr("pb ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
        else{
            rotate(&(*list).l_a);
            if (digit == numbers.nb_stages - 1 && i == list_size - 1 &&
                (*list).l_b == NULL && numbers.nb_negatives == 0)
                my_putstr("ra");
            else
                my_putstr("ra ");
            (v == 1) ? print_list((*list).l_a, (*list).l_b) : 0;
        }
        if (i == list_size - numbers.nb_negatives - 1 &&
            my_list_size((*list).l_b) != numbers.nb_negatives)
            radix_pos_pa(list, numbers, digit, v);
    }
}

void radix_pos_parent_loop(lists *list, int list_size, nbs numbers, int v)
{
    for (int digit = 0; digit < numbers.nb_stages &&
             check_sorted((*list).l_a) == 84; digit++)
        radix_pos_child_loop(list, list_size, numbers, digit, v);
}
