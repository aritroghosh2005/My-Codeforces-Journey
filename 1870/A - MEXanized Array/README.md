<h2><a href="https://codeforces.com/contest/1870/problem/A" target="_blank" rel="noopener noreferrer">1870A — MEXanized Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1870A](https://codeforces.com/contest/1870/problem/A) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. MEXanized Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three non-negative integers $$$n$$$, $$$k$$$, and $$$x$$$. Find the maximum possible sum of elements in an array consisting of non-negative integers, which has $$$n$$$ elements, its MEX is equal to $$$k$$$, and all its elements do not exceed $$$x$$$. If such an array does not exist, output $$$-1$$$.</p><p>The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:</p><ul> <li> The MEX of $$$[2,2,1]$$$ is $$$0$$$, because $$$0$$$ does not belong to the array. </li><li> The MEX of $$$[3,1,0,1]$$$ is $$$2$$$, because $$$0$$$ and $$$1$$$ belong to the array, but $$$2$$$ does not. </li><li> The MEX of $$$[0,3,1,2]$$$ is $$$4$$$, because $$$0$$$, $$$1$$$, $$$2$$$ and $$$3$$$ belong to the array, but $$$4$$$ does not. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases. Then follows the description of the test cases.</p><p>The only line of each test case contains three integers $$$n$$$, $$$k$$$, and $$$x$$$ ($$$1 \leq n, k, x \leq 200$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single number — the maximum sum of elements in a valid array, or $$$-1$$$, if such an array does not exist.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003783551498248683" id="id002767312248782092" class="input-output-copier">Copy</div></div><pre id="id0003783551498248683"><div class="test-example-line test-example-line-even test-example-line-0">9</div><div class="test-example-line test-example-line-odd test-example-line-1">5 3 3</div><div class="test-example-line test-example-line-even test-example-line-2">4 7 5</div><div class="test-example-line test-example-line-odd test-example-line-3">4 2 28</div><div class="test-example-line test-example-line-even test-example-line-4">12 10 6</div><div class="test-example-line test-example-line-odd test-example-line-5">57 51 122</div><div class="test-example-line test-example-line-even test-example-line-6">200 1 200</div><div class="test-example-line test-example-line-odd test-example-line-7">2 2 1</div><div class="test-example-line test-example-line-even test-example-line-8">3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-9">4 7 10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005580325389820316" id="id005047070257188987" class="input-output-copier">Copy</div></div><pre id="id005580325389820316">7
-1
57
-1
2007
39800
1
2
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the maximum sum is $$$7$$$, and one of the valid arrays is $$$[0, 1, 2, 2, 2]$$$.</p><p>In the second test case, there are no valid arrays of length $$$n$$$.</p><p>In the third test case, the maximum sum is $$$57$$$, and one of the valid arrays is $$$[0, 1, 28, 28]$$$.</p></div>