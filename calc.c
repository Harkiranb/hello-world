#include <stdio.h>
//comment
float add (float x, float y) //two numbers add //change sub math op to substract //divide change
{
    return x + y;
}

float sub (float x, float y)
{ 
	return x - y;
}

float times (float x, float y)
{
	return x*y;
}

float divide (float x, float y)
{
	return x/y;
}

float remainder(float x, float y)
{
	return x%y;
}
int main()
{

	
    float a, b, r;
    char op;
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
                      break;          
           case'-' : r = sub(a,b);
                     break;	     
           case'*' : r =times(a,b);
                     break;	     
           case'/' : r = divide(a,b);
                     break;
	case'%' : r= divide(a,b);	
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Byee\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }

    while (op != 'q');
    printf("Idiot\n");
    return 0;
}

