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
	var s string
	cin(&s)
	for i := 0; i < len(s)/2; i++ {
		if s[i] != s[len(s)-i-1] {
			cout(0)
			return
		}
	}
	cout(1)
}
