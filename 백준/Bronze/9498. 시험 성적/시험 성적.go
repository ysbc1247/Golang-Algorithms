package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	var b string
	switch {
	case a >= 90:
		b = "A"
	case a >= 80:
		b = "B"
	case a >= 70:
		b = "C"
	case a >= 60:
		b = "D"
	default:
		b = "F"
	}
	fmt.Println(b)
}
