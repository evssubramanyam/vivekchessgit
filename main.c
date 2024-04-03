/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[8]="RNBKQBNR";
char b[8]="PPPPPPPP";
char c[8];
char d[8];
char e[8];
char f[8];
char g[8]="PPPPPPPP";
char h[8]="RNBKQBNR";
char art[9]="RNBKQBNR";
char brt[9]="PPPPPPPP";
char crt[9];
char drt[9];
char ert[9];
char frt[9];
char grt[9]="PPPPPPPP";
char hrt[9]="RNBKQBNR";
struct Chess{
    struct Chess *pre,*next;
    char popo[3];
    char post[3];
    char gone[3];
};
typedef struct Chess chess;
chess *start=NULL,*end=NULL;//HEAD  and tail POINTER
int count=0;
char ret[3];
void chessstart();
void chessmove();
const char* checkpos(char lol[3],int k,int m);
int letter(char b);
void movedis(chess *start);
void movedis2(chess *start);
void main(){
    int i;
    char prevpos[2],postpos[2];
    while(1){
    scanf("%d",&i);
    switch(i){
        case 1:chessstart();
        break;
        case 2:
        chessmove();
        break;
        case 3:movedis(start);
        break;
        case 4:movedis2(start);
        break;
        case 5:
        exit(0);
        default:printf("hmm");
        break;
    }
    }
}
void chessmove(){
    int i;
    chess *newnode,*temp=start;
    newnode=(chess*)malloc(sizeof(chess));
    char bef[3],posi[3];
    scanf("%s",bef);
printf("Enter data into node of DLL:");
if(checkpos(bef,0,0)=="NNN") strcpy(newnode->popo,bef);
else return;
newnode->next=newnode->pre=NULL; // optional
count++;
if(start==NULL){
    start=newnode;
    newnode->pre=NULL;
    end=newnode;
    newnode->next=NULL;
}
else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->pre=temp;
    temp->next=newnode;
    newnode->next=NULL;
    end=newnode;
}
scanf("%s",posi);
strcpy(newnode->post,posi);
if(checkpos(posi,1,0)=="NNN")strcpy(newnode->gone,"NNN");
else strcpy(newnode->gone,ret);
}
int letter(char b){
    if(b=='a') return 0;
    else if(b=='b')return 1;
    else if(b=='c')return 2;
    else if(b=='d')return 3;
    else if(b=='e')return 4;
    else if(b=='f')return 5;
    else if(b=='g')return 6;
    else if(b=='h')return 7;
    else return 8;
}
const char* checkpos(char lol[3],int k,int m){
    char n=lol[0];
    int l=lol[2]-'0';
    int v=letter(lol[1]);
    if(l==1){
        if((a[v]==n)&&(k==0)){
        a[v]='\0';
        return "NNN";}
        else if((art[v]==n)&&(m==0)){
            art[v]='\0';
            return "NNN";
        }
        else if(m==1){
            art[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(a[v]=='\0'){
            a[v]=n;
            return "NNN";}
            else{
                ret[0]=a[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                a[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==2){
        if((b[v]==n)&&(k==0)){
        b[v]='\0';
        return "NNN";}
        else if((brt[v]==n)&&(m==0)){
            brt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            brt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(b[v]=='\0'){
            b[v]=n;
            return "NNN";}
            else{
                ret[0]=b[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                b[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==3){
        if((c[v]==n)&&(k==0)){
        c[v]='\0';
        return "NNN";}
        else if((crt[v]==n)&&(m==0)){
            crt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            crt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(c[v]=='\0'){
            c[v]=n;
            return "NNN";}
            else{
                ret[0]=c[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                c[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==4){
        if((d[v]==n)&&(k==0)){
        d[v]='\0';
        return "NNN";}
        else if((drt[v]==n)&&(m==0)){
            drt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            drt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(d[v]=='\0'){
            d[v]=n;
            return "NNN";}
            else{
                ret[0]=d[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                d[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==5){
        if((e[v]==n)&&(k==0)){
        e[v]='\0';
        return "NNN";}
        else if((ert[v]==n)&&(m==0)){
            ert[v]='\0';
            return "NNN";
        }
        else if(m==1){
            ert[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(e[v]=='\0'){
            e[v]=n;
            return "NNN";}
            else{
                ret[0]=e[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                e[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==6){
        if((f[v]==n)&&(k==0)){
        f[v]='\0';
        return "NNN";}
        else if((frt[v]==n)&&(m==0)){
            frt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            frt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(f[v]=='\0'){
            f[v]=n;
            return "NNN";}
            else{
                ret[0]=f[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                f[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==7){
        if((g[v]==n)&&(k==0)){
        g[v]='\0';
        return "NNN";}
        else if((grt[v]==n)&&(m==0)){
            grt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            grt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(g[v]=='\0'){
            g[v]=n;
            return "NNN";}
            else{
                ret[0]=g[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                g[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else if(l==8){
        if((h[v]==n)&&(k==0)){
        h[v]='\0';
        return "NNN";}
        else if((hrt[v]==n)&&(m==0)){
            hrt[v]='\0';
            return "NNN";
        }
        else if(m==1){
            hrt[v]=n;
            return "NNN";
        }
        else if((k==1)){
            if(h[v]=='\0'){
            h[v]=n;
            return "NNN";}
            else{
                ret[0]=h[v];
                ret[1]=lol[1];
                ret[2]=lol[2];
                h[v]=n;
                return ret;
            }
        }
        else return "TTT";
    }
    else return "TTT";
}
void movedis(chess* start){
    chess* temp = start;
    while (temp != NULL) {
        printf("pre: %c%c%c post:%c%c%c\n", temp->popo[0],temp->popo[1],temp->popo[2], temp->post[0],temp->post[1],temp->post[2]);
        printf("gone:%s\n",temp->gone);
        temp = temp->next;}
}
void movedis2(chess* start){
int t=0;
chess* temp = start;
strcpy(art,"RNBKQBNR");
strcpy(brt,"PPPPPPPP");
strcpy(grt,"PPPPPPPP");
strcpy(hrt,"RNBKQBNR");
while(t!=1){
    
int i,m;
scanf("%d",&m);
char befo[3],afto[3],tempo[3],l[3];
if(m==0){
    befo[0]=temp->popo[0];
    befo[1]=temp->popo[1];
    befo[2]=temp->popo[2];
    afto[0]=temp->post[0];
    afto[1]=temp->post[1];
    afto[2]=temp->post[2];
    temp=temp->next;
}
if(m==1){
    temp=temp->pre;
    befo[0]=temp->post[0];
    befo[1]=temp->post[1];
    befo[2]=temp->post[2];
    afto[0]=temp->popo[0];
    afto[1]=temp->popo[1];
    afto[2]=temp->popo[2];
    tempo[0]=temp->gone[0];
    tempo[1]=temp->gone[1];
    tempo[2]=temp->gone[2];
    char blo[3];
    if(tempo[0]!='N')
    strcpy(blo,checkpos(tempo,2,1));
}
if(m==2){
    t=1;
    break;
}
int aw;
if(checkpos(befo,2,0)=="NNN") aw=0;
else printf("boo");
if(checkpos(afto,2,1)=="NNN") aw=0;
else printf("%s",checkpos(afto,2,1));
    printf("   A    B    C    D    E    F    G    H\n");
    printf(" ________________________________________\n");
    printf("1");
    for(i=0;i<8;i++){
        if(art[i]!='\0')
        printf("|_%c_|",art[i]);
        else printf("|___|");
    }
    printf("\n");
    printf("2");
    for(i=0;i<8;i++){
        if(brt[i]!='\0')
        printf("|_%c_|",brt[i]);
        else printf("|___|");
    }
    printf("\n");   
    printf("3"); 
    for(i=0;i<8;i++){
        if(crt[i]!='\0')
        printf("|_%c_|",crt[i]);
        else printf("|___|");
    }
    printf("\n");  
    printf("4");  
    for(i=0;i<8;i++){
        if(drt[i]!='\0')
        printf("|_%c_|",drt[i]);
        else printf("|___|");
    }
    printf("\n");   
    printf("5");
    for(i=0;i<8;i++){
        if(ert[i]!='\0')
        printf("|_%c_|",ert[i]);
        else printf("|___|");
    }
    printf("\n");
    printf("6");    
    for(i=0;i<8;i++){
        if(frt[i]!='\0')
        printf("|_%c_|",frt[i]);
        else printf("|___|");
    }
    printf("\n");    
    printf("7");
    for(i=0;i<8;i++){
        if(grt[i]!='\0')
        printf("|_%c_|",grt[i]);
        else printf("|___|");
    }
    printf("\n"); 
    printf("8");   
    for(i=0;i<8;i++){
        if(hrt[i]!='\0')
        printf("|_%c_|",hrt[i]);
        else printf("|___|");
    }
    printf("\n"); 
    //t=1;

}
}
void chessstart(){
    int i;
    printf("   A    B    C    D    E    F    G    H\n");
    printf(" ________________________________________\n");
    printf("1");
    for(i=0;i<8;i++){
        if(a[i]!='\0')
        printf("|_%c_|",a[i]);
        else printf("|___|");
    }
    printf("\n");
    printf("2");
    for(i=0;i<8;i++){
        if(b[i]!='\0')
        printf("|_%c_|",b[i]);
        else printf("|___|");
    }
    printf("\n");   
    printf("3"); 
    for(i=0;i<8;i++){
        if(c[i]!='\0')
        printf("|_%c_|",c[i]);
        else printf("|___|");
    }
    printf("\n");  
    printf("4");  
    for(i=0;i<8;i++){
        if(d[i]!='\0')
        printf("|_%c_|",d[i]);
        else printf("|___|");
    }
    printf("\n");   
    printf("5");
    for(i=0;i<8;i++){
        if(e[i]!='\0')
        printf("|_%c_|",e[i]);
        else printf("|___|");
    }
    printf("\n");
    printf("6");    
    for(i=0;i<8;i++){
        if(f[i]!='\0')
        printf("|_%c_|",f[i]);
        else printf("|___|");
    }
    printf("\n");    
    printf("7");
    for(i=0;i<8;i++){
        if(g[i]!='\0')
        printf("|_%c_|",g[i]);
        else printf("|___|");
    }
    printf("\n"); 
    printf("8");   
    for(i=0;i<8;i++){
        if(h[i]!='\0')
        printf("|_%c_|",h[i]);
        else printf("|___|");
    }
    printf("\n");   
}