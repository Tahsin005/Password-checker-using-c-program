#include<stdio.h>
//PROJECT---password checker
int main(){
    int password, real_password=1234, max_no_of_attempts=5;

    while(max_no_of_attempts>0){
        printf("Enter your password(4 digits)\n");
        scanf("%d", &password);
        
        if(password==real_password){
            printf("Your Password is correct\n");
            break;
        }
        else{
            max_no_of_attempts--;
            printf("Your password is incorrect\n\n");
            printf("You have %d attempt left\n\n", max_no_of_attempts);
        }

    }
    if(max_no_of_attempts==0){
        printf("Access denied, too many attempts\n");
    }

    return 0;
}
