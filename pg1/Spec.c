#include <assert.h>
#include "stack.h"

void test_capacity_one_stack()
{
	stack stk_instance =stack_new(1);
	stack *stk = &stk_instance;
	stackResult result;

	assert(stack_empty(stk));
	assert(!stack_full(stk));

	stack_peek(stk,&result);
	assert(result.status==STACK_EMPTY);

	stack_pop(stk,&result);
	assert(result.status==STACK_EMPTY);

	stack_push(stk,100,&result);
	assert(result.status==STACK_OK);
	assert(stack_full(stk));

	stack_push(stk,101,&result);
	assert(result.status==STACK_FULL);
	stack_peek(stk,&result);
	assert(result.data==100 && result.status==STACK_OK);

	stack_pop(stk,&result);
	assert(result.data==100 && result.status==STACK_OK);

	stack_pop(stk,&result);
	assert(result.data==100 && result.status==STACK_OK);
	assert(stack_empty(stk));
}

void test_arbitrary_stack()
{
	stack stk_instance=stack_new(0);
	stack *stk=&stk_instance;
	stackResult result={0,RESULT_INVALID};
	int i;

	for(i=0;i<MAX_DEPTH;i++){
		stack_push(stk,i,&result);
		assert(result.status==STACK_OK);
		result.status=RESULT_INVALID;
	}

	stack_push(stk,i,&result);
	assert(result.status==STACK_FULL);
	for(i=0;i<MAX_DEPTH;i++){
		result.status=0;
		stack_peek(stk,&result);
		assert(result.status==STACK_OK);
		assert(result.data==MAX_DEPTH-i-1);
		stack_pop(stk,&result);
		assert(result.status==STACK_OK);
	}
	assert(stack_empty(stk));
}


int main()
{
	test_capacity_one_stack();
	test_arbitrary_stack();

	return 0;
}
