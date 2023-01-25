package main

import "fmt"

var a = 9 //this is package level variable declaration.

func demo() {
	var a = 8
	// function level variable is called as local variable and it has more priority to execute than package level.
	fmt.Println("in demo: ", a) //executes.
}

//functions
func main() {
	demo()
	fmt.Println("in main(): ", a) // now it executes without any error since varibale is declared in package level.
}
