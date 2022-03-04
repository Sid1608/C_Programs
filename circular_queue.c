#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
    int choice,val;
    do
    {
        printf("**********main menu********");
        printf("\n 1.insert");
        printf("\n 2.delete");
        printf("\n 3.peek");
        printf("\n 4.display");
        printf("\n 5.exit");
        printf("\n enter choice: ");
        scanf("%d ",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            val=delete_element();
            if(val!=-1)
                printf("the deleted value is %d",&val);
            break;
        case 3:
            val=peek;
            if(val!=-1)
                printf("the first element of queue is %d",val);
            break;
        case 4:
            display();
            break;
        case 5:
            exit;
        }
    }while(choice!=5);
    return 0;
}
void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d",&num);
    if(front==0 && rear==MAX-1)
        printf("\n Underflow");
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=num;
    }
    else if(rear==MAX-1 && front!=0)
    {
        rear=0;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
}
int delete_element()
{
    int val;
    if(front==-1||front>rear){
        printf("underflow");
        return -1;
    }
    val=queue[front];
    if(front==rear)
        front=rear=-1;
    else
    {
        if(front==MAX-1)
            front=0;
        else
            front++;
    }
    return val;
}
int peek()
{
    if(front==-1||front>rear)
        {
            printf("the queue is empty:");
            return -1;
        }
    else
        return(queue[front]);


}
void display()
{
    int i;
    if(front==-1||front>rear)
        printf("queue is empty");
    else
    {
        if(front<rear)
        {
            for(i=front;i<=rear;i++)
                printf("\t %d",queue[i]);

        }
        else
        {
            for(i=front;i<MAX;i++)
                printf("\t %d",queue[i]);
            for(i=0;i<rear;i++)
                printf("\t %d",queue[i]);
        }
    }
}
