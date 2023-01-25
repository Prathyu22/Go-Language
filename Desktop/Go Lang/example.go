package main

import (
	"fmt"
	"math"
)

func main() {
	var num float64 = 12
	var result = math.Sqrt(num)                      // math.Sqrt() takes only float type numbers.
	fmt.Printf("The output is %g Thank you", result) //Printf is used to give the precision.
	//output: The output is 3.4641016151377544 Thank you
	fmt.Printf("The output is %.2f Thank you", result) // upto 2 decimals.
	//output: The output is 3.46 Thank you
}
