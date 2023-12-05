package main

import "fmt"

func main() {

	var (
		n int
		x int
	)
	fmt.Scan(&n, &x)
	a := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
		if a[i] < x {
			fmt.Printf("%d ", a[i])
		}
	}
}
