/*
** EPITECH PROJECT, 2021
** mylist.h
** File description:
** mylist
*/
#ifndef MYLIST_H_
#define MYLIST_H_

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} linked_list_t;

typedef struct two_lists
{
    linked_list_t *l_a;
    linked_list_t *l_b;
}lists;

typedef struct numbers
{
    int nb_stages;
    int nb_negatives;
}nbs;

linked_list_t *my_params_to_list(int ac, char *const *av, int v);
int my_list_size(linked_list_t const *begin);
int number_stages(linked_list_t *l_a);
int number_stages_neg(linked_list_t *l_b);
int number_negatives(linked_list_t *l_a);
int pop(linked_list_t **head);
void push(linked_list_t **head_ref, int new_data);
void push_end(linked_list_t *head, int new_data);
void pop_push(linked_list_t **l_pop, linked_list_t **l_push);
void rotate(linked_list_t **head);
void swap(linked_list_t **head);
void radix_pos_pa(lists *list, nbs numbers, int digit, int v);
void radix_pos_child_loop(lists *list, int list_size, nbs numbers, int digit, int v);
void radix_pos_parent_loop(lists *list, int list_size, nbs numbers, int v);
void radix_neg_pb(lists *list, int list_size, nbs numbers, int v);
void radix_neg_child_loop(lists* list, int list_size, nbs numbers, int digit, int v);
void radix_neg_parent_loop(lists *list, int list_size, nbs numbers, int v);
void pb_neg(lists *list, int list_size, int v);
int sort_numbers(lists *list, int list_size, int v);
void print_list(linked_list_t *l_a, linked_list_t *l_b);
int check_sorted(linked_list_t *l_a);

#endif
