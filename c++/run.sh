#!/bin/bash

echo g++ primes.cc -o primes
g++ primes.cc -o primes
echo time primes
time ./primes
