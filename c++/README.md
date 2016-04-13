g++ primes.cc -o primes
g++ primes.cc -O3 -o primes

g++ primes.sqr.opt.cc -o primes.sqr.opt
g++ primes.sqr.opt.cc -O3 -o primes.sqr.opt

time ./primes
time ./primes.sqr.opt
