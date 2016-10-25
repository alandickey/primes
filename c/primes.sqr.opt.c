/* C program to compute the first 25000 prime numbers. */

#include <stdio.h>
#include <stdbool.h>

  int prime_count = 0;
  int primes[25000];

  int getPrimeCount() { return prime_count; }
  int getPrime(int i) { return primes[i]; }
  void addPrime(int i) { primes[prime_count++] = i; }

  bool isDivisibe(int i, int by) { return (i % by) == 0; }

  bool isPrimeDivisible(int candidate) {
    for (int i = 1; i < prime_count; ++i) {
      int current_prime = primes[i];
      if ( current_prime * current_prime > candidate ) return false;
      if ( isDivisibe( candidate, current_prime ) ) return true;
    }
    return false;
  }

int main() {
  int c = 1;
  while (getPrimeCount() < 25000) {
    if (! isPrimeDivisible(c)) {
      addPrime(c);
    }
    c++;
  }
  printf("%d\n", getPrime(getPrimeCount()-1));
}
