#include<stdio.h>

/** Is it prime number?
    If a number is just only divided itself number or 2 , the remainder
    would be zero but when it divided the number that the complementary
    of 2 or itself ,the remainder wouldn't be 0, Yes you know it is a prime number.
**/


int prime(int number){

    int i;
    for(i=2;i<number;i++){
            if(number%i==0){
                return 0;
            }

    }




}



int main(){

    int number,is_prime;
    printf("Enter a number prime or not prime:");
    scanf("%d",&number);
    is_prime = prime(number);
    if(is_prime==0){
        printf("It is not prime number");
    }
    else{
        printf("It is a prime number");
    }





    return 0;
}

