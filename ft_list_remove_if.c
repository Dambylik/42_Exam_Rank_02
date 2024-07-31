#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return;

    t_list *current = *begin_list;
    t_list *previous = NULL;
    while (current != NULL)
    {
        if (cmp(current->data, data_ref) == 0)
        {
            t_list *to_free = current;
            if(previous == NULL)
            {
                *begin_list = current->next;
                current = *begin_list;          
            }
            else
            {
                previous->next = current->next;
                current = current->next;
            }
            free(to_free);
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }

}
    



// Function to create a new list node
t_list *create_node(void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to add a node at the beginning of the list
void push_front(t_list **begin_list, void *data)
{
    t_list *new_node = create_node(data);
    if (!new_node)
        return;
    new_node->next = *begin_list;
    *begin_list = new_node;
}

// Comparison function to be used with ft_list_remove_if
int cmp(void *data1, void *data2)
{
    return strcmp((char *)data1, (char *)data2);
}

// Function to print the list
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}



int main()
{
    t_list *list = NULL;

    // Adding elements to the list
    push_front(&list, "three");
    push_front(&list, "two");
    push_front(&list, "one");
    push_front(&list, "zero");

    printf("Original list:\n");
    print_list(list);

    // Removing elements equal to "two"
    ft_list_remove_if(&list, "two", cmp);

    printf("List after removing 'two':\n");
    print_list(list);

    // Clean up remaining elements
    ft_list_remove_if(&list, "zero", cmp);
    ft_list_remove_if(&list, "one", cmp);
    ft_list_remove_if(&list, "three", cmp);

    printf("List after removing all elements:\n");
    print_list(list);

    return 0;
}
