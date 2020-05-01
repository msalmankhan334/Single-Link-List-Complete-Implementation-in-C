#include <stdio.h>
#include "ftnsheader.h"

int main() {
    int position;
    int size = getnumber("Enter The Size of List: ");
    node *Head = NULL;
    Head = createlistNsize(size);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    printf("Insert Node At the Begining:\n");
    insertAtStart(&Head);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    printf("Insert Node at the End: \n");
    insertAtEnd(&Head);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    position = getnumber("Enter New Number At position: ");
    InsertAtPosition(&Head, position);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    printf("Delete Node from Start:\n");
    deleteNodefromStart(&Head);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    printf("Delete Node from the End: \n");
    deleteNodefromEnd(&Head);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    position = getnumber("Enter Position to Delete that Node: ");
    deleteNodefromPosition(&Head, position);
    printList(Head);
    printf("The Length of List is: %d\n", Listlength(&Head));
    return 0;
}