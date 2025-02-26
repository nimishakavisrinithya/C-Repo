int countServers(int** grid, int gridSize, int* gridColSize) {
    int row[gridSize];
    int col[*gridColSize];
    for (int i = 0; i < gridSize; i++) row[i] = 0;
    for (int j = 0; j < *gridColSize; j++) col[j] = 0;
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<*gridColSize; j++){
            row[i] += grid[i][j];
            col[j] += grid[i][j];
        }
    }
    int c=0;
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<*gridColSize; j++){
            if(grid[i][j]==1 && (row[i]>=2 || col[j]>=2)) c++;
        }
    }
    return c;
}