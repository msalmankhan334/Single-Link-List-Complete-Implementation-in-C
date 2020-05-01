#include <stdlib.h>
#include <stdio.h>
#include "ftnsheader.h"

void printList(node *head)
{
    node *p = NULL;
    p = head;
    if(p == NULL) {
        printf("List is Empty no Element  Exits\n");
        return;
    }
    printf("The List is: \n");
    while (p != NULL)
    {
        printf("%d -->", p->number);
        p = p->next;
    }
    printf("%p", p);
    printf("\n");
}
int getnumber(char *str)
{
    int value;
    printf("%s ", str);
    scanf("%d", &value);
    return value;
}

int Listlength(node **head)
{
    node *p;
    int count = 0;
    p = *head;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
struct node *createlistNsize(int size)
{
    node *temp, *p, *head;
    head = NULL;
    p = NULL;
    temp = NULL;
    for (int i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(node));
        temp->number = getnumber("Enter New Number: ");
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}
void insertAtStart(node **head){
    node *p, *temp;
    p = *head;
    if(p == NULL){
        temp = (struct node *)malloc(sizeof(node));
        if(temp == NULL){
            printf("Error in Allocating Memory\n");
            exit(0);
        }
        temp->number = getnumber("Enter New Number: ");
        temp->next = NULL;
        p = temp;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(node));
        if (temp == NULL)
        {
            printf("Error in Allocating Memory\n");
            exit(0);
        }
        temp->number = getnumber("Enter New Number: ");
        temp->next = p;
        *head = temp;
        
    }
    
}
void insertAtEnd(node **head) {
    node *temp, *p;
    p = *head;
    while(p->next != NULL) {
        p = p->next;
    }
    temp = (node *)malloc(sizeof(node));
    if(temp == NULL){
        printf("Error in Allocating Memory\n");
        exit(0);
    }
    temp->number = getnumber("Enter New Number: ");
    temp->next = NULL;
    p->next = temp;
}
void InsertAtPosition(node **head, int pos) {
    node *temp, *p, *q; 
    int k = 1;
    p = *head;
    q = *head;
    temp = (node *)malloc(sizeof(node));
    if(temp == NULL) {
        printf("Error in Allocating Memory\n");
        exit(0);
    }
    if(pos == 1) {
        insertAtStart(head);
    }
    else if (pos >= Listlength(head)) {
        insertAtEnd(head);
    }
    else
    {
        while(k < pos) {
            p = q;
            q = q->next;
            k++;
        }
        temp->number = getnumber("Enter New Number: ");
        temp->next = q;
        p->next = temp;
    }
}
void deleteNodefromStart(node **head) {
    node *p;
    p = *head;
    *head = p->next;
    free(p);
}
void deleteNodefromEnd(node **head) {
    node *p, *q;
    q = *head;
    while(q->next != NULL) {
        p = q;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}
void deleteNodefromPosition(node **head, int pos) { 
    node *temp, *p, *q;
    int k = 1;
    p = *head;
    q = *head;
    if (pos == 1)
    {
        deleteNodefromStart(head);
    }
    else if (pos >= Listlength(head))
    {
        deleteNodefromEnd(head);
    }
    else
    {
        while (k < pos)
        {
            p = q;
            q = q->next;
            k++;
        }
        p->next = q->next;
        free(q);
    }
}