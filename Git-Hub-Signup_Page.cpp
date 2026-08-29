<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sign up with GitHub</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif; }
    body { background-color: #0d1117; color: #c9d1d9; display: flex; flex-direction: column; justify-content: center; align-items: center; min-height: 100vh; padding: 20px; }
    .github-logo { fill: #f0f6fc; width: 48px; height: 48px; margin-bottom: 24px; }
    .card { background-color: #161b22; border: 1px solid #30363d; border-radius: 6px; padding: 24px; width: 100%; max-width: 340px; }
    h2 { font-size: 20px; font-weight: 300; text-align: center; margin-bottom: 20px; color: #f0f6fc; }
    .github-btn { display: flex; align-items: center; justify-content: center; gap: 8px; width: 100%; padding: 10px; background-color: #238636; border: 1px solid rgba(240,246,252,0.1); border-radius: 6px; color: #ffffff; font-size: 14px; font-weight: 600; cursor: pointer; transition: background-color 0.2s; }
    .github-btn:hover { background-color: #2ea043; }
    .github-btn svg { fill: #ffffff; width: 20px; height: 20px; }
    .footer { margin-top: 16px; border: 1px solid #30363d; border-radius: 6px; padding: 16px; width: 100%; max-width: 340px; text-align: center; font-size: 12px; color: #8b949e; }
    .footer a { color: #58a6ff; text-decoration: none; }
  </style>
</head>
<body>

  <svg class="github-logo" viewBox="0 0 16 16">
    <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.28.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path>
  </svg>

  <div class="card">
    <h2>Sign in to GitHub</h2>
    <button class="github-btn" onclick="alert('Redirecting to GitHub OAuth...')">
      <svg viewBox="0 0 16 16">
        <path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.28.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path>
      </svg>
      Continue with GitHub
    </button>
  </div>

  <div class="footer">
    By continuing, you agree to the <a href="#">Terms of Service</a> and <a href="#">Privacy Policy</a>.
  </div>

</body>
</html>