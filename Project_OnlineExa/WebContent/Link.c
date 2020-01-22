#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

struct node *head=NULL;

void insert(int data)
{
    struct node *temp=NULL,*ptr=NULL;
    temp->value=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }    
        ptr->next=temp;
    }
}

void print()
{
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->value);
        ptr=ptr->next;
    }
    
}

int main(void) {
    
    printf("%d",10);
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    print();

	return 0;
}

