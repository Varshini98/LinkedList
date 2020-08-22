    //C program to create a linked list and display the elements in the list

    #include <stdio.h>
    #include <malloc.h>
    #include <stdlib.h>
    void main()
    {
       struct node
        {
            int num;
            struct node *next;
        };
        typedef struct node NODE;

        NODE *newnode, *head, *temp = 0;
        int count = 0;
        int choice = 1;
        head = 0;

        while (choice)
        {
            newnode  = (NODE *)malloc(sizeof(NODE));
            printf("Enter the Number: \n");
            scanf("%d", &newnode-> num);

            if (head != 0)
            {
                temp->next = newnode;
                temp = newnode;
            }
            else
            {
                head = temp = newnode;
            }
            fflush(stdin);
            printf("Do you want to continue(Type 0 or 1)?\n");
            scanf("%d", &choice);
       }

        temp->next = 0;   /*  reset temp to the beginning */
        temp = head;
        printf("\n Linked list : \n");
        while (temp != 0)
        {
            printf("%d=>", temp->num);
            count++;
            temp = temp -> next;
        }
        printf("NULL\n");
        printf("No. of nodes = %d\n", count);
    }
