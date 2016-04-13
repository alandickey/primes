== Primes - multi-language prime number algorithm optimization

This project is motivated by:

1. My desire to have a small, self contained project to learn [GIT][] version control and [Markdown][] documentation methodology.
2. To use the project to practice pushing changes to my local [GITLAB][] server and to my accounts at [GitHub][] and [GitLab][].
3. The Daniel Clifford presentation [Breaking the JavaScript Speed Limit with V8][] from 2012 Google IO.
4. My interest in [prime numbers][].
5. My interest in [programming languages][].
6. My interest in [code optimization][].

In * Breaking the JavaScript Speed Limit with V8i, * Daniel Clifford shows how to optimize a prime number generator written in [Javascript][]
using knowledge of the underlying V8 implementation written in [C++][]. In his [slide presetation][], He shows examples of the generator written in javascript and C++,
then compares the execution speed of the javascript version running under V8 to the C++ version.

Clifford's prime number generator finds the 25,000th prime number by calculating the first 25,000 primes. The algorithm is stated on [slide 15][] and
the two implementations of the algorithm are presented on [slide 16][]. The initial execution results are on [slide 17][].

Clifford's implementations are the starting point for the Primes project. 

The initial structure of project is:

    $ tree git/primes
    git/primes
    ├── c++
    │   ├── primes.cc
    │   └── README.md
    ├── nodejs
    │   ├── primes.js
    │   └── README.md
    └── README.md

The * README.md * files contain documentation notes for the individual language implementations. 
The top-most file is the note you are reading.
 
I used [nodejs][] instead of * V8 * to run my javascript implementation, since nodejs uses V8 as the javascript engine,
and nodejs is a useful server-side tool. My version of nodejs/primes.js is modified to use the console.log method instead
of print.

My initial git setup was:

    $ cd git/primes
    $ git init
    $ git add README.md c++/primes.cc c++/README.md nodejs/primes.js nodejs/README.md


[GIT]: https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control
[GITLAB]: https://about.gitlab.com/
[GitHub]: https://github.com/alandickey
[GitLab]: https://gitlab.com/u/alandickey
[Markdown]: http://daringfireball.net/
[Breaking the JavaScript Speed Limit with V8]: https://developers.google.com/v8/videos#video0a
[slide presentation]: http://v8-io12.appspot.com/
[slide15]: http://v8-io12.appspot.com/#15
[slide16]: http://v8-io12.appspot.com/#16
[slide17]: http://v8-io12.appspot.com/#17
[prime numbers]: https://en.wikipedia.org/wiki/Prime_number
[programming languages]: https://en.wikipedia.org/wiki/Programming_language
[code optimization]: http://c2.com/cgi/wiki?RulesOfOptimizationi
[C++]: http://en.cppreference.com/w/
[Javascript]: http://www.ecma-international.org/ecma-262/6.0/
[nodejs]: https://nodejs.org

