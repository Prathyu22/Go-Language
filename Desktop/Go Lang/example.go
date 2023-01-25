package main

import "fmt"

func calc(x, y int) (out, out1 int) {
	out = x + y
	out1 = x - y
	return
}

//functions
func main() {
	num1 := 5
	num2 := 6
	result, result1 := calc(num1, num2)
	fmt.Println(result, result1)
}
