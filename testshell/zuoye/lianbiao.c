#include <stdio.h>
struct list
{
    int data;
    struct list*next;
} ;

struct list*rread()
{
    struct list*head=NULL,*p,*q=NULL;
    int n1,n2;
    int num1=0,num2=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
      if (scanf("%d",&num1)==1)
      {
        p=(struct list*)malloc(sizeof(struct list));
        if(p==NULL)
        exit(1);
        p->data=num1;
        p->next=NULL;
        
      }
      if(head==NULL)
      {
        head=p;
        q=p;
       
      }
      else
      {
        q->next=p;
       q=q->next;
      }
    }
   return head;

}
struct list*reverse(struct list*head)
{
    struct list*q=NULL;
    struct list*p=head;
    struct list*m=NULL;
    while(p!=NULL)
    {
        m=p->next;
        p->next=q;
        q=p;
        p=m;
    }
    return q;
}
struct list*reverse(struct list*head)
{
    struct list*p=NULL;
    struct list*q=head;
    struct list*m=NULL;
    while(q!=NULL)
    {
        m=q->next;
        q->next=p;
        p=q;
        q=m;   
    }
    return q;
}
/*链表拼接*/
struct list* merge(struct list* L1,struct list* L2)
{
   struct list*m=(struct list*)malloc(sizeof(struct list));
   m->next=NULL;
   struct list*n=m;
  struct list*p=L1->next;
  struct list*q=L2->next;
  L1->next=NULL;
  L2->next=NULL;
  while(p!=NULL&&q!=NULL)
  {
    if(p->data<=q->data)
    {
        n->next=p;
        p=p->next;
    }
    else
    {
        n->next=q;
        q=q->next;

    }
   n= n->next;
  }
  if(p!=NULL)
  n->next=p;
  else
  n->next=q;
  return m;
}
int main()
{

  
    return 0;
}