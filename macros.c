/*#include<stdio.h>
#define CONDITION(i)\           
printf("preprocessor works\n");                         
int main()
{                      //macro does not do any type checking
         CONDITION(0);//macro has been called.so printf executes
        return 0;
}
#include<stdio.h>
# define loop while(true)
int main()
{
        loop;  //actually it is runtime error coz semicolon is used here;
        printf("preprocessor-aptitude");//otherwise it will print infinite no.of times
        return 0;
}

#include<stdio.h>
# define x --5//compile time error
int main()
{
        printf("%d",x);
        return 0;
}

#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
        int a = 3, z;
        z = ++a * ++a;     
        a -= 3;
        printf("%d %d", sqr(a), z);//parameterised macro is used here;
        return 0;
}

#include<stdio.h>                      
#define x 1+2
int main()
{
        int i;
        i = x * x * x;//1+2*1+2*1+2=7
        printf("%d",i);
}
*/
#include<stdio.h>
#define a =
int main()
{
        int num a 6;//num=6;
        printf("%d",num);
        return 0;
}



