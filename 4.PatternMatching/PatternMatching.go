package main

import "fmt"

func PatternMatching(pattern, genome string) []int {
	var array []int
	for i := 0; i < len(genome)-len(pattern)+1; i++ {
		if pattern == genome[i:i+len(pattern)] {
			array = append(array, i)
		}
	}
	return array
}

func prt_array(arr []int) {
	for i := 0; i < len(arr); i++ {
		fmt.Print(arr[i], " ")
	}
}

func main() {
	pat := "ATAT"
	genome := "GATATATGCATATACTT"
	result := PatternMatching(pat, genome)
	prt_array(result)
}
