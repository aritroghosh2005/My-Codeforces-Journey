<h2><a href="https://codeforces.com/contest/1728/problem/B" target="_blank" rel="noopener noreferrer">1728B — Best Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1728B](https://codeforces.com/contest/1728/problem/B) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Best Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's define the value of the permutation $$$p$$$ of $$$n$$$ integers $$$1$$$, $$$2$$$, ..., $$$n$$$ (a permutation is an array where each element from $$$1$$$ to $$$n$$$ occurs exactly once) as follows:</p><ul> <li> initially, an integer variable $$$x$$$ is equal to $$$0$$$; </li><li> if $$$x  \lt  p_1$$$, then add $$$p_1$$$ to $$$x$$$ (set $$$x = x + p_1$$$), otherwise assign $$$0$$$ to $$$x$$$; </li><li> if $$$x  \lt  p_2$$$, then add $$$p_2$$$ to $$$x$$$ (set $$$x = x + p_2$$$), otherwise assign $$$0$$$ to $$$x$$$; </li><li> ... </li><li> if $$$x  \lt  p_n$$$, then add $$$p_n$$$ to $$$x$$$ (set $$$x = x + p_n$$$), otherwise assign $$$0$$$ to $$$x$$$; </li><li> the value of the permutation is $$$x$$$ at the end of this process. </li></ul><p>For example, for $$$p = [4, 5, 1, 2, 3, 6]$$$, the value of $$$x$$$ changes as follows: $$$0, 4, 9, 0, 2, 5, 11$$$, so the value of the permutation is $$$11$$$.</p><p>You are given an integer $$$n$$$. Find a permutation $$$p$$$ of size $$$n$$$ with the maximum possible value among all permutations of size $$$n$$$. If there are several such permutations, you can print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 97$$$) — the number of test cases.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$4 \le n \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$n$$$ integers — the permutation $$$p$$$ of size $$$n$$$ with the maximum possible value among all permutations of size $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003258450819848312" id="id005650753676460529" class="input-output-copier">Copy</div></div><pre id="id003258450819848312"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009471164943437677" id="id00628737059590892" class="input-output-copier">Copy</div></div><pre id="id009471164943437677">2 1 3 4
1 2 3 4 5
4 5 1 2 3 6</pre></div></div></div>