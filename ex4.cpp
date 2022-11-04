/*
* spanning tree from graph
*
*/
# include <stdio.h>
# include <cstdlib>
# include "List.h"
# include "Tool.h"

int main(){
  IntList2D* matrix = new IntList2D;
  IntList2D* list = new IntList2D;
  IntList2D* tree = new IntList2D;

  parseData("data/matrix.dat", matrix);
  Matrix2List(matrix, list);

  printf("App Spanning tree from Graph\n");

  int markvisit[list->getTotalIndex()];
  for(int i=1; i<list->getTotalIndex(); i++){
    tree->addIndex();
    markvisit[i] = 0;
  }
  markvisit[0] = 1;

  for(int i=0; i<list->getTotalIndex(); i++){
    for(int j=0; j<list->getTotalNote(i); j++){
      if(markvisit[(int)list->getValue(i, j)] == 0){
        tree->addValue(i,list->getValue(i, j));
        markvisit[(int)list->getValue(i, j)] = 1;
      }
    }
  }

  printf("0\n|--");
  displayTree(tree, 0, 1);
  printf("\b\b\blist index: %d\n", (int)tree->getTotalIndex());

  matrix->delListValue();
  list->delListValue();
  tree->delListValue();
  free(list);
  free(matrix);
  free(tree);
  return 0;
}