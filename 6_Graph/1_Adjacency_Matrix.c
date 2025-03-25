#include<stdio.h>
#define MAX_NODES 5

void displayMatrix(int matrix[MAX_NODES][MAX_NODES], int nodes){
    printf("\nAdjacency Matrix :- \n");
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int edges, nodes;
    int adjMatrix[MAX_NODES][MAX_NODES] = {0};  

    printf("Enter Number of nodes (max %d) :- ", MAX_NODES);
    scanf("%d", &nodes);
    
    if (nodes > MAX_NODES || nodes <= 0) {
        printf("Invalid number of nodes!\n");
        return 1;
    }

    printf("Enter Number of edges :- ");
    scanf("%d", &edges);
    
    if (edges < 0 || edges > (nodes * (nodes - 1)) / 2) {
        printf("Invalid number of edges!\n");
        return 1;
    }

    printf("Enter edges (format: node1 node2):-\n");
    for(int i = 0; i < edges; i++){
        int node1, node2;
        scanf("%d %d", &node1, &node2);
        
        // Validate node values
        if(node1 < 0 || node1 >= nodes || node2 < 0 || node2 >= nodes) {
            printf("Invalid edge! Node values must be between 0 and %d\n", nodes - 1);
            return 1;
        }
        
        adjMatrix[node1][node2] = 1;
        adjMatrix[node2][node1] = 1;
    }

    displayMatrix(adjMatrix, nodes);
    return 0;
}
