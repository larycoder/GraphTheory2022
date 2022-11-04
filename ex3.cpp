/*
* find path in graph by DFS
*
*/
# include <stdio.h>
# include <cstdlib>
# include "List.h"
# include "Tool.h"

int main(){
  IntList2D* matrix = new IntList2D;
  IntList2D* list = new IntList2D;
  IntList2D Path, Markvisit;
  IntList2D* path = &Path;
  IntList2D* markvisit = &Markvisit;

  parseData("data/matrix.dat", matrix);
  Matrix2List(matrix, list);

  printf("App find path\nType source and destination[seperate by space]: ");
  int src, des;
  scanf("%d %d", &src, &des);

  DFS4List(src, des, list, path, markvisit);

  printf("Path from %d to %d is: ", src, des);
  for(int i=0; i<path->getTotalNote(0); i++){
    printf("%d ", (int)path->getValue(0, i));
  }
  printf("\n");

  matrix->delListValue();
  list->delListValue();
  path->delListValue();

  free(list);
  free(matrix);
  return 0;
}