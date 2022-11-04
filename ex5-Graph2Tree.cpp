/*
* Spanning tree from graph applying Prim Algorithm
* Extension feature:
* Compute degree of note in graph
* Satisfy Euler circuit or not
* 
*
*/
# include <stdio.h>
# include <cstdlib>
# include "List.h"
# include "Tool.h"

int main(int argc, char *argv[]){
  IntList2D* matrix = new IntList2D;
  IntList2D* list = new IntList2D;
  IntList2D* tree = new IntList2D;

  parseData("data/Matrix_Group2_A.dat", matrix);
  Matrix2List(matrix, list);

  printf("App spanning tree from Graph Applying Prim Algorithm\n");
  spanningTreePrim(matrix, list, tree);

  displayTree(tree, 0, 0);
  printf("\nlist index: %d\n", (int)tree->getTotalIndex());
  
  printf("Postorder: ");
  displayPostorder(0, tree);
  printf("\n");

  printf("Preorder: ");
  displayPreorder(0, tree);
  printf("\n");

  printf("Inorder: ");
  displayInorder(0, tree);
  printf("\n");

  printf("The extension features\nEulerian circuit: ");
  if(isEulerianCircuit(list)) printf("yes\n");
  else printf("no\n");

  printf("The total weight of tree: %f\n", sumWeightTree(matrix, tree));

  int node = (int)std::atof(argv[1]);
  printf("Degree of node %d : %d\n", node, degreeNode(node, list));

  matrix->delListValue();
  list->delListValue();
  tree->delListValue();
  free(list);
  free(matrix);
  free(tree);
  return 0;
}