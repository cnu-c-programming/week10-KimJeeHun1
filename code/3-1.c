#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int student_number = 0;

struct Student{
  char name[100];
  int score;
  struct Student *s;
};
struct Student *head = NULL;
struct Student *pointer = NULL;
void add(char name[], int score){
  struct Student *new_student = malloc(sizeof(struct Student));
  strcpy(new_student->name, name);
  new_student->score = score;
  new_student->s = NULL;
  if(head == NULL){
    head = new_student;
    pointer = head;
    new_student->s = NULL;
  }else{
    pointer->s = new_student;
    pointer = pointer->s;
  }
  student_number++;
}
void delete(char name[]){
  struct Student *current = head;
  struct Student *previous = NULL;
  
  while(current != NULL){
    if(strcmp(current->name, name) == 0){
      if(previous == NULL){
        head = current->s;
      }else{
        previous->s = current->s;
      }
      free(current);
      student_number--;
      return;
    }
    previous = current;
    current = current->s;
  }
}
void print(){
  struct Student *pointer = head;
  while(pointer != NULL){
    printf("%s %d\n", pointer->name, pointer->score);
    pointer = pointer->s;
  }
}


int main(){
 
  char input_order[10];
  char name[10];
  int score;
  while(1){
    scanf("%s", input_order);
    if(strcmp(input_order,"add")==0){
      scanf("%s %d",name, &score);
      add(name, score);
    }else if(strcmp(input_order,"delete")==0){
      scanf("%s", name);
      delete(name);
    }else if(strcmp(input_order,"print")==0){
        print();
    }else if(strcmp(input_order,"quit")==0){
        break;
    }
  }
}
}
