#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *link;
};
struct queue
{
    struct node *front;
    struct node *rear;
};
struct queue *q;
void create_queue(struct queue *);
struct queue *insert(struct queue *,int);
struct queue *delete_element(struct queue *);
struct queue *display(struct queue *);
void create_queue(struct queue *q)
{
    q->front=-1;
    q->rear =-1;
}
int main()
{
    int val,option;
    create_queue(q);
    do
    {
        printf("\n ****MAIN MENU*******");
        printf("\n 1. INSERT");
        printf("\n 2. DELETE");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option");
        switch(option)
        {
        case 1:
            printf("\n Enter the number to insert in the queue");
            scanf("%d",&val);
            q=insert(q,val);
            break;
        case 2:
            q=delete_queue(q);
            break;
        case 3:
            val=peek(q);
            if(val!=-1)
                printf("the value at front of the queue is %d",val);
            break;
        case 4:
            q=display(q);
            break;
        }

    }while(option!=5);
    return 0;
}
struct queue *insert(struct queue *q,int val)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(q->front=NULL)
    {
        q->front=ptr;
        q->rear=ptr;
        q->front->link=q->rear->link=NULL;
    }
    else
    {
        q->rear->link=ptr;
        q->rear=ptr;
        q->rear->link=NULL;
    }
    return q;

}
struct queue *display(struct queue *q)
{
    struct queue *ptr;
    ptr= q->front;
    if(front=NULL)
        printf("queue is empty");
    else
    {
        printf("\n");
        while(ptr!=q->rear)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
        return q;
    }
}
struct queue *delete_element(struct queue *q)
{
    struct queue *ptr;
    ptr=q->front;
    if(q->front==NULL)
        printf("\n Underflow");
    else
    {
        q->front=q->front->link;
        free(ptr);
    }
    return q;
}
int peek(struct queue *q)
{
    if(q->front==NULL)
    {
        printf("\n Queue is empty");
        return -1;
    }
    else
        return q->front->data;
}


