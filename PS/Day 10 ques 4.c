unsigned digitSum(unsigned n) {
  unsigned s = 0;
  while (n > 0) {
    s+= n % 10;
    n = n / 10;
  }
  return s;
}
int main()
{
    int best,bestSum,lim;
    unsigned sum, i, n = parse_int(ltrim(rtrim(readline())));
    best = n;
    bestSum = digitSum(n);
    lim =  sqrt(n);

    for (i = 1; i <= lim; i++) {
        if (n % i == 0) {
           sum = digitSum(i);
          if (sum > bestSum || sum == bestSum && i < best) {
            bestSum = sum;
            best = i;
        }
        sum = digitSum(n/i);
        if (sum > bestSum || sum == bestSum && n/i < best) {
            bestSum = sum;
            best = n/i;
        }
        }
    }

  printf("%u\n", best);
  return 0;
    return 0;
}
