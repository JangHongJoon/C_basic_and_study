#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    int i;
    for (i=0; i<t; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i+1,a+b);
    }
    
}
