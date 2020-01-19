#include<stdio.h>

int main(void) {
  int x;
  
  scanf("%d", &x);
  if(x!=0){
    printf("1: %d\n", x);
    scanf("%d", &x);
    if(x!=0){
      printf("2: %d\n", x);
      scanf("%d", &x);
      if(x!=0){
	printf("3: %d\n", x);
	scanf("%d", &x);
	if(x!=0){
	  printf("4: %d\n", x);
	  scanf("%d", &x);
	  if(x!=0){
	    printf("5: %d\n", x);
	  }
	}
      }
    }
  } 
    
  return 0;
}
