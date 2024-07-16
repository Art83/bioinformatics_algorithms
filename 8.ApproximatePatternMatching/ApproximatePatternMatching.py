

def hamming_distance(p: str, q: str):
    return sum(1 for x, y in zip(p, q) if x != y)


def approximate_pattern_matching(pattern: str, text: str, d: int):
    indices = []
    for i in range(len(text) - len(pattern) + 1):
        k = hamming_distance(text[i:i+len(pattern)], pattern)
        if k <= d:
            indices.append(i)
    return indices


def main():
    genome = "CGCCCGAATCCAGAACGCATTCCCATATTTCGGGACCACTGGCCTCCACGGTACGGACGTCAATCAAAT"
    kmer = "ATTCTGGA"
    d = 3
    answer = approximate_pattern_matching(kmer, genome, d)
    assert answer == [6, 7, 26, 27]


if __name__ == '__main__':
    main()
