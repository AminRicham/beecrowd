#include <stdio.h>
 
int main() {
    int contadorCorretos;
    int teaType;
    int respostas[5];
    
    scanf("%d",&teaType);
    
    for(int i=0; i<5;i++){
        scanf("%d",&respostas[i]);
    }   
    
    for(int i=0; i<5;i++){
        if(teaType==respostas[i])
            contadorCorretos++;
    }
    
    printf("%d\n",contadorCorretos);
    return 0;
}
