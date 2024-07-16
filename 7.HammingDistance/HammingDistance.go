package main

import "fmt"

func HammingDistance(a, b string) int {
	if len(a) != len(b) {
		fmt.Println("Strings must have the same size")
		return 1
	}
	dist := 0
	for i := 0; i < len(a); i++ {
		if a[i] != b[i] {
			dist++
		}
	}
	return dist
}

func main() {
	a := "GATAGCAGCTTCTGAACTGGTTACCTGCCGTGAGTAAATTAAAATTTTATTGACTTAGGTCACTAAATACT"
	b := "AATAGCAGCTTCTCAACTGGTTACCTCGTATGAGTAAATTAGGTCATTATTGACTCAGGTCACTAACGTCT"
	res := HammingDistance(a, b)
	fmt.Println(res)
}
