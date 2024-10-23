#include<stdio.h>
#include<stdlib.h>
int size,choice,f,top=-1,num,k,i,stack[6],rev[6];

void Push();
void POP();
void Display();
int Pali();

void main()
{
	printf("enter the size");
	scanf("%d",&size);
	printf("\n----MENU------\n 1.Push 2.POP 3.Display 4.Check for Palindrome 5.Exit\n");
	while(1)
	{
	        printf("Enter the Choice");
         	scanf("%d",&choice);
         	switch(choice) {
         		case 1:Push();
         		       break;
         		case 2:POP();
         		       break;
         		case 3:Display();
         		       break;
         		case 4:Pali();
         		       break;
         		if(f==1)
         		{
         			printf("It's Palindrome\n");
         			}
         		else
         		{
         			printf("It's not a palindrome\n");
         			
         			}
         	        break;
         	        case 5:exit(0);
         	        default:printf("Wrong choice..\n");
         }
        }
       }
       void Push()
       {
        	if(top==(size-1))
        	{
        	 printf("Stack is Overflow\n");
        	}
        	else
        	{
        	printf("Enter the number to be pushed\n");
        	scanf("%d",&num);
        	top=top++;
        	stack[top]=num;
        }
      }
      void POP()
      {
      		if(top == -1)
      		{
      		 printf("Stack is Underflow\n");
      		}
      		else
      		{
      			num=stack[top];
      			printf("Popped element is %d\n",num);
      			top=top--;
      		}
      	}
      	void Display()
      	{
      		if(top == -1)
      		{
      			printf("Stack is Empty\n");
      		}
      		else
      		{
      			printf("Stack contents\n");
      			for(i=top;i>=0;i--)
      			{
      				printf("%d\n",stack[i]);
      				}
      			}
      		}
      	         int Pali()
      	         {
      	         	int flag=1;
      	         	for(i=top;i>=0;i--)
      	         	{
      	         		rev[k++]=stack[i];
      	         	}
      	         	for (i=top;i>=0;i--)
      	         	{
      	         		if(stack[i]!=rev[--k])
      	         		{
      	         		
      	         			flag=0;
      	         		}
      	         	}
      	         	return flag;
      	         }
      	       
      	        
      	         	
        	
        		
         		
         		       	 
	 
