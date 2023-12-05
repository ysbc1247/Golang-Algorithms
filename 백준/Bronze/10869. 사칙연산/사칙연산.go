package main

import (
	"fmt"
)

func main() {
	var a, b int32
	fmt.Scan(&a, &b)
	fmt.Println(a + b)
	fmt.Println(a - b)
	fmt.Println(a * b)
	fmt.Println(a / b)
	fmt.Println(a % b)
}
