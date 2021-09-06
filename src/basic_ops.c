/*
** EPITECH PROJECT, 2021
** basic_ops.c
** File description:
** ctran
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include "mylist.h"

int pop(linked_list_t **head)
{
    int popped = 0;
    linked_list_t *new_head = NULL;

    popped = (*head)->data;
    new_head = (*head)->next;
    free(*head);
    *head = new_head;
    return (popped);
}

void push(linked_list_t **head_ref, int new_data)
{
    linked_list_t *new_node = malloc(sizeof(*new_node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void push_end(linked_list_t *head, int new_data)
{
    linked_list_t *current = head;

    while (current->next != NULL)
        current = current->next;
    current->next = malloc(sizeof(*current));
    current->next->data = new_data;
    current->next->next = NULL;
}