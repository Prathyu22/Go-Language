//https://pkg.go.dev/fmt -- to get the overview about fmt.

package main

import "fmt"

func main() {
	num := 9
	if num < 5 {
		fmt.Println("Hi ", num)
	} else if num == 0 {
		fmt.Println("Bye ", num)
	} else {
		fmt.Println("Good Bye ", num)
	}

}
