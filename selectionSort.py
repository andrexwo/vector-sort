def selectionSort (v, n):
    for i in range (0, n-1):
        indexMIn = i
        for j in range(i+1, n):
            if v[indexMIn] > v[j]:
                indexMIn = j

        if indexMIn != i:
            aux = v[i]
            v[i] = v[indexMIn]
            v[indexMIn] = aux

vetor = [8, 6, 4, 9, 2, 3, 3, 1, 7, 4, 5]

for i in range(0, len(vetor)):
    print(vetor[i] + ", ")
