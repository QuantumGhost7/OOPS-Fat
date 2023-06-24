// Take n names as input from the user, sort them alphabetically 
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter Number of names");
    scanf("%d",&n);
    char name[n][100];
    for(int i = 0; i<n; i++){
        scanf("%s",name[i]);
    }

    for(int p = 0; p<n; p++){
        for(int q = p+1; q<n; q++){
            if(strcmp(name[q],name[p])<0){
                char temp[100];
                strcpy(temp,name[q]);
                strcpy(name[q],name[p]);
                strcpy(name[p],temp);
            }
        }
    }

    for(int s = 0; s<n; s++){
        printf("%s\n",name[s]);
    }

    return 0;
}