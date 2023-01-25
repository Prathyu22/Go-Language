package main

import "fmt"

// only one looping statement is available in "go language." --> "for"
func main() {
	// method2 for infinite loop

	for i := 1; i <= 5; i++ {
		fmt.Println("Example", i)
	}
}
