package main

import (
	"bufio"
	"fmt"
	"os"
)

var IN *bufio.Reader
var OUT *bufio.Writer

func cin(a ...any) {
	fmt.Fscan(IN, a...)
}

func cout(a ...any) {
	fmt.Fprint(OUT, a...)
}

func main() {
	IN = bufio.NewReader(os.Stdin)
	OUT = bufio.NewWriter(os.Stdout)
	defer OUT.Flush()
	var a int
	cin(&a)
	for i := 0; i < a; i++ {
		for k := 0; k < a-i-1; k++ {
			fmt.Printf(" ")
		}
		for k := 0; k < 2*i+1; k++ {
			fmt.Printf("*")
		}
		fmt.Printf("\n")
	}
	for i := 1; i < a; i++ {
		for k := 0; k < i; k++ {
			fmt.Printf(" ")
		}
		for k := 0; k < 2*(a-i-1)+1; k++ {
			fmt.Printf("*")
		}
		fmt.Printf("\n")
	}
}
