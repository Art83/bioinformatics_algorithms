package main

import "fmt"

func minimum_skew(genome string) []int {
	skew := []int{0}
	var mn_indices []int
	mn := 0
	for i := 1; i < len(genome)+1; i++ {
		fmt.Println(i)
		if genome[i-1] == 'C' {
			skew = append(skew, skew[i-1]-1)
		} else if genome[i-1] == 'G' {
			skew = append(skew, skew[i-1]+1)
		} else {
			skew = append(skew, skew[i-1])
		}

		if skew[len(skew)-1] < mn {
			mn = skew[len(skew)-1]
			mn_indices = []int{i}
		} else if skew[len(skew)-1] == mn {
			mn_indices = append(mn_indices, i)
		}
	}
	return mn_indices
}

func main() {
	dna := "TAAAGACTGCCGAGAGGCCAACACGAGTGCTAGAACGAGGGGCGTAAACGCGGGTCCGAT"
	result := minimum_skew(dna)
	fmt.Println(result)
}
