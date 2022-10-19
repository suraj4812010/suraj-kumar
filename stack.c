#include<process.h>
#include<stdio.h>
#include<stdlib.h>
void push();
int pop();
void traverse();
int stack[5];
int top=-1;

void main()
{
    int choice;
    char ch;
    do
    {
        /* code */
        
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.TRAVERSE");
        printf("\n4.EXIT");
        printf("\nEnter your choice ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:     
            push();
         /* code */
            break;
        case 2:
            printf("\n the deleted element is %d", pop());
            break;
        case  3:
        traverse();
        break;
        case 4:  exit(0);
        }
    }
        
        
     while (choice != 4);
    
}
 // push to insert an element in a stack
void push()
{
    int item ;
    if(top==4)
    printf("\nThe stack is full");
    else{
        printf("Enter the element to be inserted ");
        scanf("%d ",&item);
        top=top+1;
        stack[top]=item;
    }
}

// pop function to remove an element from stack
int pop()
{
    int item;
    if(top==-1)
    printf("the stack is empty");
    else
    {
        item=stack[top];
        top=top-1;
    }
      return(item);
}

// traverse function to traverse and display the element of stack
void traverse()
{
    
    if (top==-1)
        printf("The stack is empty");
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
