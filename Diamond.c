#include<stdio.h>


    int main() {

        int i;
        int j;
        int k;

        for( i=0 ; i<10 ; i++){

            for( j=0 ; j<10-i ; j++){
                
                printf(" ");
            }

            for( k=1 ; k<=(2*i+1) ; k++){

                printf("*");
            }

            printf("\n");
        }

        
        for( i=0 ; i<10 ; i++) {
            
            for( j=0 ; j<=i ; j++) {

                printf(" ");
            }

            for(int k=19 ; k>=(2*i+1) ; k--){

                printf("*");
            }

            printf("\n");
        }

    }