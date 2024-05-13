package main

import "fmt"

func max_value(dict map[string]int) int {
	mx := 0
	for _, value := range dict {
		if value > mx {
			mx = value
		}
	}
	return mx
}

func FrequentWords(text string, k int) []string {
	dict := make(map[string]int)
	var freq_kmers []string
	for i := 0; i < len(text)-k+1; i++ {
		pattern := text[i : i+k]
		dict[pattern]++
	}
	max_val := max_value(dict)
	for key, value := range dict {
		if value == max_val {
			freq_kmers = append(freq_kmers, key)
		}
	}
	return freq_kmers
}

func main() {
	num := 4
	text := "ACGTTGCATGTCGCATGATGCATGAGAGCT"
	fmt.Println(FrequentWords(text, num))
}
