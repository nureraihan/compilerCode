/*
    Title : A program that remove left recursion from a given grammer 
    Author: Md. Abid Hasan Roni Bokshi 
    Date : 04-12-2022
*/

#include <stdio.h>

int main(){
    int n;
    int i,index = 3, alpha=4;
    printf("Enter the number of Production Rules : ");
    scanf("%d", &n);
    char a, b, non_t, p[10][n];
    for (i = 0; i < n;i++)
        scanf("%s", p[i]);
    for (i = 0; i < n;i++){
        non_t = p[i][0];
        if(non_t==p[i][index]){
            a = p[i][index + 1];
            printf("The grammer %s is left recursive\n",p[i]);
            while(p[i][index]!=0 && p[i][index]!='|')
                index++;
            if(p[i][index]!=0){
                b = p[i][index + 1];
                index=index+2;
                printf("without left recursion is:\n%c->%c", non_t, b);
                while(p[i][index]!=0){
                    b = p[i][index];
                    printf("%c", b);
                    index++;
                }
                printf("%c\'", non_t);

                printf("\n%c\'->", non_t);
                while(p[i][alpha] != '|'){
                    printf("%c", p[i][alpha]);
                    alpha++;
                }
                printf("%c\'|ε \n", non_t);
            }
            else
            {
                printf("can't reduce");
            }
        }else{
            printf("There is no left recursion\n");
        }
    }
    return 0;
}
