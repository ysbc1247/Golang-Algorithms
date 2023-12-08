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
	var count int
	count = len(s)

	for i := 0; i < len(s); i++ {
		if s[i] >= 65 && s[i] <= 67 {
			count += 2
		} else if s[i] >= 68 && s[i] <= 70 {
			count += 3
		} else if s[i] >= 71 && s[i] <= 73 {
			count += 4
		} else if s[i] >= 74 && s[i] <= 76 {
			count += 5
		} else if s[i] >= 77 && s[i] <= 79 {
			count += 6
		} else if s[i] >= 80 && s[i] <= 83 {
			count += 7
		} else if s[i] >= 84 && s[i] <= 86 {
			count += 8
		} else if s[i] >= 87 && s[i] <= 90 {
			count += 9
		}
	}
	cout(count)
}
