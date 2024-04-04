package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
	"strconv"
)

func PatternCount(text, pattern string) int {
	cnt := 0
	for i := 0; i <= len(text)-len(pattern); i++ {
		if text[i:i+len(pattern)] == pattern {
			cnt++
		}
	}
	return cnt
}

func main() {
	pwd, _ := os.Getwd()
	directory := "1.Hidden_messages/test/inputs"
	tests, _ := ioutil.ReadDir(filepath.Join(pwd, directory))
	for i := 1; i <= len(tests); i++ {
		fmt.Println("input_" + strconv.Itoa(i) + ".txt")
	}
}
