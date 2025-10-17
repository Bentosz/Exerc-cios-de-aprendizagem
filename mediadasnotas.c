#include <stdio.h>

#define texto "Media das notas dos 4 trimestres\n\n\n"

int main(){

float np1, np2, np3, np4; //português
float nm1, nm2, nm3, nm4; //matemática
float nh1, nh2, nh3, nh4; //História
float ng1, ng2, ng3, ng4; //Geografia
float sp, sm, sh, sg; //operações
float msp, msm, msh, msg; // média

    printf("%s", texto);

    
    printf("Primeiro semestre\n");
    
    printf("Português : \n");
    scanf("%f", &np1);
    
    printf("Matemática \n");
    scanf("%f", &nm1);
    
    printf("História : \n");
    scanf("%f", &nh1);
    
    printf("Geografia : \n");
    scanf("%f", &ng1);

    
    printf("Segundo semestre\n");

    printf("Português : \n");
    scanf("%f", &np2);
    
    printf("Matemática \n");
    scanf("%f", &nm2);
    
    printf("História : \n");
    scanf("%f", &nh2);
    
    printf("Geografia : \n");
    scanf("%f", &ng2);
    
    
    printf("Terceiro semestre\n");

    printf("Português : \n");
    scanf("%f", &np3);
    
    printf("Matemática \n");
    scanf("%f", &nm3);
    
    printf("História : \n");
    scanf("%f", &nh3);
    
    printf("Geografia : \n");
    scanf("%f", &ng3);
    
    
    printf("Quarto semestre\n");
    
    printf("Português : \n");
    scanf("%f", &np4);
    
    printf("Matemática \n");
    scanf("%f", &nm4);
    
    printf("História : \n");
    scanf("%f", &nh4);
    
    printf("Geografia : \n");
    scanf("%f", &ng4);


sp = np1+np2+np3+np4; //operações
sm = nm1+nm2+nm3+nm4; 
sh = nh1+nh2+nh3+nh4;
sg = ng1+ng2+ng3+ng4;

msp = sp/4; //média
msm = sm/4;
msh = sh/4;
msg = sg/4;
 
    if(msp>5){
        printf("\nMédia = %.2f. Aprovado(a) em portugûes!\n",msp);
    }
    else{
        printf("\nMédia = %.2f. Reprovado(a) em português\n",msp);
    }

 
    if(msm>5){
        printf("\nMédia = %.2f. Aprovado(a) em Matemática!\n",msm);
    }
    else{
        printf("\nMédia = %.2f. Reprovado(a) em Matemática!\n",msm);
    }


 
    if(msh>5){
        printf("\nMédia = %.2f. Aprovado(a) em História!\n",msh);
    }
    else{
        printf("\nMédia = %.2f. Reprovado(a) em História!\n",msh);
    }

 
   if(msg>5){
        printf("\nMédia = %.2f. Aprovado(a) em Geografia!\n",msg);
    }
    else{
        printf("\nMédia = %.2f. Reprovado(a) em Geografia!\n",msg);
    }

}