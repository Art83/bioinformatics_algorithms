package main

import "fmt"

func FreqMap(text string, k int) map[string]int {
	freq_map := make(map[string]int)
	for i := 0; i < len(text)-k+1; i++ {
		pattern := text[i : i+k]
		if _, ok := freq_map[pattern]; ok {
			freq_map[pattern]++
		} else {
			freq_map[pattern] = 1
		}
	}
	return freq_map
}

func no_sets_in_golang(slc []string) []string {
	Keys := make(map[string]bool)
	res := []string{}
	for _, item := range slc {
		if _, value := Keys[item]; !value {
			Keys[item] = true
			res = append(res, item)
		}
	}
	return res
}

func find_clumps(genome string, k, l, t int) []string {
	var patterns []string
	for i := 0; i < len(genome)-l+1; i++ {
		freq_map := FreqMap(genome[i:i+l], k)
		for k, v := range freq_map {
			if v >= t {
				patterns = append(patterns, k)
			}
		}
	}
	patterns = no_sets_in_golang(patterns)
	return patterns
}

func main() {
	text := "CGGACTCGACAGATGTGAAGAACGACAATGTGAAGACTCGACACGACAGAGTGAAGAGAAGAGGAAACATTGTAA"
	k := 5
	l := 50
	t := 4
	fmt.Println(find_clumps(text, k, l, t))
}
