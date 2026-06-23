
<style>
@import url('https://fonts.googleapis.com/css2?family=Fira+Code:wght@400;600;700&family=Space+Grotesk:wght@400;700&display=swap');
*{box-sizing:border-box;margin:0;padding:0}
body{background:transparent}
.readme{font-family:'Fira Code',monospace;color:var(--color-text-primary);padding:0 0 2rem;overflow:hidden;position:relative}
@keyframes scanline{0%{transform:translateY(-100%)}100%{transform:translateY(100vh)}}
@keyframes pulse{0%,100%{opacity:.6}50%{opacity:1}}
@keyframes glitch1{0%,90%,100%{clip-path:none;transform:none}91%{clip-path:inset(20% 0 60% 0);transform:translateX(-4px)}93%{clip-path:inset(80% 0 5% 0);transform:translateX(4px)}95%{clip-path:none;transform:none}}
@keyframes glitch2{0%,88%,100%{clip-path:none;transform:none;opacity:0}89%{clip-path:inset(40% 0 40% 0);transform:translateX(6px);opacity:.5}91%{clip-path:inset(10% 0 70% 0);transform:translateX(-6px);opacity:.3}93%{opacity:0}}
@keyframes matrix{0%{transform:translateY(-100%)}100%{transform:translateY(400px)}}
@keyframes blink{0%,100%{opacity:1}50%{opacity:0}}
@keyframes typein{from{width:0}to{width:100%}}
@keyframes fadeup{from{opacity:0;transform:translateY(20px)}to{opacity:1;transform:translateY(0)}}
@keyframes spin{from{transform:rotate(0deg)}to{transform:rotate(360deg)}}
@keyframes float{0%,100%{transform:translateY(0)}50%{transform:translateY(-6px)}}
@keyframes borderrun{0%{background-position:0% 50%}50%{background-position:100% 50%}100%{background-position:0% 50%}}
@keyframes countup{from{opacity:0}to{opacity:1}}

