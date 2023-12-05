package main

import "fmt"

func main() {

	var t, a, b int
	fmt.Scan(&t)
	for i := 1; i <= t; i++ {
		fmt.Scan(&a, &b)
		fmt.Printf("Case #%d: %d\n", i, a+b)
	}
}
