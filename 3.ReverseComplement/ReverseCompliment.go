package main


import (
	"fmt"
)


func ReverseCompliment(pattern string) string {
	compliment_dict := map[byte]byte{
		'A': 'T',
		'T': 'A',
		'C': 'G',
		'G': 'C',
	}
	reverseCompliment := make([]byte, len(pattern))

	for i:=0; i < len(pattern); i++ {
		reverseCompliment[len(pattern)-1-i] = compliment_dict[pattern[i]]
	}

	return string(reverseCompliment)
}


func main(){
	dna := "AAAACCCGGT"
	result := ReverseCompliment(dna)
	fmt.Println(result)
}
