#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cal{
    char *name, *dec;
    int date;
};
typedef struct cal c;

c*create()
{
    return((c*)malloc(7*sizeof(c)));
}
void read(c *d)
{
    int i, flag;
    char temp[20];
    for(i=0;i<7;i++){
        d[i].name=NULL;
        d[i].date=-1;
        d[i].dec=NULL;
    }
    do{
        printf("enter the date");
        scanf("%d",&i);
        if(i<0||i>7)
        printf("invalid");
        else{
            d[i].date=i;
            printf("enter the name");
            scanf("%s",temp);
            d[i].name=strdup(temp);
            printf("enter desc");
            scanf("%s",temp);
            d[i].dec=strdup(temp);

         }
            printf("enter 1 to continue else 0");
            scanf("%d",&flag);
    }while(flag==1);
}

void display(c *d){
    int i;
    for(i=0;i<7;i++){
        if(d[i].date!=-1){
            printf("%d \t %s \t %s \n",d[i].date,d[i].name,d[i].dec);
        }
    }}
    
    void da(c *d){
        int i;
        for(i=0;i<7;i++){
            free(d[i].name);
            free(d[i].dec);
        }
        
        free(d);
    }
int main(){
    c *d=create();
    read(d);
    display(d);
    free(d);
    
}
