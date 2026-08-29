User Dashboard

<!DOCTYPE html>
<html>
<head>
<title>FixMyRig - Dashboard</title>
<style>
*{box-sizing:border-box}body{margin:0;background:#070b10;color:white;font:13px Arial;display:flex}
aside{width:170px;height:100vh;background:#0c1219;padding:15px;border-right:1px solid #26313b}
.logo{color:#00dfff;font-size:18px;margin-bottom:25px}
button{width:100%;padding:9px;margin:4px 0;background:#0d151d;color:#aaa;border:1px solid #26313b;border-radius:6px;cursor:pointer}
button:hover,.active{border-color:#00dfff;color:white}
main{flex:1;padding:20px 30px}.top{display:flex;justify-content:space-between}
.hero,.card,.panel{background:#0b1118;border:1px solid #26313b;border-radius:8px;padding:15px}
.hero{margin-top:18px;border-color:#007b94}.cyan{color:#00dfff}.green{color:#00ed86}
.cards{display:grid;grid-template-columns:repeat(4,1fr);gap:10px;margin-top:12px}
.bottom{display:grid;grid-template-columns:1fr 1fr;gap:12px;margin-top:12px}
.item{padding:9px;border-top:1px solid #26313b;margin-top:5px}
</style>
</head>
<body>

<aside>
<div class="logo">▣ <b>FixMyRig</b></div>
<button class="active" onclick="page('Dashboard')">▦ Dashboard</button>
<button onclick="page('My Builds')">□ My Builds</button>
<button onclick="page('Parts Finder')">▣ Parts Finder</button>
<button onclick="page('Community')">▱ Community</button>
<button onclick="page('Help Desk')">△ Help Desk</button>
<button onclick="page('Compatibility')">☷ Compatibility</button>
<button onclick="page('Settings')">⚙ Settings</button>
<button onclick="page('Chatbot')">♟ Chatbot</button>
</aside>

<main>
<div class="top"><div><h2>Build Your Dream PC</h2>
<small>Design it. Check compatibility. Track prices.</small></div>
<input placeholder="Search parts, forums..."></div>

<div class="hero">
<span class="green">All Compatible ✓</span>
<h1>Project Nighthawk - RTX 4080 Build</h1>
<p>Intel Core i7-14700K, ASUS ROG Z790, 850W PSU and RGB cooling.</p>
<button onclick="build()">Continue Designing Build</button>
<h2 class="cyan">$2,847</h2><b class="green">642W / 850W</b>
</div>

<div class="cards">
<div class="card">SAVED BUILDS<h2>7</h2></div>
<div class="card">PARTS TRACKED<h2>23</h2></div>
<div class="card">FORUM POSTS<h2>12</h2></div>
<div class="card">PRICE ALERTS<h2>5</h2></div>
</div>

<div class="bottom">
<div class="panel"><h3>Price Drops</h3>
<div class="item">ASUS RTX 4070 Ti SUPER - $579</div>
<div class="item">Corsair 32GB DDR5 - $99</div></div>
<div class="panel"><h3>Community Activity</h3>
<div class="item">GPU not detected after BIOS update</div>
<div class="item">Windows Blue Screen after RAM OC</div></div>
</div>
</main>

<script>
function page(x){alert("Opening "+x);}
function build(){alert("Opening Build Designer");}
</script>
</body>
</html>