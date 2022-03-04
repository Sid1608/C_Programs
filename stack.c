// implementation of  stack using array
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};
struct ArrayStack* createStack(int cap)
{
    struct ArrayStack *stack;
    stack = malloc(sizeof(struct ArrayStack));
    stack ->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int isFull(struct ArrayStack *stack)
{
    if(stack->top == stack->capacity-1)
        return(1);
    else
        return(0);
}
int isEmpty(struct ArrayStack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);

}
void push(struct ArrayStack *stack,int item)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}
int pop(struct ArrayStack *stack)
{
    int item;
    if(!isEmpty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);
}
main()
{
    int choice,item;
    struct ArrayStack *stack;
    while(1)
    {
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter a number");
            scanf("%d",&item);
            push(stack,item);
            break;
        case 2:
            item=pop(stack);
            if(item==-1)
                printf("stack is empty");
            else
                printf("popped value is %d",item);
            break;


        case 3:
            exit(0);

        }
    }
}
