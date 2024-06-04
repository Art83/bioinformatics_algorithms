def freq_map(text, k):
    freq_map = dict()
    for i in range(len(text) - k + 1):
        pattern = text[i:i+k]
        if pattern in freq_map:
            freq_map[pattern] += 1
        else:
            freq_map[pattern] = 1
    return freq_map


def find_clumps(genome: str, k: int, l: int, t: int):
    """Find patterns forming clumps in a genome."""
    patterns = []
    for i in range(len(genome) - l + 1):
        FreqMap = freq_map(genome[i:i+l],k)
        for item, value in FreqMap.items():
            if value >= t:
                patterns.append(item)
    return list(set(patterns))


genome = "CGGACTCGACAGATGTGAAGAACGACAATGTGAAGACTCGACACGACAGAGTGAAGAGAAGAGGAAACATTGTAA"
L = 50
k = 5
t = 4

print(find_clumps(genome, k, L, t))