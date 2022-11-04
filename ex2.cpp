/*
* check exit of path in graph by BFS
*
*/
# include <stdio.h>
# include <cstdlib>
# include "List.h"
# include "Tool.h"

int main(){
  IntList2D* matrix = new IntList2D;
  IntList2D* list = new IntList2D;

  parseData("data/matrix.dat", matrix);
  Matrix2List(matrix, list);

  printf("App check exit of path\nType source and destination[seperate by space]: ");
  int src, des;
  scanf("%d %d", &src, &des);

  int numNode = matrix->getTotalIndex();
  int queue[numNode];
  for(int i=0; i<numNode; i++){
    queue[i] = 0;
  }
  queue[src] = 1;

  int total = 0;
  int loop = 1;
  while(loop){
    if(queue[src] == 1){
      total = 0;
      queue[src] = 2;
      for(int i=0; i<list->getTotalNote(src); i++){
        if(queue[(int)list->getValue(src, i)] == 0){

          if((int)list->getValue(src, i) == des){
            printf("Exit path between 2 nodes\n");
            loop = 0;
            break;
          }
          queue[(int)list->getValue(src, i)] = 1;
        }
      }
    }
    else {
      total++;
      if(total >= list->getTotalIndex()){
        printf("The path is not exit\n");
        loop = 0;
        break;
      }
    }
    src = (src + 1) % (list->getTotalIndex());
  }

  matrix->delListValue();
  list->delListValue();
  free(list);
  free(matrix);
  return 0;
}