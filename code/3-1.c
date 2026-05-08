#include <stdio.h>

struct student{
  char name[100];
  int score;
  struct student s;
}
void add(char* name, int score, student* s){
  if(s==NULL){
    s->name=name;
    s->score=score;
    return 0;
  }
  s->s.name = name;
  s->s.score = score;
}
void delete(char * name){
  
}


int main(){
  
  while(1){
    
  }
}
