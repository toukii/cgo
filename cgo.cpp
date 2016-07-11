#include <iostream>
using namespace std;
extern "C" {  

struct Stack
{
	int * base;
	int * top;
	int size;
};

extern void test();

void myTest(struct Stack stk) {
	test();
	cout<<stk.size<<endl;
    cout<<"满了你就倒空它"<<endl;
}

void myTest2(struct Stack* stk) {
	stk->size=100;
	cout<<stk->size<<endl;
    cout<<"空了你就装满它"<<endl;
}

void myTest3(struct Stack& stk) {
	stk.size=101;
	cout<<stk.size<<endl;
    cout<<"痒了你就挠挠它"<<endl;
}


void TEST(){
	struct Stack stack;
	myTest(stack);
	myTest2(&stack);
	cout<<stack.size<<endl;
	myTest3(stack);
	cout<<stack.size<<endl;
}
  
}  