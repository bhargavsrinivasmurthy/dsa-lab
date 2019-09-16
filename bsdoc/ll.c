# include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include "slist.h"

list* slist_new()
{
  list  *list;
  list =(List*) malloc_(size of (list));
  list ->head=NULL;
  list ->tail=NULL;
  list ->length =0;
  retun list;
}
/*free the nodes of the list ,the list discriptor leaves on tilllist_destroy called.

List* slist_free(list *list)
   {
   	Node *cur ,*p;
   	if (nlist_length(list)>0)
   	{
   assert(list ->head && list->tail);
   cur=list->head;

   list->head=NULL;
   list->tail=NUL;

   while(cur!=NULL)
   {
      p=cur;
      cur=cur->next;
      free(p);
    --list->length;
    }
  }
 } 
 return list;/* a helper internal function to allocate node that holds the data     		
static Node +_list-node_new(int32_t data)
 {
  Node*node=(Node*)malloc(size of (node));
  node->data=data;
  node->next=NULL;
  return node;
 }
 /*greater a new node and initialses it with data,the head of the list willpoint to the new node

 List* slist_add_head(list *list,int32_t data)
  {
  	Node *node=_list_node_new_(data)
  	node->next=list->head;
  	list-head =node;
  	if (list->tail==NULL)
  	{
  	/*first node in the list
  	list->tail=node;
  	}
  	++list->length;
  	assert((list->length ==1 && list-> head==list->tail)
  	//list->length >0 && list->head!=list->tail));
  	return list;
  	}
 uint32_t slist_length(count list *list)
     {
     return list->length;
     }
uint32_t slist_lookup(count list*list,int32_t key)
{
Node *node=list->head;
for(node=list->next)
{
if(node->data==key)break;
}
return(node!=NULL);
}
list*slist_add_tail(list*list,int32_t data)
 {
 Node *node=_list_node_new_new_(data);
 if(list ->tail! =NULL)
 {
    list->tail ->next =node;
    list->tail=node
 }
 else 
    list-> head = list->tail=node;
 }
 ++list->length;
 return list;

 list* slist_delete_head(list*list)
 {
 node=node;
 if(list->head!=NULL)
 {
 assert(list->length>0)
 node=list->head;
 list->head =list->head->next;
 _int->length;
 if(int->head==NULL)
 {
     list->tail==NULL;
     assert(list->length==0);
    }
   free(node);
  }
  return list;
  }
 list* slist_delete_tail(list+list)
 {
  assert(list!=NULL);
  Node +tail=list->tail;
  Node*node;
  if(list->tail !=NULL)
{
 assert(list->length.0);
  if(list->tail==list->head)
{
 list->head =list->tail=NULL
}
else
{
/*find the node one step behind the tail node*/
for(node=dist->head;node->next !=list->tail;
       node=node->next);
  list->tail=node;
  list->tail->next=NULL;
  free(tail);
}
__list->length;
}
return list;
}
list* slist_add_on_data(list * list,int32_t data)
{
  if(list->head !=NULL)
{
 node+cur=list->head;
 node+node=_list_node_new_(data);
 for(;cur !=NULL && cur->data!=data;
       cur=cur->next);
   if(cur!=NULL)
{
 node->next =cur->next;
 cur->next=node;
 if (node->next==NULL)
{
node->next=cur->next;
cur->next =node;
if(node->next==NULL)
{
   list->tail=node;
  }
}
 ++list->length;
}
return list
}
list+slist_add_on_key(list*list,int32_tdata,int32_t key)
{
Node+node=_list_node_new_(data);
Node+node1=_list_node_new(key);
   cur->next=key;
list +slist_delete_on_data(list +list,int32_t data);
 {
if(list->head !=NULL)
{
   Node*cur,*P;
   cur=list-head;
 /*delete the head node if data matched
 if (cur->data==data)
{
  list->head=cur->next;
}
else
{ 
  p=cur;
 cur=cur->next;
while(cur!=NULL)
{
 if(cur->data==data)
{
 p->next=cur->next;
}
else
{
p=cur;
cur=cur->next;
 }

}
if(cur==list->tail)
{
list->tail=p;
 }
}
if(list->head==NULL)
{
 list->tail=NULL;
}
free(cur);
__list->length;
 }
}
}






