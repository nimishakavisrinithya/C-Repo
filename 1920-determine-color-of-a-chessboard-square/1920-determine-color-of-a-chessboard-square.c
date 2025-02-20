bool squareIsWhite(char* coordinates) {
    coordinates[0] = coordinates[0]-96;
    printf("%d", coordinates[0]);
    if(coordinates[0]%2!=0 && coordinates[1]%2!=0) return false;
    if(coordinates[0]%2==0 && coordinates[1]%2==0) return false;
    return true;
}