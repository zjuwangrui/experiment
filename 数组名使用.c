#include<stdio.h>
void PrintArray(int array[]){
     for(int i=0;i<3;i++){
        printf("%d ",*array);
        array++;
     }
}
int main(){
    int array[]={1,2,3};
    PrintArray(array);
    return 0;
}//
int main(){
    int a[]={1,2,3};
    int b[3]={0};
    printf("%d",a);
   // a++;
    printf("%d",*a);
    return 0;
}//