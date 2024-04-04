import os


def pattern_count(text: str, pattern: str) -> int:
    cnt = 0
    for i in range(len(text) - len(pattern) + 1):
        if text[i:i+len(pattern)] == pattern:
            cnt += 1
    return cnt


def pattern_one_line(text: str, pattern: str) -> int:
    return sum(1 for i in range(len(text) - len(pattern) + 1) if text[i:i + len(pattern)] == pattern)


def main():
    directory = './test/inputs/'
    number_test = len(os.listdir(directory))
    for i in range(number_test):
        name_input = directory + "input_"+str(i+1)+".txt"
        name_output = './test/outputs/' + 'output_' + str(i+1) + '.txt'
        f_input = open(name_input, "r")
        lines = f_input.readlines()
        strand, sequence = lines[0].strip(), lines[1].strip()
        count = pattern_one_line(strand, sequence)
        f_output = open(name_output, "r")
        lines = f_output.readlines()
        correct_count = int(lines[0])
        assert count == correct_count, "Correct count is " + str(correct_count)


if __name__ == "__main__":
    main()
