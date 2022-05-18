
/*
 *_________________________________________________________MILIND IS LEARNING_________________________________________________________________
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Linkedlisttraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// struct Node *insertAtFirst(struct Node * head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }

struct Node * insertAtIndex(struct Node * head, int data,int index)
{
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;  // head ko khona nhi chahta 
    int  i = 0;

    while(i!=(index-1)) 
    {
        p = p->next;
        i++;
    }// ek node phele p ko leke khada kar raha hun
    ptr->data = data; //data daala naya pointer mei
    ptr->next = p->next; // 
    p->next = ptr;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = NULL;

    // Linkedlisttraverse(head);
    // head = insertAtFirst(head,56);
    head = insertAtIndex(head,64,2);
    Linkedlisttraverse(head);
    

    return 0;
}
