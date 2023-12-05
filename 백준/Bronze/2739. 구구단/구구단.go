package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	for i := 0; i < 9; i++ {
		fmt.Printf("%d * %d = %d\n", a, i+1, a*(i+1))
	}
}
