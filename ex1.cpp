# include <stdio.h>
# include <cstdlib>
# include "List.h"

void parseData(char const* path, IntList2D* graph);

int main(){
  IntList2D* graph = new IntList2D;
  parseData("data/list.dat", graph);
  printf("There are %d vertex\nFind adjacency of vertex: ");
  int index;
  scanf("%d", &index);
  printf("Adjacency are: ");
  for(int i=0; i<graph->getTotalNote(index); i++){
    printf("%d ", (int)graph->getValue(index, i));
  }
  printf("\n");
  graph->delListValue();
  free(graph);
  return 0;
}