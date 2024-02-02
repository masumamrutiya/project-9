// #include <stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("masum.txt","r");
//     char data[100];
//     if(p==NULL){
//         printf("file does not exist");
//     }else{
//         while(fgets(data,50,p)!=NULL){
//             printf("%s",data);
//             fclose(p);
//         }
//     }
//     return 0;
// }

// wright....................

//  #include <stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("masum.txt","w");
//     char data[100];
//     if(p==NULL){
//         printf("no");
//     }else{
//            fputs("red and white",p);
//             fclose(p);
//         }
    
//     return 0;
// }

//  #include <stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("masum.txt","a");
//     char data[100];
//     if(p==NULL){
//         printf("no");
//     }else{
//            fputs("jay shree ram",p);
//             fclose(p);
//         }
    
//     return 0;
// }


// ----------------question-2-------------------

#include <stdio.h>
#include <string.h>
struct Employee
{   char name[100];
    int age;
    char gender[10];
    char from[100];
    char to[100];
    int payment;
};
int main()
{
    struct Employee e[10];
    int passngerN;
    printf("Enter The Train Number : ");
    scanf("%d",&passngerN);
    for(int i=0; i<=passngerN; i++){
        printf("Enter passnger name : ");
        scanf("%s",&e[i].name);
        printf("Enter passnger age : ");
        scanf("%d",&e[i].age);
        printf("Enter passnger gender : ");
        scanf("%s",&e[i].gender);
        printf("Enter passnger from : ");
        scanf("%s",&e[i].from);
        printf("Enter passnger to : ");
        scanf("%s",&e[i].to);
        printf("Enter passnger payment : ");
        scanf("%d",&e[i].payment);
    }

    for(int i=0; i<=passngerN; i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%s\n",e[i].gender);
        printf("%s\n",e[i].from);
        printf("%s\n",e[i].to);
        printf("%d\n",e[i].payment);
    }


    return 0;
}