.matrix-bg{position:absolute;top:0;left:0;width:100%;height:220px;overflow:hidden;pointer-events:none;opacity:.07;z-index:0}
.matrix-col{position:absolute;top:0;font-size:11px;color:#a78bfa;line-height:1.4;animation:matrix 3s linear infinite}

.hero{position:relative;z-index:1;text-align:center;padding:2rem 1rem 1.5rem;border-bottom:1px solid rgba(167,139,250,.2)}
.glitch-wrap{position:relative;display:inline-block}
.glitch-main{font-size:clamp(28px,6vw,52px);font-weight:700;color:#a78bfa;letter-spacing:-1px;font-family:'Space Grotesk',sans-serif;text-shadow:0 0 40px rgba(167,139,250,.4)}
.glitch-layer1{position:absolute;inset:0;font-size:clamp(28px,6vw,52px);font-weight:700;color:#7dd3fc;font-family:'Space Grotesk',sans-serif;animation:glitch1 5s infinite;pointer-events:none}
.glitch-layer2{position:absolute;inset:0;font-size:clamp(28px,6vw,52px);font-weight:700;color:#f472b6;font-family:'Space Grotesk',sans-serif;animation:glitch2 5s infinite;pointer-events:none}
.subtitle{font-size:13px;color:#7dd3fc;margin:.5rem 0 1rem;letter-spacing:3px;opacity:.8}
.cursor{animation:blink .8s infinite;color:#a78bfa}

.badge-row{display:flex;flex-wrap:wrap;gap:6px;justify-content:center;margin:.75rem 0}
.badge{display:inline-flex;align-items:center;gap:5px;padding:4px 10px;border-radius:4px;font-size:11px;font-weight:600;letter-spacing:.5px;border:1px solid}
.b-cpp{background:rgba(88,56,234,.15);border-color:rgba(88,56,234,.5);color:#a78bfa}
.b-dsa{background:rgba(20,184,166,.12);border-color:rgba(20,184,166,.4);color:#5eead4}
.b-stars{background:rgba(251,191,36,.1);border-color:rgba(251,191,36,.35);color:#fbbf24}
.b-mit{background:rgba(100,116,139,.1);border-color:rgba(100,116,139,.3);color:#94a3b8}
.b-intermediate{background:rgba(244,63,94,.1);border-color:rgba(244,63,94,.3);color:#fb7185}

.terminal{background:rgba(10,2,30,.85);border:1px solid rgba(167,139,250,.3);border-radius:8px;margin:1.5rem 1rem;overflow:hidden;font-family:'Fira Code',monospace}
.terminal-bar{display:flex;align-items:center;gap:6px;padding:8px 12px;background:rgba(167,139,250,.08);border-bottom:1px solid rgba(167,139,250,.2)}
.dot{width:10px;height:10px;border-radius:50%}
.d-red{background:#ff5f57}.d-yellow{background:#febc2e}.d-green{background:#28c840}
.terminal-title{font-size:11px;color:rgba(167,139,250,.5);margin-left:auto}
.terminal-body{padding:1rem 1.2rem;font-size:12px;line-height:1.9}
.p-green{color:#4ade80}.p-purple{color:#a78bfa}.p-blue{color:#7dd3fc}.p-yellow{color:#fbbf24}.p-muted{color:rgba(255,255,255,.35)}.p-white{color:rgba(255,255,255,.9)}.p-red{color:#f87171}

.section{padding:1.5rem 1rem;border-bottom:1px solid rgba(167,139,250,.1);animation:fadeup .5s ease both}
.section-label{font-size:10px;letter-spacing:3px;color:#a78bfa;opacity:.7;margin-bottom:.4rem}
.section-title{font-size:18px;font-weight:700;font-family:'Space Grotesk',sans-serif;color:var(--color-text-primary);margin-bottom:1rem}

.file-tree{background:rgba(167,139,250,.04);border:1px solid rgba(167,139,250,.15);border-radius:8px;padding:1rem 1.2rem;font-size:12px;line-height:2}
.ft-dir{color:#a78bfa;font-weight:600}
.ft-file{color:rgba(255,255,255,.65)}
.ft-arrow{color:rgba(167,139,250,.4);margin:0 4px}

.stats-grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(130px,1fr));gap:10px;margin:1rem 0}
.stat-card{background:rgba(167,139,250,.06);border:1px solid rgba(167,139,250,.2);border-radius:8px;padding:.75rem;text-align:center;transition:border-color .2s,transform .2s;cursor:default}
.stat-card:hover{border-color:rgba(167,139,250,.5);transform:translateY(-2px)}
.stat-num{font-size:26px;font-weight:700;color:#a78bfa;font-family:'Space Grotesk',sans-serif;animation:float 3s ease-in-out infinite}
.stat-num:nth-child(2){animation-delay:.5s}
.stat-label{font-size:10px;color:var(--color-text-secondary);letter-spacing:1px;margin-top:2px}

.topic-table{width:100%;border-collapse:collapse;font-size:12px;margin:1rem 0}
.topic-table th{text-align:left;padding:6px 10px;border-bottom:1px solid rgba(167,139,250,.3);color:#a78bfa;font-size:10px;letter-spacing:2px}
.topic-table td{padding:7px 10px;border-bottom:1px solid rgba(167,139,250,.08);color:var(--color-text-secondary);vertical-align:top}
.topic-table tr:hover td{background:rgba(167,139,250,.04);color:var(--color-text-primary)}
.topic-table td:first-child{color:#7dd3fc;font-weight:600;white-space:nowrap}
.tag{display:inline-block;background:rgba(167,139,250,.12);border:1px solid rgba(167,139,250,.25);border-radius:3px;padding:1px 6px;font-size:10px;color:#c4b5fd;margin:1px}

.quote-block{border-left:3px solid #a78bfa;padding:.6rem 1rem;margin:1rem 0;background:rgba(167,139,250,.05);border-radius:0 6px 6px 0}
.quote-block p{font-size:13px;font-style:italic;color:var(--color-text-secondary);line-height:1.6}
.quote-block cite{font-size:11px;color:rgba(167,139,250,.6);display:block;margin-top:.3rem}

.get-started{background:rgba(10,2,30,.9);border:1px solid rgba(167,139,250,.25);border-radius:8px;overflow:hidden;margin:1rem 0}
.gs-line{display:flex;align-items:center;gap:10px;padding:.5rem 1.2rem;font-size:12px}
.gs-line:not(:last-child){border-bottom:1px solid rgba(167,139,250,.08)}
.gs-num{color:rgba(167,139,250,.3);min-width:14px;text-align:right;font-size:11px;user-select:none}
.gs-cmd{color:#4ade80}.gs-comment{color:rgba(255,255,255,.25);font-size:11px}

.footer{text-align:center;padding:1.5rem 1rem .5rem;font-size:11px;color:rgba(167,139,250,.4);letter-spacing:2px}
.footer-heart{color:#f472b6;animation:pulse 1.5s infinite}
.ascii-art{font-size:8px;color:rgba(167,139,250,.25);line-height:1.2;white-space:pre;margin:.5rem 0;display:block}

.ran-border{border-radius:8px;padding:2px;background:linear-gradient(270deg,#a78bfa,#7dd3fc,#f472b6,#a78bfa);background-size:400% 400%;animation:borderrun 4s ease infinite;margin:1.5rem 1rem}
.ran-inner{background:var(--color-background-primary);border-radius:6px;padding:1rem 1.2rem;font-size:12px;color:var(--color-text-secondary);line-height:1.8}
</style>

<div class="readme">

<!-- Matrix rain bg -->
<div class="matrix-bg" id="matrix-bg"></div>

<!-- HERO -->
<div class="hero">
  <div class="subtitle">[ ALGORITHM &amp; DESIGN · C++ ]</div>
  <div class="glitch-wrap">
    <div class="glitch-main" id="typed-title">DSA_REPO<span class="cursor">_</span></div>
    <div class="glitch-layer1">DSA_REPO_</div>
    <div class="glitch-layer2">DSA_REPO_</div>
  </div>
  <div style="font-size:12px;color:rgba(167,139,250,.5);margin:.5rem 0 1rem;letter-spacing:1px">intermediate → advanced · no hand-holding · C++ only</div>

  <div class="badge-row">
    <span class="badge b-cpp">⚙ C++17</span>
    <span class="badge b-dsa">◈ DSA &amp; Algorithms</span>
    <span class="badge b-stars">★ Star this repo</span>
    <span class="badge b-intermediate">⚡ Intermediate→Advanced</span>
    <span class="badge b-mit">▣ Open Source</span>
  </div>
</div>

<!-- TERMINAL INTRO -->
<div style="padding:.5rem 0 0">
  <div class="terminal">
    <div class="terminal-bar">
      <div class="dot d-red"></div><div class="dot d-yellow"></div><div class="dot d-green"></div>
      <div class="terminal-title">antoniusjairus4 ~ README.md</div>
    </div>
    <div class="terminal-body">
      <div><span class="p-muted">~$</span> <span class="p-green">cat</span> <span class="p-blue">README.md</span></div>
      <div style="margin:.5rem 0"><span class="p-yellow">Hello.</span></div>
      <div class="p-white">This repo is a collection of <span class="p-purple">intermediate to advanced</span></div>
      <div class="p-white">DSA problems and algorithm implementations.</div>
      <div style="margin:.4rem 0"><span class="p-white">Written entirely in</span> <span class="p-red">C++</span><span class="p-white"> — the most goated language.</span></div>
      <div style="margin-top:.6rem"><span class="p-muted">~$</span> <span class="p-green">echo</span> <span class="p-yellow">"If you love C++, you're already home."</span></div>
      <div class="p-white" style="margin-top:.2rem">If you love C++, you're already home.</div>
      <div style="margin-top:.6rem"><span class="p-muted">~$</span> <span class="p-muted"># star ⭐ and fork 🍴 if you find it useful</span></div>
      <div style="margin-top:.3rem"><span class="p-muted">~$</span> <span class="p-green">█</span><span class="cursor">_</span></div>
    </div>
  </div>
</div>

<!-- STATS -->
<div class="section" style="animation-delay:.1s">
  <div class="section-label">// REPO STATS</div>
  <div class="stats-grid">
    <div class="stat-card"><div class="stat-num" id="s1">27</div><div class="stat-label">CPP FILES</div></div>
    <div class="stat-card"><div class="stat-num" id="s2">6</div><div class="stat-label">MODULES</div></div>
    <div class="stat-card"><div class="stat-num" id="s3">0</div><div class="stat-label">DEPENDENCIES</div></div>
    <div class="stat-card"><div class="stat-num" id="s4">∞</div><div class="stat-label">GRIND</div></div>
  </div>
</div>

<!-- FILE TREE -->
<div class="section" style="animation-delay:.2s">
  <div class="section-label">// STRUCTURE</div>
  <div class="section-title">What's Inside</div>
  <div class="file-tree">
    <div><span class="ft-dir">📁 Algorithm &amp; Design/</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 Basic Problems/</span>&nbsp;<span class="tag">recursion</span><span class="tag">primes</span><span class="tag">GCD</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-file">factorial_rec.cpp</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-file">fibonacci_rec.cpp &amp; fib_upto_n.cpp</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-file">gcd.cpp · nearest_prime.cpp · prime_nos_upto_n.cpp</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-file">indexes_char · longest_consecutive · prime_sum · sum_fib</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 Brute Force/</span>&nbsp;<span class="tag">convex hull</span><span class="tag">string</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-file">convex_hull.cpp</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-file">diff_of_any_2_that_is_the_min.cpp</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-file">finding_a_word_in_string.cpp</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-dir">📁 Rec &amp; Non Rec Analysis/</span>&nbsp;<span class="tag">binary search</span><span class="tag">hanoi</span></div>
    <div style="margin-top:.4rem"><span class="ft-dir">📁 DSA/</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 OOP/</span>&nbsp;<span class="tag">classes</span><span class="tag">encapsulation</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-file">address_swapper · student_access · tournament_manager</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 linked_lists/</span>&nbsp;<span class="tag">insert</span><span class="tag">reverse</span><span class="tag">min/max</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-file">creating · inp_until_0 · insertion · max · min · rev_printing</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 queues/</span>&nbsp;<span class="tag">queue.cpp</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">├─</span><span class="ft-dir">📁 stacks/</span>&nbsp;<span class="tag">bracket eval</span><span class="tag">infix-postfix</span></div>
    <div>&nbsp;&nbsp;&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-file">bracket_eval · bracket_eval_op · infix_postfix · stack_arrays · stack_ll</span></div>
    <div>&nbsp;&nbsp;<span class="ft-arrow">└─</span><span class="ft-dir">📁 Interview_Questions/</span>&nbsp;<span class="tag">placement prep</span></div>
  </div>
</div>

<!-- TOPICS -->
<div class="section" style="animation-delay:.3s">
  <div class="section-label">// TOPICS COVERED</div>
  <div class="section-title">The Curriculum</div>
  <table class="topic-table">
    <thead><tr><th>MODULE</th><th>WHAT YOU'LL FIND</th></tr></thead>
    <tbody>
      <tr><td>Recursion</td><td>Factorial, Fibonacci, GCD, Sum of digits, Tower of Hanoi, Sum of Fib series</td></tr>
      <tr><td>Brute Force</td><td>Convex Hull (gift wrapping), min-diff pairs, pattern matching in strings</td></tr>
      <tr><td>Searching</td><td>Binary search (recursive + iterative), index-based binary search variants</td></tr>
      <tr><td>OOP</td><td>Real-world class modelling — tournament manager, student records, address swapper</td></tr>
      <tr><td>Linked Lists</td><td>Build from scratch: insertion, reversal, min/max traversal, input until sentinel</td></tr>
      <tr><td>Stacks</td><td>Bracket evaluation, operator-based eval, infix → postfix conversion, array &amp; LL-backed</td></tr>
      <tr><td>Queues</td><td>Queue ADT implementation from ground up</td></tr>
      <tr><td>Interview Prep</td><td>Curated problems matching actual coding round patterns (rats food and more)</td></tr>
    </tbody>
  </table>
</div>

<!-- RAINBOW BORDER QUOTE -->
<div class="ran-border">
  <div class="ran-inner">
    <span style="color:#a78bfa;font-weight:700">Why C++ and not Python or Java?</span><br>
    Raw speed. Fine-grained memory control. Deterministic behavior. Pointer arithmetic when you need it.
    Java wraps everything in objects you didn't ask for. Python hands you a spoon when you need a scalpel.
    C++ trusts you. And if you're serious about DSA — <span style="color:#7dd3fc">that trust is the whole point.</span>
  </div>
</div>

<!-- GET STARTED -->
<div class="section" style="animation-delay:.4s">
  <div class="section-label">// GETTING STARTED</div>
  <div class="section-title">Clone &amp; Compile</div>
  <div class="get-started">
    <div class="gs-line"><span class="gs-num">1</span><span class="p-muted">~$</span><span class="gs-cmd">git clone https://github.com/antoniusjairus4/DSA.git</span></div>
    <div class="gs-line"><span class="gs-num">2</span><span class="p-muted">~$</span><span class="gs-cmd">cd DSA</span></div>
    <div class="gs-line"><span class="gs-num">3</span><span class="p-muted">~$</span><span class="gs-cmd">g++ -o out <span style="color:#fbbf24">&lt;filename&gt;</span>.cpp &amp;&amp; ./out</span></div>
    <div class="gs-line"><span class="gs-num">4</span><span class="p-muted">#</span><span class="gs-comment">no setup. no npm install. no venv. just a compiler.</span></div>
  </div>
</div>

<!-- QUOTE -->
<div class="section" style="animation-delay:.5s">
  <div class="quote-block">
    <p>"The only way to learn a new programming language is by writing programs in it. In C++, you also learn how computers actually work."</p>
    <cite>— Bjarne Stroustrup, father of C++</cite>
  </div>
</div>

<!-- FOOTER -->
<div class="footer">
  <span class="ascii-art">
  ██████╗ ███████╗ █████╗ 
  ██╔══██╗██╔════╝██╔══██╗
  ██║  ██║███████╗███████║
  ██║  ██║╚════██║██╔══██║
  ██████╔╝███████║██║  ██║
  ╚═════╝ ╚══════╝╚═╝  ╚═╝</span>
  <div>BUILT WITH <span class="footer-heart">♥</span> &amp; OBSESSION · MORE PROBLEMS INCOMING</div>
  <div style="margin-top:.4rem">
    <a href="https://github.com/antoniusjairus4" style="color:rgba(167,139,250,.5);text-decoration:none;font-size:11px;letter-spacing:1px">github.com/antoniusjairus4</a>
  </div>
</div>

</div>

<script>
const cols = 12;
const chars = "01アイウエオカキクケコサシスセソタチツテトナニヌネノ∑∫√∂∇ABCDEF";
const bg = document.getElementById('matrix-bg');
if(bg){
  for(let i=0;i<cols;i++){
    const el = document.createElement('div');
    el.className = 'matrix-col';
    el.style.left = (i*(100/cols))+'%';
    el.style.animationDuration = (2+Math.random()*3)+'s';
    el.style.animationDelay = (-Math.random()*3)+'s';
    let str = '';
    for(let j=0;j<20;j++) str += chars[Math.floor(Math.random()*chars.length)]+'<br>';
    el.innerHTML = str;
    bg.appendChild(el);
  }
}

const floats = document.querySelectorAll('.stat-num');
floats.forEach((el,i)=>{el.style.animationDelay=(i*0.4)+'s'});
</script>
