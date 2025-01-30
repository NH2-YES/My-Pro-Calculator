
void Basic_Op();
void Advanced_Algos();
void Trig_Op();
void constants();
void Miscelleneous();
void add();
void sub();
void mul();
void div_op();
void modulo();
void factorial();
void square();
void cube();
void squareroot();
void cube_root();
void cosine();
void sine();
void tangent();
void logarithm();
void exponent();
void absolute();
void ceiling();
void flooring();
void random();
void percentage();
void inverse();
void reciprocal();
void permutation();
void combination();
void pi();
void e();
void lcm();
void hcf();
void menu();


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char name[20];
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Asalamualeykoum %s. Welcome to your Digital calculator.\n Enter your choice Please\n",name);
    menu();

    return 0;
}
void menu(){
    int choice;
    while(1){
        printf("Enter the operation to perform\n");
        printf("1. Basic Operations\n");
        printf("2. Advanced Algos\n");
        printf("3. Trigonometric Operations\n");
        printf("4. Constants\n");
        printf("5. Miscellaneous\n");
        printf("6. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Basic_Op();
                break;
            case 2:
                Advanced_Algos();
                break;
            case 3:
                Trig_Op();
                break;
            case 4:
                constants();
                break;
            case 5:
                Miscelleneous();
                break;
            case 6:
                exit(1);
                break;
            default:
                printf("Invalid choice\n");
        }   
    }
}
void Basic_Op(){
    int choice;
    printf("Enter the Basic operation to perform\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");

    scanf("%d",&choice);
    switch(choice){
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div_op();
            break;
        case 5:
            modulo();
            break;
        case 6:
            menu();
            break;
        default:
            printf("Invalid choice\n");
    }
}

void Advanced_Algos(){
    int choice;
    printf("Enter the Algorithmic operation to perform\n");
    printf("1. Exponential\n");
    printf("2. Factorial\n");
    printf("3. Square\n");
    printf("4. Cube\n");
    printf("5. Square Root\n");
    printf("6. Cube Root\n");
    printf("7. Logarithm\n");
    printf("8. Exit\n");

    scanf("%d",&choice);
    switch(choice){
        case 1:
            exponent();
            break;
        case 2:
            factorial();
            break;
        case 3:
            square();
            break;
        case 4:
            cube();
            break;
        case 5:
            squareroot();
            break;
        case 6:
            cube_root();
            break;
        case 7:
            logarithm();
            break;
        case 8:
            exponent();
            break;
        case 9:
            menu();
            break;
        default:
            printf("Invalid choice\n");
    }    
}

void Trig_Op(){
    int choice;
    printf("Enter the Trigonometric operation to perform\n");
    printf("1. Cosine\n"); 
    printf("2. Sine\n");
    printf("3. Tangent\n");
    printf("4. Exit\n");

    scanf("%d", &choice);
    switch(choice){
        case 1:
            cosine();
            break;
        case 2:
            sine();
            break;
        case 3:
            tangent();
            break;
        case 4:
            menu();
            break;
    }
}

void constants(){
    int choice;
    printf("Enter the constant to use\n");
    printf("1. PI\n");
    printf("2. e\n");
    printf("3. Exit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            pi();
            break;
        case 2:
            e();
            break;
        case 3:
            menu();
            break;
        default:
            printf("Invalid choice\n");
    }    
}

void Miscelleneous(){
    int choice;
    printf("Enter the Miscellaneous operation to perform\n");
    printf("1. Absolute\n");
    printf("2. Ceil\n");
    printf("3. Floor\n");
    printf("4. Random\n");
    printf("5. Percentage\n");
    printf("6. Inverse\n");
    printf("7. Reciprocal\n");
    printf("8. Permutation\n");
    printf("9. Combination\n");
    printf("10. LCM\n");
    printf("11. HCF\n");
    printf("12. Exit\n");

    scanf("%d", &choice);
    switch(choice){
        case 1:
            absolute();
            break;
        case 2:
            ceiling();
            break;
        case 3:
            flooring();
            break;
        case 4:
            random();
            break;
        case 5:
            percentage();
            break;
        case 6:
            inverse();
            break;
        case 7:
            reciprocal();
            break;
        case 8:
            permutation();
            break;
        case 9:
            combination();
            break;
        case 10:
            lcm();
            break;
        case 11:
            hcf();
            break;
        case 12:
            menu();
            break;
        default:
            printf("Invalid choice\n");
    }    
}

void add(){
    int n;
    double num;
    double sum=0;
    printf("Enter the number of elements to add\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%lf",&num);
        sum+=num;
    }
    printf("Their sum is %.2lf\n",sum);

}

