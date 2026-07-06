<h2><a href="https://codeforces.com/contest/1293/problem/B" target="_blank" rel="noopener noreferrer">1293B — JOE is on TV!</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | PyPy 3-64 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1293B](https://codeforces.com/contest/1293/problem/B) |

## Topics
`combinatorics` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. JOE is on TV!</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><a href="https://www.youtube.com/watch?v=P2ZVC9aoiKo"><span class="tex-font-style-it">3R2 - Standby for Action</span></a></div></div><p>Our dear Cafe's owner, JOE Miller, will soon take part in a new game TV-show "1 vs. $$$n$$$"!</p><p>The game goes in rounds, where in each round the host asks JOE and his opponents a common question. All participants failing to answer are eliminated. The show ends when only JOE remains (we assume that JOE never answers a question wrong!).</p><p>For each question JOE answers, if there are $$$s$$$ ($$$s  \gt  0$$$) opponents remaining and $$$t$$$ ($$$0 \le t \le s$$$) of them make a mistake on it, JOE receives $$$\displaystyle\frac{t}{s}$$$ dollars, and consequently there will be $$$s - t$$$ opponents left for the next question.</p><p>JOE wonders what is the maximum possible reward he can receive in the best possible scenario. Yet he has little time before show starts, so can you help him answering it instead?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and single line contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$), denoting the number of JOE's opponents in the show.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a number denoting the maximum prize (in dollars) JOE could have.</p><p>Your answer will be considered correct if it's absolute or relative error won't exceed $$$10^{-4}$$$. In other words, if your answer is $$$a$$$ and the jury answer is $$$b$$$, then it must hold that $$$\frac{|a - b|}{max(1, b)} \le 10^{-4}$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008600440736584843" id="id008283551024232261" class="input-output-copier">Copy</div></div><pre id="id008600440736584843">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00559162632701917" id="id005015746055655939" class="input-output-copier">Copy</div></div><pre id="id00559162632701917">1.000000000000
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00811363052228939" id="id0005887648544072144" class="input-output-copier">Copy</div></div><pre id="id00811363052228939">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006567004119601474" id="id0034116844497620635" class="input-output-copier">Copy</div></div><pre id="id006567004119601474">1.500000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second example, the best scenario would be: one contestant fails at the first question, the other fails at the next one. The total reward will be $$$\displaystyle \frac{1}{2} + \frac{1}{1} = 1.5$$$ dollars.</p></div>