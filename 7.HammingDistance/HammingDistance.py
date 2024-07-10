

def HammingDistance(string1, string2):
    return sum(1 for x, y in zip(string1, string2) if x != y)


def main():
    string1 = "GATAGCAGCTTCTGAACTGGTTACCTGCCGTGAGTAAATTAAAATTTTATTGACTTAGGTCACTAAATACT"
    string2 = "AATAGCAGCTTCTCAACTGGTTACCTCGTATGAGTAAATTAGGTCATTATTGACTCAGGTCACTAACGTCT"
    print(HammingDistance(string1, string2))


if __name__ == "__main__":
    main()