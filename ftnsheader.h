typedef struct node
{
    int number;
    struct node *next;
}node;
int Listlength(node **head); 
void printList(node *head);
int getnumber(char *str);
struct node *createlistNsize(int size);
void insertAtStart(node **head);
void insertAtEnd(node **head);
void InsertAtPosition(node **head, int pos);
void deleteNodefromStart(node **head);
void deleteNodefromEnd(node **head);
void deleteNodefromPosition(node **head, int pos);