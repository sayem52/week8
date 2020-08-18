
#include<stdio.h>
void DFS(int);
int G[15][15],visited[15],n;

void main(){
       int i,j;
       printf("Enter number of Cloths:");
       scanf("%d",&n);
       printf("\nTheir Connection:\n");

      for(i=0; i<n; i++){
      for(j=0; j<n; j++){
      scanf("%d",&G[i][j]);
     }
  }
       for(i=0; i<n; i++){
       visited[i]=0;
     }
       DFS(0);
}
void DFS(int i){
       int j;
       printf("\n%d",i);
       visited[i]=1;
       for(j=0; j<n; j++){
       if(!visited[j]&&G[i][j]==1){
       DFS(j);
     }
   }
}
