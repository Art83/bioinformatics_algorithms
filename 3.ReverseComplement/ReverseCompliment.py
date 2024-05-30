def reverse_complement(pattern: str) -> str:
    """Calculate the reverse complement of a DNA pattern."""
    complement_dict = {'A': 'T', 'T': 'A', 'C': 'G', 'G': 'C'}
    complement_translation = str.maketrans(complement_dict)
    return pattern[::-1].translate(complement_translation)



text = "AAAACCCGGT"
print(reverse_complement(text))