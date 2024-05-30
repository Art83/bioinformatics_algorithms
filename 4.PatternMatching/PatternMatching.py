def pattern_matching(pattern: str, genome: str):
    """Find all occurrences of a pattern in a genome."""
    ind = []
    for i in range(len(genome) - len(pattern) + 1):
        if pattern == genome[i:i+len(pattern)]:
            ind.append(i)
    return ind



pat = "ATAT"
genome = "GATATATGCATATACTT"


print(pattern_matching(pat, genome))