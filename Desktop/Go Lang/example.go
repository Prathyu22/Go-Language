package main

import "fmt"

func main() {

	fmt.Println() // it doesn't show error.
	fmt.toLarge() // it shows error.

	// When we are using our in-built methods or libraries
	// outside our package then we need to use them with capital letters.
	// ---> Exported Names.

}
