//https://pkg.go.dev/fmt -- to get the overview about fmt.

package main

import "fmt"

func main() {
	num := 3

	switch num {
	case 1:
		fmt.Println("One")
	case 2:
		fmt.Println("Two")
	case 3:
		fmt.Println("Three")
	default:
		fmt.Println("")
	}

}
