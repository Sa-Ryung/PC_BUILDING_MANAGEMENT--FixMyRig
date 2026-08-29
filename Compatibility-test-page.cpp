<!DOCTYPE html>
<html>
<head>
<title>FixMyRig - Compatibility Test</title>
<style>
*{box-sizing:border-box}body{margin:0;background:#070b10;color:white;font:13px Arial;display:flex}
aside{width:170px;height:100vh;background:#0c1219;padding:15px;border-right:1px solid #26313b}
.logo{color:#00dfff;font-size:18px;margin-bottom:25px}
button{width:100%;padding:9px;margin:4px 0;background:#0d151d;color:#aaa;border:1px solid #26313b;border-radius:6px;cursor:pointer}
button:hover,.active{border-color:#00dfff;color:white}
main{flex:1;padding:25px 35px}.search{display:flex;gap:10px;max-width:600px;margin:20px auto}
input{flex:1;padding:12px;background:#111c26;border:1px solid #304454;color:white;border-radius:6px}
.search-btn{background:#00d9f5;color:#00151b;font-weight:bold;padding:12px 25px;border:none;border-radius:6px;cursor:pointer}
.results{max-width:700px;margin:25px auto}.card{background:#0b1118;border:1px solid #26313b;border-radius:8px;padding:15px;margin:10px 0}
.status{display:inline-block;padding:3px 12px;border-radius:12px;font-size:12px}
.compatible{background:#1a4a3a;color:#5dffb0}.warning{background:#4a3a1a;color:#ffd75d}
.incompatible{background:#4a1a1a;color:#ff6b6b}.filters{display:flex;gap:15px;justify-content:center;margin:15px 0}
.filters label{color:#9daab5;cursor:pointer}
</style>
</head>
<body>
<aside><div class="logo">▣ <b>FixMyRig</b></div>
<button>▦ Dashboard</button><button>□ My Builds</button>
<button>▣ Parts Finder</button><button>△ Help Desk</button>
<button class="active">☷ Compatibility</button>
<button>⚙ Settings</button><button>♟ Chatbot</button></aside>
<main>
<h2 style="text-align:center;color:#00dfff">Compatibility Test Page</h2>
<p style="text-align:center;color:#9daab5">How can we help you today?</p>
<div class="search"><input placeholder="Search for a part... e.g. RTX 4080"><button class="search-btn" onclick="runTest()">Test</button></div>
<div class="filters"><label><input type="checkbox" checked> NVIDIA</label><label><input type="checkbox" checked> AMD</label><label><input type="checkbox" checked> Intel</label></div>
<div class="results" id="results">
<div class="card"><b>GPU: NVIDIA RTX 4080</b> | CPU: Intel i9-13900K<br><span class="status compatible">✅ Compatible</span> <span style="color:#6a8fa0;font-size:12px">• BIOS v2.3</span></div>
<div class="card"><b>GPU: AMD RX 7900 XT</b> | CPU: AMD Ryzen 7 7800X<br><span class="status warning">⚠️ Check BIOS</span> <span style="color:#6a8fa0;font-size:12px">• Update recommended</span></div>
<div class="card"><b>GPU: NVIDIA GTX 1660</b> | CPU: Intel i5-12400<br><span class="status incompatible">❌ Not Compatible</span> <span style="color:#6a8fa0;font-size:12px">• PSU too weak</span></div>
<div class="card"><b>GPU: AMD RX 6800</b> | CPU: Intel i7-12700K<br><span class="status compatible">✅ Compatible</span> <span style="color:#6a8fa0;font-size:12px">• Full support</span></div>
</div>
<div style="text-align:center;margin-top:20px;color:#6a8fa0;font-size:12px">Help Center | FAQ | Contact</div>
</main>
<script>
function runTest(){let p=document.querySelector('input').value||'RTX 4090';let c=document.getElementById('results');
c.innerHTML=`<div class="card"><b>Testing: ${p}</b><br><span style="color:#00dfff">🔍 Scanning compatibility...</span></div>`;
setTimeout(()=>{let r=Math.random();let s=r>0.6?'✅ Compatible':'⚠️ Partial compatibility';
let cls=r>0.6?'compatible':'warning';let d=r>0.6?'• All systems go':'• Update drivers suggested';
c.innerHTML=`<div class="card"><b>Result for: ${p}</b><br><span class="status ${cls}">${s}</span> <span style="color:#6a8fa0;font-size:12px">${d}</span></div>
<div class="card"><b>GPU: NVIDIA RTX 4080</b> | CPU: Intel i9-13900K<br><span class="status compatible">✅ Compatible</span> <span style="color:#6a8fa0;font-size:12px">• BIOS v2.3</span></div>
<div class="card"><b>GPU: AMD RX 7900 XT</b> | CPU: AMD Ryzen 7 7800X<br><span class="status warning">⚠️ Check BIOS</span> <span style="color:#6a8fa0;font-size:12px">• Update recommended</span></div>
<div class="card"><b>GPU: NVIDIA GTX 1660</b> | CPU: Intel i5-12400<br><span class="status incompatible">❌ Not Compatible</span> <span style="color:#6a8fa0;font-size:12px">• PSU too weak</span></div>`;},800);}
</script>
</body>
</html>