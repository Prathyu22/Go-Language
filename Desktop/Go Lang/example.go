package main

import "fmt"

/*

Data types :

1. bool
2. string
3. int, int8, int16, int32, int64.
   uint, uint8, uint16, uint32, uint64, uintptr.
   --> Here, uint refers to "unsigned integer".
4. byte // alias for uint8.
5. rune // alias for int32.
        // represents a unicode code point.
6. float32, float64

*/
func main() {
	/*var num = 2
	var num1 int = 3
	var num2 int
	num2 = 4*/

	var num, num1 int //declaration
	num, num1 = 2, 3  //initialization
	fmt.Print(num, num1)
}
