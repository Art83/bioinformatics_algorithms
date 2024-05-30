package main

import (
	"bufio"
	"fmt"
	"io/ioutil"
	"log"
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

func read_txt_input(name string) (string, string) {
	TxtOpen, err := os.Open(name)
	if err != nil {
		log.Fatal(err)
	}
	defer TxtOpen.Close()

	r := bufio.NewScanner(TxtOpen)
	var kmer, text string
	if r.Scan() {
		text = r.Text()
	}
	if r.Scan() {
		kmer = r.Text()
	}
	return kmer, text
}

func read_txt_output(name string) string {
	TxtOpen, err := os.Open(name)
	if err != nil {
		log.Fatal(err)
	}
	defer TxtOpen.Close()
	r := bufio.NewScanner(TxtOpen)
	var num string
	if r.Scan() {
		num = r.Text()
	}
	return num

}

func main() {
	pwd, _ := os.Getwd()
	fmt.Println(pwd)
	directory := "test"
	tests, err := ioutil.ReadDir(filepath.Join(pwd, directory, "inputs"))
	if err != nil {
		log.Fatal(err)
	}
	for i := 1; i <= len(tests); i++ {
		kmer, text := read_txt_input(filepath.Join(pwd, directory, "inputs", "input_"+strconv.Itoa(i)+".txt"))
		num_expected := read_txt_output(filepath.Join(pwd, directory, "outputs", "output_"+strconv.Itoa(i)+".txt"))
		num_calculated := PatternCount(text, kmer)
		if num_expected == strconv.Itoa(num_calculated) {
			fmt.Println("Test #" + strconv.Itoa(i) + ": OK")
		} else {
			fmt.Println("Test #" + strconv.Itoa(i) + ": Fail")
		}

	}
}
