<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Forgot Password</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif; }
    body { background-color: #f0f2f5; display: flex; justify-content: center; align-items: center; min-height: 100vh; padding: 20px; }
    .card { background: #ffffff; padding: 32px; border-radius: 10px; box-shadow: 0 4px 12px rgba(0,0,0,0.08); width: 100%; max-width: 400px; }
    h2 { margin-bottom: 8px; font-size: 24px; color: #1a1a1a; text-align: center; }
    p { margin-bottom: 24px; font-size: 14px; color: #666; text-align: center; line-height: 1.4; }
    .form-group { margin-bottom: 20px; }
    label { display: block; margin-bottom: 6px; font-weight: 500; font-size: 14px; color: #333; }
    input { width: 100%; padding: 10px 12px; border: 1px solid #ccc; border-radius: 6px; font-size: 14px; }
    input:focus { outline: none; border-color: #0066cc; }
    .btn { width: 100%; padding: 12px; background-color: #0066cc; color: white; border: none; border-radius: 6px; font-size: 16px; font-weight: 600; cursor: pointer; }
    .btn:hover { background-color: #0052a3; }
    .footer { text-align: center; margin-top: 20px; font-size: 14px; }
    .footer a { color: #0066cc; text-decoration: none; }
  </style>
</head>
<body>

  <div class="card">
    <h2>Forgot Password?</h2>
    <p>Enter your account email address and we'll send you a verification code to reset your password.</p>
    <form action="verify.html">
      <div class="form-group">
        <label for="email">Email Address</label>
        <input type="email" id="email" placeholder="name@example.com" required>
      </div>
      <button type="submit" class="btn">Send Verification Code</button>
    </form>
    <div class="footer">
      <a href="login.html">&larr; Back to Login</a>
    </div>
  </div>

</body>
</html>