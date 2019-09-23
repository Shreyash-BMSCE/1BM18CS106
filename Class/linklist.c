#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int data;
    struct LinkList *link;
};
typedef struct LinkList *NODE;
NODE create_node();
NODE insert_beg(NODE);
NODE del_beg(NODE);
void disp_node(NODE);

void main()
{   
    int i,ch=0;
    NODE first;
    first = NULL;
    while(ch!=4)
    {
        printf("\n Enter Choice: \n 1. Insert Node  2. Delete from Beginning  3. Display  4. Exit \t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: first = insert_beg(first);
                    break;
            case 2: first = del_beg(first);
                    break;
            case 3: disp_node(first);
                    break;
            default: printf("\n Wrong Input!!!");  
        }
    }
}

NODE create_node()
{
    NODE node;
    node = (NODE) malloc(sizeof(NODE));
    node->link = NULL;
    return node;
}

NODE insert_beg(NODE first)
{
    int val;
    //NODE tempf;
    NODE temp = create_node();
    printf("\n Enter data: ");
    scanf("%d",&val);
    temp -> data = val;

    if(first==NULL)
    {
        printf("\n FIRST ELEMENT!!! \n");
        first = temp;
    }    
    else
    {
        //tempf = first;
        temp->link = first;
        first = temp;
    }
    return first;
}

NODE del_beg(NODE first)
{
    if(first==NULL)
    {
        printf("\n LIST EMPTY!!!");
    }
    else
    {
        int val;
        NODE temp;
        val = first -> data;
        printf("\n Element deleted was: %d",val);
        temp = first;
        first = first -> link;
        free(temp);
    }
    return first;
}

void disp_node(NODE first)
{
    if(first==NULL)
    {
        printf("\n LIST EMPTY!!!");
    }
    else
    {
        NODE temp;
        temp = first;
        while(temp->link!=NULL);
        {
            printf("%d -> ",temp->data);
            temp = temp->link;
        }
    }
}