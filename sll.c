#include <stdio.h>
#include <stdlib.h>


struct node{
 int data;
 struct node *next;
}*head,*tail;

void addNode();
int countNodes();
void display();
void deletion();
void insertion(int pos);
void find_ele();

int main(void) {
  while(1){
  int op;
  printf("-------------\n");
  printf("1.Add\n2.Count\n3.Display\n4.Delete\n5.Insertion\n6.Find Element\nExit\n-------------\nENter option:");
  scanf("%d",&op);
  printf("-------------\n");
  if(op==1)
    addNode();
  else if(op==2)
  { int a=countNodes();
     printf("NO. of nodes:%d\n",a);}
  else if(op==3)
     display();
  else if(op==4)
     deletion();
  else if(op==5)
    {
  int op,po;
  printf("-------------\n");
  printf("Insertion at\n1.Beggining\n2.End\n3.Specified Position\n--------------\nEnter your option:");
  scanf("%d",&op);
  printf("-------------\n");
  if(op==1)
     insertion(0);
  else if(op==2)
     addNode();
  else if(op==3)
  {
    printf("Enter position:\n");
    scanf("%d",&po);  
    if (po>0 && po<=countNodes())
        insertion(po);
    else
      printf("Index out of range\n");    
  }
   else
    break;
  }
  else if(op==6)
    find_ele();
  else
    break;}
  return 0;
}

void addNode()
{
   struct node *l;
   l=(struct node*)malloc(sizeof(struct node));
   printf("Enter data in node:\n"); 
   scanf("%d",&l->data);
   l->next=NULL;
   if(head==NULL){
      head=l;
      tail=l;  
      }
   else{
     tail->next=l;
     tail=l;
   }
}

int countNodes()
{
  struct node *c;
  c=head;
  if (head!=NULL){
  int count=1;
  while(c->next!=NULL)
    {count++;
     c=c->next;
    }
  return count;
  }
  else
    return 0;
  
}
void display()
{
  struct node *c;
  c=head;
  printf("-------------\n");
  while(c!=NULL)
    {printf("%d\n",c->data);
   c=c->next;}
  printf("-------------\n");
}

void deletion()
{
  struct node *c;
  c=head;
  int d;
  printf("Enter node to be deleted:");
  scanf("%d",&d);
  if(d>0 && d<=countNodes())
  {
  if (countNodes()==1)
  {
    head=head->next;
  }
  else{
  for(int i=1;i<d-1;i++)
    {
      c=c->next;
    }
  struct node *nxt=c->next->next;
  c->next=nxt;}
  }
  else 
  printf("Out of Range!\n");
}

void insertion(int pos)
{
  struct node *ptr=head,*p=(struct node*)malloc(sizeof(struct node));
  printf("Enter data in node:\n"); 
   scanf("%d",&p->data);
  
  if(pos==0)
  {
    p->next=ptr;
    head=p;
  }
  else
  {for(int i=0;i<pos-2;i++)
    {
      ptr=ptr->next;
    }
  struct node *ptr1=ptr->next;
  p->next=ptr1;
  ptr->next=p;
  }
}

void find_ele()
{
  int ele,pos=0,c=0;
  printf("Enter element:");
  scanf("%d",&ele);
  struct node *s=head;
  while(s!=NULL)
    {
      c++;

      if(s->data==ele)
      {
        pos=c;
        break;
      }
      s=s->next;
    }
  if(pos==0)
    printf("Element Not found!\n");
  else
    printf("Element found at %d position\n",pos);
}