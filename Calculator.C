#include<stdio.h>
#include<math.h>
 


void print_menu();
double division(double, double);
int modulas(int, int);
double power(double, double);

int main(){      
      printf("\nWelcome to the calculator !");
      
      int choice;
      double num1, num2, result;  

     while (1){ 
        print_menu();
        
        scanf("%d",&choice);
         if (choice == 7){
            printf("\nThanks for using calculator !\n\n");
         break;
         }
         if(1>choice || choice>7){
          fprintf(stderr, "Invalid Menu Choice.");
          continue;
         }

        printf("Enter first number: ");
        scanf("%lf",&num1);
        printf("Enter second number: ");
        scanf("%lf",&num2);

        switch(choice) {            
            case 1 :
              result= num1+num2;
            break;
            case 2 :
              result= num1-num2;            
            break;
            case 3 :
              result= num1*num2;            
            break;
            case 4 :   // result= num1/num2;
              result= division(num1 , num2);
            break;
            case 5 :
              //result= (int)num1 % (int)num2;    - ok-
              result = modulas(num1, num2);
            break;

            case 6:
              result=power(num1,num2);
            break;
     
           default:            
           break;
        }
        if (!isnan(result)){
         printf("\nThe result is: %.2f", result);
        }
     } 

  return 0;
}


void print_menu(){
      printf("\n---------------------------------\n");
      printf("\nChoose your following options:");
      printf("\n1. Add");
      printf("\n2. Subtraction");
      printf("\n3. Multiplication");
      printf("\n4. Division");
      printf("\n5. Modulas");
      printf("\n6. Power");
      printf("\n7. Exit");
      printf("\nNow, Enter your choice : ");

}
double division(double a,double b){
      if(b == 0){
        fprintf(stderr , "\nInvalid Argument for Division\n");
        return 0.00 ;
      }else{
       return a/b;
      }
}
int modulas(int a,int b){
      if(b == 0){
        fprintf(stderr , "\nInvalid Argument for Modulas\n");
      return 0;
      }else{
       return a % b;
      }
}
double power(double a,double b){
        double W;
        W =pow(a , b);
       return W;
}