#include<stdio.h>
int main(){
//1.FOR LOOP

 //i is  iterator or counter variable
    /*for(int i=1;i<=5;i++){
        printf("hello\n"); //for a sentence
    }
    for(int i=10;i>=1;i--){
        printf("%d\n",i); //for numbers
    }
    for(int i=0;i<=10;i++){
        printf("%d",i);
    }
    /*int i = 0;
    while(i<54);
    {
        printf("%d\n",i);
        i++;
    }*/               
 //2. WHILE LOOP    
    /*int n;
    printf("enter number:");
    scanf("%d",&n);

    int i=0;//initiliazation
    while(i <= n)//condition
    {
        printf("%d\n", i); //statement
        i++; //increment
    }*/
//3. do-while
/*int i=5;
do{
    printf("%d\n",i);
    i--;
}while(i>=1);*/
//sum of first n natural numbers
int n;
printf("enter number: ");
scanf("%d",&n);
/*int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
}
printf("sum is %d\n",sum);
for(int i=n;i>=1;i--){
    printf("%d\n",i);
}*/
for(int i=1;i<=10;i++){
    printf("%d \n",n*i);
}

}
    