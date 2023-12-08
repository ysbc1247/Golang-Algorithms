package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var IN *bufio.Reader
var OUT *bufio.Writer

func cin(a ...any) {
	fmt.Fscan(IN, a...)
}

func cout(a ...any) {
	fmt.Fprint(OUT, a...)
}
func reverseString(str string) (result string) {
	// iterate over str and prepend to result
	for _, v := range str {
		result = string(v) + result
	}
	return
}
func main() {
	IN = bufio.NewReader(os.Stdin)
	OUT = bufio.NewWriter(os.Stdout)
	defer OUT.Flush()
	var a, b string
	cin(&a, &b)
	a = reverseString(a)
	b = reverseString(b)
	var q, w int
	q, _ = strconv.Atoi(a)
	w, _ = strconv.Atoi(b)
	cout(max(q, w))
}
