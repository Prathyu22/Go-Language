package main

import "fmt"

var a = 9 //this is package level variable declaration.

func demo() {
	fmt.Println(a) //executes.
}

//functions
func main() {
	demo()
	fmt.Println(a) // now it executes without any error since varibale is declared in package level.
}
