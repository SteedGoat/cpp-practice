 #include "stdio.h"                         /*应锟矫猴拷锟斤拷printf锟斤拷scanf*/
 #define N 10
 static unsigned long k=-1;                 /*k为锟斤拷态锟睫凤拷锟斤拷锟斤拷锟斤拷全锟街憋拷锟斤拷*/
 void  startnum(unsigned int seed)
  {
    k=seed;                                 /*锟斤拷锟斤拷k值*/
  }

 unsigned randnum(long n)                   /*n为锟轿诧拷*/
   {
     k=((k*159+23)%n)+1;
     return k;
   }
 int main()
 {
   register unsigned int i;                 /*锟侥达拷锟斤拷锟斤拷锟斤拷*/
   long n=0;                                /*锟皆讹拷锟斤拷锟酵局诧拷锟斤拷锟斤拷*/
   while(!(n>0&&(k>0&&k<=65536)))
     {
       printf("\n Input the seed and the max random[1-65535]:\n");
       scanf("%ld%ld",&k,&n);
       if(n<=0)
	 printf("\n wrong seed!");          /*锟斤拷示锟斤拷锟斤拷锟斤拷息*/
       if(k<=0||k>65536)
	 printf("\n wrong max random!");
     }
   startnum(n);                             /*n为实锟斤拷,锟斤拷值锟斤拷锟斤拷*/
   for(i=0;i<N;i++)
     printf("%6u",randnum(n));              /*循锟斤拷锟斤拷值锟斤拷锟斤拷示*/
   return 0;
 }