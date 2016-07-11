#ifndef _TEST_H  
#define _TEST_H  
  
#ifdef __cplusplus  
extern "C" {  
#endif  
struct Stack
{
	int * base;
	int * top;
	int size;
};
extern void myTest();
extern void myTest(struct Stack stk);  
extern void myTest2(struct Stack* stk);  
// extern void myTest3(struct Stack& stk);  
extern void TEST();  
  
#ifdef __cplusplus  
}  
#endif  
  
#endif  