<h2><a href="https://codeforces.com/contest/1651/problem/B" target="_blank" rel="noopener noreferrer">1651B — Prove Him Wrong</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1651B](https://codeforces.com/contest/1651/problem/B) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Prove Him Wrong</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently, your friend discovered one special operation on an integer array $$$a$$$: </p><ol> <li> Choose two indices $$$i$$$ and $$$j$$$ ($$$i \neq j$$$); </li><li> Set $$$a_i = a_j = |a_i - a_j|$$$. </li></ol><p>After playing with this operation for a while, he came to the next conclusion: </p><ul> <li> For every array $$$a$$$ of $$$n$$$ integers, where $$$1 \le a_i \le 10^9$$$, you can find a pair of indices $$$(i, j)$$$ such that the total sum of $$$a$$$ will <span class="tex-font-style-bf">decrease</span> after performing the operation. </li></ul><p>This statement sounds fishy to you, so you want to find a counterexample for a given integer $$$n$$$. Can you find such counterexample and prove him wrong?</p><p>In other words, find an array $$$a$$$ consisting of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) such that for all pairs of indices $$$(i, j)$$$ performing the operation won't decrease the total sum (it will increase or not change the sum).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first and only line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 1000$$$) — the length of array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no counterexample array $$$a$$$ of size $$$n$$$, print <span class="tex-font-style-tt">NO</span>.</p><p>Otherwise, print <span class="tex-font-style-tt">YES</span> followed by the array $$$a$$$ itself ($$$1 \le a_i \le 10^9$$$). If there are multiple counterexamples, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007891000415479438" id="id007491374042405482" class="input-output-copier">Copy</div></div><pre id="id007891000415479438"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">512</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004042303568547645" id="id0031212638792062675" class="input-output-copier">Copy</div></div><pre id="id0004042303568547645">YES
1 337
NO
YES
31 4 159
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the only possible pairs of indices are $$$(1, 2)$$$ and $$$(2, 1)$$$.</p><p>If you perform the operation on indices $$$(1, 2)$$$ (or $$$(2, 1)$$$), you'll get $$$a_1 = a_2 = |1 - 337| = 336$$$, or array $$$[336, 336]$$$. In both cases, the total sum increases, so this array $$$a$$$ is a counterexample.</p></div>