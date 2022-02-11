# Maths

## Basic Number Theory

### Primality Test

```
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

```

### Sieve of Eratosthenes

At the beginning we write down all numbers between 2 and n. We mark all proper multiples of 2 as composite. A proper multiple of a number x, is a number greater than x and divisble by x. Then We find then next number that is not marked composite, and after finding that we mark all its multpiles compiste too. The process contine until we processed all numbers in row.

```
int n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
``` 

### Eculidean algorithm for GCD

```
gcd(a, b) = {a, if b=0;<br />
	     gcd(b,a % b), otherwise
```

```
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
```

## Modulo Arithmetic

Modulo arithmetic is used when calculation go too bigger and so to get correct answer, better to use them in intermediate step.

```
(a+b)%m = ((a%m)+(b%m))%m
(a-b)%m = ((a%m)+(b%m)+m)%m
(a*b)%m = ((a%m)*(b%m))%m
(a/b)%m = ((a%m)*(b^-1))%m // b^-1 = (b^m-2)%m
```
