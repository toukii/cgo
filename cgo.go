package main

/*
#include "cgo.h"
*/
import "C"

import (
	"fmt"
)

func Test() {
	var Stk C.struct_Stack
	C.myTest(Stk)
	fmt.Println("STK:", Stk)
	C.myTest2(&Stk)
	fmt.Println("STK2:", Stk)
	C.TEST()
}

//export test
func test() {
	println("hello")
}

func main() {
	// test()
	Test()
}
