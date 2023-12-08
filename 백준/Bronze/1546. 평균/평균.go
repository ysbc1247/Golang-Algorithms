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
	var n int
	var mx float32
	var ans float32
	ans = 0
	mx = 0
	cin(&n)
	var arr [10005]float32
	for i := 0; i < n; i++ {
		cin(&arr[i])
		mx = max(mx, arr[i])
	}

	for i := 0; i < n; i++ {
		arr[i] = arr[i] / mx * 100
		ans += arr[i]
	}
	fmt.Println(ans / float32(n))
}
