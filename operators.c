#include<stdio.h>
int main()
{
	printf("%d\n",1==5==5);//here output =0,because associtivity is from left to right;
	int i=0;                //as ++ is post increment so first the value of i prints as 0 and then another i as 1.
	printf("%d %d ",i,i++);//as ++ is the unary operator.it will print first.
	int x=5;                     //precedence is same so according to associtivity right mosst opearates first.
	printf("%d %d %d\n",x++,x++,x++);//out put will be 7 6 5 and after thus step x values will be 8.
	int a=2;
//	printf("%d \n ",++a++);//compile error because there is no sequence point in expression. 
	printf("%d\n",a++);
	int k=1;
	printf("%d==1 is ""%s\n",k,k==1?"true":"false");
	printf("\"\"\n");//to print the invited quotes we have to use escape sequence.
	i=5;
	i=i++ + ++i; 
	printf("%d\n",i);//from above expr i value will be 12;but if we use x=i++ + ++i; then i value will be 7;
	printf("%d\n",x);
	a=7;
	a+=a+=a-=6;//here first 7-6 happens and 1 will be assign to a and 1+1 2will be assign and 2+2 4 is the result;
	printf("%d\n",a);
	int b=10,y=5,p,q;
	p=b>9;//1
	q=p||(b=5,y=10);//1||10 = 1 .in this line we are using comma operand which works in ()paranthesis.
	printf("%d %d %d\n",q,b,y);
	x=2;
    y=1;
    y+=x<<=2;//left shift happens and x becomes 8 as per the binary operation will be done 
    printf("%d %d \n",x,y);
    int *ptr=&y;
    printf("%d\n",++*ptr);
    x=2;y=4;
    int z;
    z=y++*x++|y--; //here 1st 2*4 happens and then x and y increases and bitwise or will perform and y decreases. 
    printf("%d\n",z);
    a=5;b=6;
	int c=7, d;
    d=a&=b&=c&&a;//here it operates from rtol and therfore d=0;
    printf("%d\n",d);
    i=10;//1st right most operation happens and 1 3 4 will be there and later 1 4 will be there and 4 is o/p
	                                     //because 1st operation is false. 
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
    a=10,b=20;
  //  a=(a>5||b=6?40:50);//compilation error
    printf("%d\n",a);
    printf("%x\n",-1>>4);//hexa decimal value with all bits set.
    printf("%x\n",-1<<4);//hexa decimal value with last four bits 0000;
    x=7;
    x=(x<<=x%2);//1st x %2 will perform and left shift occurs;
    printf("%d\n",x);
    a=2,b=5,c=1;//a=a>c(1)and b=b>a(1)so at last condition is true 1 will be theoutput.
    printf("%d\n",(b>=a>=c?1:0));
    a=5;
    a=a-~a+1 ;//here 1st ~a happens and value -6 comes and 5-(-6)=11 comes and 1 is added so 12 will be output;
    printf("%d\n",a);
    a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);//0||2/*1&&2*0 therefore 1&&0 =0;
    printf("%d\n",x);
    a=10;
    b = -5;
    c = 2.5;
    printf("%d %d\n",sizeof(a) + sizeof(++b) *c, b);//4+4*2.5=12 , b=-5(because in sizeof operator changes will not takes place).
    i=5;
    i=i++ - i;
    printf("%d",i);
	
}
