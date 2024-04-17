

def max_map(map:dict) -> int:
    return max(map.values())


def frequency_table(text:str, k:int) -> list:
    freq_map = dict()
    freq_kmers = []
    for i in range(len(text) - k + 1):
        pattern = text[i:i+k]
        if pattern in freq_map:
            freq_map[pattern] += 1
        else:
            freq_map[pattern] = 1
    mx_num = max_map(freq_map)
    for i, k in freq_map.items():
        if k == mx_num:
            freq_kmers.append(i)
    return freq_kmers



text = "ACGTTGCATGTCGCATGATGCATGAGAGCT"
n = 4
frequent_patterns = []
print(frequency_table(text, n))