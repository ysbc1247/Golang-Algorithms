package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	var tot int = 0
	for i := 1; i <= a; i++ {
		tot += i
	}
	fmt.Println(tot)
}
