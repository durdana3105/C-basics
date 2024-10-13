#include<stdio.h>
int main(){
    float a,b,c,r1,r2,dis;
    printf("Enter coefficients a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    dis = b*b -4*a*c;
    {
        if(dis>0){
        r1=(-b+sqrt(dis)-(2*a));
        r2=(-b-sqrt(dis)-(2*a));
        printf("Roots are real and different: ");
        scanf("r1=%f and r2=%f",r1,r2);
        }
       elseif (dis == 0) {
r1=r2=-b/2*a;
printf("Roots are real and same\n");
scanf("r1=r2=%f",r1);
        }
        else {
            float realpart = -b/2*a;
            float imagpart=sqrt(-dis)/(2*a);
            printf("Roots are complex and different\n";
            printf("r1=%f+%f and r2=%f - %f",realpart,imagpart,realpart,imagpart);

        }

    }
}