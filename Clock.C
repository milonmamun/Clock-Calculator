#include<stdio.h>
#include<time.h>



int main(){
    char ptime[50];
    time_t now;
    
    struct tm *ct;

    printf("\n\n");

    while(1){

    time(&now);
    ct = localtime(&now);
    strftime(ptime,  50,"%H:%M:%S", ct);
    
    
    printf(" \r The current time is : %s  " , ptime);

    fflush(stdout);


    }

    return 0;
}

