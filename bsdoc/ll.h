ifdef _INCLUDED_SLIST_
#define _INCLUDED_SLIST_
#include<stdint.h>
 
  typedef struct _node _Node;
  typedef struct _slist_ list;

  struct _slist_
  {
  Node*head;
  Node*tail;
  uint32_t length;
};
struct _node_
{
	int32_t data;
	Node *next;
}
/* The public interface ofthe ADT*/

List*  slist_new();
list*  slist_free(List*);
uint32_t slist_length(count list *list);
uint32_t slist_lookup(count list *list,int32_t lay);
List* slist_add_head(List *list,int32_t data);
List* slist_add_tail(List *list,int32_t data)
#endif

