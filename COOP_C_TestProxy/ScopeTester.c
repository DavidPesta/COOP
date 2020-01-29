#include "ScopeTester.h"
#include "dynamic_memory_management.h"

DEF_CTOR(ScopeTester, char * pointedVal)
{
	_this->buff = pointedVal;
	*(_this->buff) = 'A';

}
END_CTOR

DEF_DTOR(ScopeTester)
{
	*(_this->buff) = 0;
}
END_DTOR

FUNCTION_IMPL(ScopeTester, ThrowingIfEQ, int a, int b)
{
	SCOPE_START;

	if (a == b)
		THROW;

	SCOPE_END;
}
END_FUNCTION_IMPL

INIT_CLASS(ScopeTester)
BIND(ScopeTester, ThrowingIfEQ);
END_INIT_CLASS