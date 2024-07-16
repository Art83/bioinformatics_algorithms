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

func ApproximatePatternMatching(Pattern, Text string, d int) []int {
	var indices []int
	var k int
	for i := 0; i < len(Text)-len(Pattern)+1; i++ {
		k = HammingDistance(Pattern, Text[i:i+len(Pattern)])
		if k <= d {
			indices = append(indices, i)
		}
	}
	return indices
}

func main() {
	genome := "CGCCCGAATCCAGAACGCATTCCCATATTTCGGGACCACTGGCCTCCACGGTACGGACGTCAATCAAAT"
	kmer := "ATTCTGGA"
	d := 3
	var ind []int
	ind = ApproximatePatternMatching(kmer, genome, d)
	fmt.Println(ind)
}
