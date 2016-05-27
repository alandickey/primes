## Primes - multi-language prime number algorithm optimization

This project is motivated by:

1. My desire to have a small, self contained project to learn [GIT][] version control and [GitHubMarkdown][] ( not to be confused with original [Markdown][], which I did ) documentation methodology.
2. To use the project to practice pushing changes to my local [GITLAB][] server and to my accounts at [GitHub][] and [GitLab][].
3. The Daniel Clifford presentation [Breaking the JavaScript Speed Limit with V8][] from 2012 Google IO.
4. My interest in [prime numbers][].
5. My interest in [programming languages][].
6. My interest in [code optimization][].

In _Breaking the JavaScript Speed Limit with V8_, Daniel Clifford shows how to optimize a prime number generator written in [Javascript][]
using knowledge of the underlying V8 implementation written in [C++][]. In his [slide presentation][], He shows examples of the generator written in javascript and C++,
then compares the execution speed of the javascript version running under V8 to that of the C++ version.

Clifford's prime number generator finds the 25,000th prime number by calculating the first 25,000 primes. The algorithm is stated on [slide 15][] and
the two implementations of the algorithm are presented on [slide 16][]. The initial execution results are on [slide 17][].

Clifford's implementations are the starting point for my Primes project. 

The initial structure of project is:

    $ tree git/primes
    git/primes
    ├── c++
    │   ├── primes.cc
    │   ├── README.md
    │   └── run.sh
    ├── ChangeLog
    ├── nodejs
    │   ├── primes.js
    │   ├── README.md
    │   └── run.sh
    ├── README.md
    └── run.sh


The _README.md_ files contain documentation notes for the individual language implementations. 
The top-most file is the note you are reading.
 
I used [nodejs][] instead of [V8][] to run my javascript implementation, since nodejs uses V8 as its javascript engine,
and nodejs, a useful server-side tool, is what I am using. My version of `nodejs/primes.js` is modified to use the `console.log` method instead
of `print`. The `run.sh` files are shell scripts to compile and time execution.

On my Intel core i5 running Ubuntu 14.04 amd64:

    $ cd git/primes
    $ ./run.sh
    /home/adickey/git/primes/c++
    g++ primes.cc -o primes
    time primes
    287107
    
    real    0m1.768s
    user    0m1.764s
    sys     0m0.000s
    /home/adickey/git/primes/nodejs
    time node primes.js
    287107
    
    real    0m9.886s
    user    0m9.932s
    sys     0m0.012s

These results are similar to [slide 17][].

My initial git setup was:

    $ cd git/primes
    $ git init
    $ git add ChangeLog README.md run.sh c++/primes.cc c++/README.md c++/run.md nodejs/primes.js nodejs/README.md nodejs/run.md

[GIT]: https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control
[GITLAB]: https://about.gitlab.com/
[GitHub]: https://github.com/alandickey
[GitLab]: https://gitlab.com/u/alandickey
[GitHubMarkdown]: https://guides.github.com/features/mastering-markdown/
[Markdown]: http://daringfireball.net/
[Breaking the JavaScript Speed Limit with V8]: https://developers.google.com/v8/videos#video0a
[slide presentation]: http://v8-io12.appspot.com/
[slide 15]: http://v8-io12.appspot.com/#15
[slide 16]: http://v8-io12.appspot.com/#16
[slide 17]: http://v8-io12.appspot.com/#17
[prime numbers]: https://en.wikipedia.org/wiki/Prime_number
[programming languages]: https://en.wikipedia.org/wiki/Programming_language
[code optimization]: http://c2.com/cgi/wiki?RulesOfOptimizationi
[C++]: http://en.cppreference.com/w/
[Javascript]: http://www.ecma-international.org/ecma-262/6.0/
[nodejs]: https://nodejs.org
[V8]: https://en.wikipedia.org/wiki/V8_(JavaScript_engine)
