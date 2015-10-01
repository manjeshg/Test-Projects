#include <stdio.h>

struct node {
  int val;
  struct node* next;
};

void main(){
  struct node *hptr = NULL, *tptr = NULL, *temptr = NULL;
  int value = 0;
  while(1){
    printf("Please enter a number = -1 to exit");
    scanf("%d", &value);
	if(value == -1){
	  break;
	}
	else{
	  if(hptr == NULL){
	    hptr = malloc(sizeof(struct node));
		if(hptr == NULL){
		  printf("Couldn't allocate memory\n");
		  break;
		}
		hptr->val = value;
		temptr = hptr;		 
	  }
	  else{
	    temptr->next = malloc(sizeof(struct node));
	    temptr = temptr->next;
	    temptr->val = value;
	  }
	}
  }
  
  temptr->next = NULL;
  tptr = hptr;
  for(tptr = hptr ; tptr->next != NULL ; tptr = tptr->next){
    printf("values are %d", tptr->val);
  }
  system("pause");
}  
  
  