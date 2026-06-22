int hammingWeight(int n) {
    char str[100];
    int counter = 0;

    while (n > 0) {
        int rem = n % 2;
        str[counter++] = rem;
        n = n / 2;
    }

    int onebits = 0;
    for (int i = 0; i < counter; i++) {
        if (str[i] == 1)
            onebits++;
    }
    return onebits;
}