void sub(){
    int n;
    double num;
    double result;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=1;i<n;i++){
        scanf("%lf",&num);
        result-=num;
    }
    printf("Their difference is %.2lf\n",result);
}

void mul(){
    int n, i;
    double num;
    double product=1;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%lf",&num);
        product*=num;
    }
    printf("Their product is %.2lf\n",product);
}

void div_op(){
    int n, i;
    double num, quotient;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%lf",&quotient);
    for(i=0;i<n;i++){
        scanf("%lf",&num);
        if(num!=0)
            printf("Cannot divide by zero\n");
        else
        quotient/=num;
    }
    printf("Their quotient is %lf\n",quotient);
}

void modulo(){
    int num,n,modulus;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&modulus);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        modulus%=num;
    }
    if(modulus==0){
        printf("The modulus is 0\n");
    }
    else
    printf("The modulus is %d\n", modulus);
}

void exponent(){
    int base, exponent;
    double result=1;
    printf("Enter the base and exponent\n");
    scanf("%d %d",&base,&exponent);
    for(int i=0;i<exponent;i++){
        if(exponent==0){
            result=1;
        }
        else
        result*=base;
    }
    printf("The result is %.2lf\n",result);
}

void square(){
    int num;
    double result;
    printf("Enter the number\n");
    scanf("%d",&num);
    result=num*num;
    printf("The square of %d is %.2lf\n",num,result);
}

void cube(){
    int num;
    double result;
    printf("Enter the number\n");
    scanf("%d",&num);
    result=num*num*num;
    printf("The cube of %d is %.2lf\n",num,result);
}

void squareroot(){
    int num;
    double result;
    printf("Enter the number\n");
    scanf("%d", &num);
    if(num<0){
        printf("Invalid number\n");
        return;
    }
    else{
        result = sqrt(num);
        printf("The square root of %d is %.2lf\n", num, result);
    }

}

void cube_root(){
    int num, result;
    printf("Enter the number\n");
    scanf("%d", &num);
    if(num<0){
        printf("Invalid number\n");
        return;
    }
    else{
        result = cbrt(num);
        printf("The cube root of %d is %.2lf\n", num, result);
    }
}

void logarithm(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The log of %d is %f\n",num,log(num));
}

void factorial(){
    int num;
    unsigned long long facto=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num==0){
            facto=1;
        }
        else
        facto*=i;
    }
    printf("The factorial of %d is %ld\n",num,facto);
}

void sine(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The sine of %d is %f\n",num,sin(num));    
}

void cosine(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The cosine of %d is %f\n",num,cos(num));
}

void tangent(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The tangent of %d is %f\n",num,tan(num));
}

void pi(){
    printf("The value of pi is %f\n",M_PI);
}

void e(){
    printf("The value of e is %f\n",M_E);
}

void percentage(){
    int num, percent;
    printf("Enter the number and percentage\n");
    scanf("%d %d",&num,&percent);
    printf("The percentage of %d is %f\n",num,(num*percent)/100);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    else
    return n*fact(n-1);
}

void inverse(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The inverse of %d is %f\n",num,1/num);
}

void absolute(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The absolute value of %d is %d\n",num,abs(num));
}

void ceiling(){
    float num;
    printf("Enter the number\n");
    scanf("%f",&num);
    printf("The ceil of %f is %f\n",num,ceil(num));
}

void flooring(){
    float num;
    printf("Enter the number\n");
    scanf("%f",&num);
    printf("The floor of %f is %f\n",num,floor(num));
}

void random(){
    printf("The random number is %d\n",rand());
}

void reciprocal(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The reciprocal of %d is %f\n",num,1.0/num);
}

void permutation(){
    int n, r, result;
    printf("Enter the values of n and r\n");
    scanf("%d %d", &n, &r);
    printf("The permutation of %d and %d is %d\n", n, r, (fact(n)/fact(n-r)));
}

void combination(){
    int n, r, result;
    printf("Enter the values of n and r\n");
    scanf("%d %d", &n, &r);
    printf("The combination of %d and %d is %d\n", n, r, (fact(n)/(fact(n-r)*fact(r))));
}

    int gcd(int a, int b){
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

void lcm(){
    int a, b;
    printf("Enter the numbers\n");
    scanf("%d %d", &a, &b);
    printf("The LCM of %d and %d is %d\n", a, b, (a*b)/gcd(a,b));
}

void hcf(){
    int a, b;
    printf("Enter the numbers\n");
    scanf("%d %d", &a, &b);
    printf("The HCF of %d and %d is %d\n", a, b, gcd(a,b));
}

