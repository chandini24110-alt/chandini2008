#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char"argv[])
{
  int m1,m2,m3,m4,m5,total;
  float average;
  char name[30];
  if(argc!=7)
 {
  printf("usage:./a.out name m1,m2,m3,m4,m5\n");
  return 0;
  }
  strcpy(name,argv[1]);
  m1=atol(argv[2]);
  m2=atol(argv[3]);
  m3=atol(argv[4]);
  m4=atol(argv[5]);
  m5=atol(argv[6]);
  total=m1+m2+m3+m4+m5+;
  average=total/5.0;
  printf("/n-------------STUDENT REPORT--------------");
  printf("student name:%s\n",name);
  printf("mark 1    :%d\n",m1);
  printf("mark 2    :%d\n",m2);
  printf("mark 3    :%d\n",m3);
  printf("mark 4    :%d\n",m4);
  printf("mark 5    :%d\n",m5);
  printf("total     :%d\n",total);
  printf("average   :%.2f",average);
  if(m1<35||m2<35||m3<35||m4<35||m5<35||);
  {
    printf("result:fail\n"); 
  }
  else
  {
    printf("result:pass\n");
  }
  return 0;
}
