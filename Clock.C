#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int input_format();
void fill_time(char*, int);
void fill_date(char*);
void clear_screen();
int rNumber(int);


int main(){
   
    char time[100], date[100];      
    int format= input_format();



    while(1){
    fill_time(time , format);
    fill_date(date);
    int random= rNumber(random);
    clear_screen();
    printf("\nCurrent Time : %s\n",time);
    printf("Current date : %s\n\n",date);
    printf("Random number is= %d\n\n",random);
    sleep(1);
    }

    return 0;

}
int input_format(){
     int format;
     printf("\nEnter the time format:");
     printf("\n1. 24 Hours time format.");
     printf("\n2. 12 Hours time format(Defult).");
     printf("\nMake a choice of format:");
     scanf("%d",&format);
     return format;
}
void fill_time(char* buffer, int format){
    time_t raw_time;
    struct tm * current_time;
   
    time(&raw_time);
    current_time= localtime(&raw_time);
    if(format== 1){
         strftime(buffer,50, "%H:%M:%S", current_time);
    }else{
        strftime(buffer,50, "%I:%M:%S %p", current_time);
    }
}
void fill_date(char* buffer){
    time_t raw_time;
    struct tm * current_time;
   
    time(&raw_time);
    current_time= localtime(&raw_time);
    strftime(buffer,100, "%A %d %B %Y", current_time);    
}
void clear_screen(){
     #ifdef _WIN32
         system("cls");
     #else
         system("clear");
     #endif
}
int rNumber(int random){
    
    srand(time(NULL)) ;
    random= rand()%100+1;
    return random;
}