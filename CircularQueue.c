#include<stdio.h>
void insert(int *);
void delete(int *);
void search(int *);
void display(int *);
int f,x,n=10;
int front=-1; int rear=-1;
void main()
{int q[10]; int opt;
while(1)
{printf("1.INSERT\n2.DELETE\n3.SEARCH\n4.DISPLAY\n5.EXIT\n");
printf("Enter your choice\n");
scanf("%d",&opt);
switch (opt)
{ case 1: insert(q);
break;
case 2: delete(q);
break;
case 3: search(q);
break;
case 4: display(q);
break;
case 5:printf("good bye");
return; }
}
}
void insert(int *q)
{ printf("enter the element\n");
scanf("%d",&x);
if (front==(rear+1)%n)
{  printf("queue is full\n");
return; }
if (front==-1)
front=0;
rear=(rear+1)%n;
q[rear]=x; }
void delete(int *q)
{ if (front==-1)
{ printf("queue is empty\n");
return;}
printf("deleted element is %d\n",q[front]);
if (front==rear)
front=rear=-1;
else
front=(front+1)%n; }
void search(int *q)
{ int f, pos;
printf("eneter element to search\n");
scanf("%d",&x);
if (front==-1)
{ printf("queue is empty\n");
return; }
f=front; pos=1;
while (1)
{ if (q[f]==x)
{printf("element found at location %d\n",pos);
break; }
if (f==rear)
{ printf("element not found\n");
break; } }
f=(f+1)%n;
pos=pos+1; }
void display(int *q)
{ if (front==-1)
{ printf("queue is empty\n");
return; }
f=front;
while(1)
{ printf("%d\n",q[f]);
if(f==rear)
break;
f=(f+1)%n;
}
}
