int main()
{
    string input = Stdio.stdin->read();
    int n, k, n_1;

    sscanf(input, "%d %d %d", n, k, n_1);

    int remainder = n % n_1;
    int r_1;

    if (remainder > 0)
        r_1 = (n + n_1 - remainder) / n_1;
    else
        r_1 = n / n_1;

    if (r_1 * r_1 <= k)
        write("YES\n");
    else
        write("NO\n");

    return 0;
}
