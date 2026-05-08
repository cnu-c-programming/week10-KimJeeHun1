#include <stdio.h>
int student_number = 0;

struct Student{
  char name[100];
  int score;
  struct Student s;
}


int main(){
  Student *head = NULL;
  char input_order[100];
  char name[10];
  int score;
  while(1){
    scanf("%s", input_order);
    if(strcmp(input_order,"add"){
      scanf("%s %d",name, &score);
    }else if(strcmp(input_order,"delete"){
      scanf("%s:, name);  
    }else if(strcmp(input_order,"print"){
        print();
    }
  }
}
