gcc  -std=gnu99 -O3 -o primes primes.c
gcc  -std=gnu99 -O3 -o primes.sqr.opt primes.sqr.opt.c

time ./primes
time ./primes.sqr.opt
