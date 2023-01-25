package main

import "fmt"

func demo() {
	//scope of the variable is limited to this function itself.
	var a = 9
	fmt.Println(a)
}

//functions
func main() {
	demo()
	fmt.Println(a) // error occured since 'a' is undefined in this function.
}
