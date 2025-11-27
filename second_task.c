/* Task description:
See the code below. The program builds a singly linked list from 
the content of the array, head points to the beginning of the list. 
Your task is to write different functions and functionalities 
to handle the list!

#1:
Write a loop that prints the values stored in the list! 
You should get this output:
27 18 7 4 22 6 10 9 15 2 11 3 5 16 19 1 17 13 14 8
Why are the values reversed?

when you're ready go to
#2: 
Insert a code segment that counts the length of the list! 
To check it compare the calculated number to the number of elements printed.
After testing, move a//here print the list!nd turn this code segment into a 
function that receives the list as parameter and returns its length!

and 

#3:
There is memory leak in the program above. 
Write a loop that deletes the elements of the list! 
(Do NOT use recursion!) Move this loop into a function that receives the list as parameter.

#4:
Write a function that receives a list and an integer value as parameters. 
Insert the value as the first element of the list (at the head).
This way the head pointer in main must change for each insertion. 
Thus the function must either return the new head pointer, or take 
the head pointer parameter by address. Choose the first now:
head = list_insert_athead(head, 25);
Insert a few values and print the list. 
The inserted values print in reverse order, of course. 
If your function works fine, delete the function list_build() provided 
in the code above, and replace it with this new function.

#5:
Write a function that receives a list and an integer value as parameters.
Insert the value as the last element of the list. 
Pay special attention to make it work for an empy list as well (NULL pointer parameter)! 
In this case the head pointer changes, so it must be handled like in the previous function.

#6:
Create a function that takes a list and an integer value parameter. 
Return a pointer to the first such element of the list that contains the received integer. 
Return NULL if there is no such element.
*/


#include <stdlib.h>
#include <stdio.h>
sturct board{
cell** Arr;
int row,col;
}

cell* Arr=(cell*)malloc(sizeof(cell*)*row*col);
arr[i*col+j]

for(int i=0;i<row;i++)
  {
    Arr[i]=(cell*)malloc(sizeof(cell)*col);
  }  

  print_board(cell** Arr,int row,int col)

cell** generate_borad(int col, int row){
    //megtudom colt


}



typedef struct ListEl {
    int data;
    struct ListEl *nxt;
} ListEl;


ListEl *list_build(void) {
    int values[] = { 8, 14, 13, 17, 1, 19, 16, 5, 3, 11, 2,
                     15, 9, 10, 6, 22, 4, 7, 18, 27, -15 };
    ListEl *lis = NULL;

    int i;
    for (i = 0; values[i] > -1; ++i) {
        ListEl *u;
        u = (ListEl*) malloc(sizeof(ListEl));
        u->nxt = lis;
        u->data = values[i];
        lis = u;
    }
    return lis;
}

int linkedlen(ListEl* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->nxt;
    }
    return count;
}
void delet(ListEl **head){
    ListEl *temp = *head;
    ListEl *tempnext;
    while(temp!=NULL){
        tempnext = temp->nxt;
        free(temp);
        temp = tempnext;
    }
    *head = NULL;
}

void *listinsert(ListEl **head, int data){
    ListEl*u;
    u = (ListEl*) malloc(sizeof(ListEl));
    u->data = data;
    u->nxt = *head;
    *head = u;
}

void insertend(ListEl * head, int data){
    while(0){
        if(head->nxt == NULL)
        head = head->nxt;

    }
    
}


int main(void) {
    ListEl *head;
    head =list_build();
    ListEl *p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->nxt;
    }
    p = head;
    int count = linkedlen(p);
    printf("%d\n", count);
    delet(&head);
    for(int k = 0; k < 10; k++){
        int a;
        scanf("%d", &a);
        listinsert(&head, a);
    }
    p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->nxt;
    }
    
    
    

    return 0;   
}
