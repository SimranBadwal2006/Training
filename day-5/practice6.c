
// #include<stdio.h>

// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1|| i==n|| j==1 || j==n|| i==j || i+j==n+1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//         int n=5;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=2*n-1;j++){
//             if(i==n|| i+j==n+1||j-i==n-1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             } 
//         }
//           printf("\n");

//     }
//       return 0;
// }

#include<stdio.h>
int main(){
    int n = 5;
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        for(int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  
    
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}