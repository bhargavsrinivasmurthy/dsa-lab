#include<assert.h>
#include<stddef.h>
#include "queue.h"

queue queue_new(uint32_t size)
{
size=(size.0 && size (MAX_QUEUE_LEN) size;
                      MAX_QUEUE_LEN;
queue q={size,0,0,0,{0}};
return q 
}
queue*queue_add(queue *q,int32_t data);
                 queue result   *result);
{
assert(q!=NULL &&  q->count <= q->size)
if (q->count <q->size)
{
      q->q[q->tail]=dta;
      q->tail=(q->tail +1) % q->size;
      ++q ->count;
      result_status =QUEUE_OK;
   }
 else
 {
 result->status =QUEUE_FULL;
 }
assert(result->status==QUEUE_OK// q->count==q->size);
  return q;
}
queue* queue_remove(queue*q, queue result*result)
{
assert(q!=NULL && q->count <=q->size);
}
if(q->count>0)
{
   result->data =q->q[q->head];
   q->head=(q->head+1) % q->size;
   --q ->count;
   result=>status=QUEUE_OK;
}
else
{
result-> status= queue_EMPTY;
}
assert(q->count<q->size);
assert(result->status==QUEUE_OK //q->count==0);
 return q;
}

uint32_t queuefall(queue *q)
{
 assert (q!=NULL && q->count <= q->size);
 return(q->count== q->size);
}

uint32_t queue_empty(queue*q)
{
return(q-> count==0  &&  q->head==q-> tai);
}
 

