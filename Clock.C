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
























// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<time.h>

// int input_format();
// void fill_time(char*, int);
// void clear_screen();

// int main(){
   
//     char time[100];      
//     int format= input_format();



//     while(1){
//     fill_time(time , format);
//     clear_screen();
//     printf("\nCurrent Time : %s\n",time);
//     sleep(1);
//     }

//     return 0;

// }
// int input_format(){
//      int format;
//      printf("\nEnter the time format:");
//      printf("\n1. 24 Hours time format.");
//      printf("\n2. 12 Hours time format(Defult).");
//      printf("\nMake a choice of format:");
//      scanf("%d",&format);
//      return format;
// }
// void fill_time(char* buffer, int format){
//     time_t raw_time;
//     struct tm * current_time;
   
//     time(&raw_time);
//     current_time= localtime(&raw_time);
//     if(format== 1){
//          strftime(buffer,50, "%H:%M:%S", current_time);
//     }else{
//         strftime(buffer,50, "%I:%M:%S %p", current_time);
//     }
// }
// void clear_screen(){
//      #ifdef _WIN32
//          system("cls");
//      #else
//          system("clear");
//      #endif
// }