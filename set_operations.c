#include<stdio.h>
    void main(){
        int i,j;
        int u[5]={1,2,3,4,5},a[5]={1,0,0,1,1},b[5]={0,1,1,1,0},aUb[5],anb[5],acomp[5],bcomp[5],diff_a[5],diff_b[5];
        printf("universal set = { ");
        for(i=0;i<5;i++){
            printf("%d ",u[i]);
        }        printf("}");

        printf("\nset a = { ");
        for(i=0;i<5;i++){
            if(a[i]==1){
                printf("%d ",u[i]);
            }
        }        printf("}");

        printf("\nset b = { ");
        for(i=0;i<5;i++){
            if(b[i]==1){
                printf("%d ",u[i]);
            }
        }             printf("}");
      
        printf("\n\na union b in bit = ");
        for(i=0;i<5;i++){
            aUb[i]=a[i]|b[i];
            printf("%d ",aUb[i]);
            
           
        }
        printf("\naub = { ");
        for(i=0;i<5;i++){
             if(aUb[i]==1){
                printf("%d ",u[i]);
            }
        }        printf("}");

        printf("\n\nanb in bit = ");
        for(i=0;i<5;i++){
            anb[i]=a[i]&b[i];
            printf("%d ",anb[i]);
        }
        printf("\nanb = { ");
        for(i=0;i<5;i++){
            if(anb[i]==1){
                printf("%d ",u[i]);
            }

        }        printf("}");

        printf("\n\ncompliment of a in bit = ");
        for(i=0;i<5;i++){
            acomp[i]=1-a[i];
            printf("%d ",acomp[i]);

        }
        printf("\na' = { ");
        for(i=0;i<5;i++){
            if(acomp[i]==1){
                printf("%d ",u[i]);
            }
        }        printf("}");

        printf("\n\ncompliment of b in bit = ");
        for(i=0;i<5;i++){
            bcomp[i]=1-b[i];
            printf("%d ",bcomp[i]);
        }
        printf("\nb' = { ");
        for(i=0;i<5;i++){
            if(bcomp[i]==1){
                printf("%d ",u[i]);
            }
        }        printf("}");

        printf("\n\na-b in bit = ");
        for(i=0;i<5;i++){
            diff_a[i]=a[i]&bcomp[i];
            printf("%d ",diff_a[i]);
        }
        printf("\na - b = { ");
        for(i=0;i<5;i++){
            if(diff_a[i]==1){
                printf("%d ",u[i]);
            }
        }        printf("}");

        printf("\n\nb-a in bit = ");
        for(i=0;i<5;i++){
            diff_b[i]=b[i]&acomp[i];
            printf("%d ",diff_b[i]);
        }
        printf("\nb - a = { ");
        for(i=0;i<5;i++){
            if(diff_b[i]==1){
                printf("%d ",u[i]);
            }
        }
        printf("}");

    }