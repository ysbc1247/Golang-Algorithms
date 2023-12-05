package main

import "fmt"

func main() {
	var A, B int
	fmt.Scan(&A, &B)
	fmt.Printf("%d\n%d\n%d\n%d", A*(B%10), A*((B%100)/10), A*(B/100), A*B)
}
