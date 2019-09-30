#include<stdio.h>
#include<stdlib.h>

struct LinkList
{
    int data;
    struct LinkList *link;
};

typedef struct LinkList *NODE;

NODE create_node()
{
    NODE temp;
    temp = (NODE)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("\n No Memory!!");
        exit(0);
    }
    return temp;
}

NODE insert_beg(NODE first,int val)
{
    NODE temp;
    temp = create_node();
    temp -> data = val;
    temp->link = first;
    first = temp;
    return first;
}
NODE insert_end(NODE first,int item)
{
  NODE temp,x;
  x = create_node();
  x->data=item;
  x->link=NULL;
  if(first==NULL)
     return x;
  temp=first;
  while(temp->link!=NULL)
     temp=temp->link;
  temp->link=x;
  return first;
}

/*NODE del_beg(NODE first)
{
    if(first == NULL)
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
} */

void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("\n LIST EMPTY!!!\n");
    }
    else
    {
        temp=first;
        printf("Elements are: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
} 


/*NODE create_node();
NODE insert_beg(NODE);
NODE del_beg(NODE);
void disp_node(NODE);
*/
int main()
{   
    NODE first = NULL;
    int ch,val;
    while(1)
    {
        printf("\n Enter Choice: \n 1. Insert Node at front  2. Insert Node at end  3. Display  4. Exit \t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n Enter data: ");
                    scanf("%d",&val);
                    first = insert_beg(first,val);
                    break;
            /*case 2: first = del_beg(first);
                    break;  */
            case 2: printf("Enter the element to be inserted: ");
                    scanf("%d",&val);
                    first=insert_end(first,val);
                    break;
            case 3: display(first);
                    break;
            case 4: exit(0);
            default: printf("\n Wrong Input!!!");  
        }
    }
    return 0;
}

