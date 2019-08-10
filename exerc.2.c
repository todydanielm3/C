#include <stdio.h>

int main(){

    FILE*file;
    file = fopen("arqv.txt","w");
    fprintf(file,"1234");
    fclose(file);


return 0;
}
