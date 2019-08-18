#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
  char str1[10];
  printf("\n Enter yes or no\n");
  scanf("%s",str1);
  if(strcmp(str1,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value ");
  scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
int length(struct node *p)
{
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  return c;
}
struct node *reverse(struct node *p)
{
  struct node *start,*q,*t,*s,*r;
  int i=0;
  int j=length(p)-1;
  int z=length(p)/2;
  int c=0;
  p=q=s;
  while(i<j)
  {

      int k=0;
    while(k<j)
    {
      q=q->next;
      k++;
    }
    if(s->data==q->data)
    {
    c++;
    }
    else
    {
    printf("It is not palindrome ");
     exit(1);
    }
    i++;
    j--;
    s=s->next;
    q=p;

  }
  if(z==c)
  printf("It is palindrome ");
}
int main()
{
  struct node *p,*temp,*start=NULL,*t,*q;
  p=create();
  t=reverse(p);
}
