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
	arr := [6]int{1, 1, 2, 2, 2, 8}
	for i := 0; i < 6; i++ {
		var a int
		cin(&a)
		fmt.Printf("%d ", arr[i]-a)
	}
}
