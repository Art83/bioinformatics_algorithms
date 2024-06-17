import time

def read_sequence(path):
    f_input = open(path, "r")
    lines = f_input.readlines()
    sequence = lines[0].strip()
    return sequence


def minimum_skew_1(genome: str):
    """Find positions in a genome where the skew diagram attains a minimum."""
    skew = [0]
    for i in range(1, len(genome)+1):
        if genome[i-1] == "C":
            skew.append(skew[i-1]-1)
        elif genome[i-1] == "G":
            skew.append(skew[i-1]+1)
        else:
            skew.append(skew[i-1])
    return [i for i, x in enumerate(skew) if x == min(skew)]


def minimum_skew_2(genome: str):
    """Find positions in a genome where the skew diagram attains a minimum."""
    skew = [0]
    mn_indices = []
    mn = 0
    for i in range(1, len(genome) + 1):
        if genome[i - 1] == "C":
            skew.append(skew[i - 1] - 1)
        elif genome[i - 1] == "G":
            skew.append(skew[i - 1] + 1)
        else:
            skew.append(skew[i - 1])

        if skew[-1] < mn:
            mn = skew[-1]
            mn_indices = [i]
        elif skew[-1] == mn:
            mn_indices.append(i)
    return mn_indices

def main():
    path = "./inputs/input_6.txt"
    seq = read_sequence(path)
    start = time.time()
    print(minimum_skew_1(seq))
    end = time.time()
    time1 = end - start
    print("First function: %4f" % time1)
    start = time.time()
    print(minimum_skew_2(seq))
    end = time.time()
    time2 = end - start
    print("Second function: %4f" % time2)


if __name__ == "__main__":
    main()
