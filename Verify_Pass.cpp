<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Verification Code</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif; }
    body { background-color: #f0f2f5; display: flex; justify-content: center; align-items: center; min-height: 100vh; padding: 20px; }
    .card { background: #ffffff; padding: 32px; border-radius: 10px; box-shadow: 0 4px 12px rgba(0,0,0,0.08); width: 100%; max-width: 400px; text-align: center; }
    h2 { margin-bottom: 8px; font-size: 24px; color: #1a1a1a; }
    p { margin-bottom: 24px; font-size: 14px; color: #666; }
    .otp-inputs { display: flex; justify-content: space-between; margin-bottom: 24px; gap: 8px; }
    .otp-inputs input { width: 48px; height: 48px; text-align: center; font-size: 20px; font-weight: bold; border: 1px solid #ccc; border-radius: 6px; }
    .otp-inputs input:focus { outline: none; border-color: #0066cc; }
    .btn { width: 100%; padding: 12px; background-color: #0066cc; color: white; border: none; border-radius: 6px; font-size: 16px; font-weight: 600; cursor: pointer; }
    .btn:hover { background-color: #0052a3; }
    .resend { margin-top: 20px; font-size: 14px; color: #666; }
    .resend a { color: #0066cc; text-decoration: none; }
  </style>
</head>
<body>

  <div class="card">
    <h2>Enter Code</h2>
    <p>We sent a 6-digit verification code to your email.</p>
    <form action="reset-password.html">
      <div class="otp-inputs">
        <input type="text" maxlength="1" required oninput="moveFocus(this)">
        <input type="text" maxlength="1" required oninput="moveFocus(this)">
        <input type="text" maxlength="1" required oninput="moveFocus(this)">
        <input type="text" maxlength="1" required oninput="moveFocus(this)">
        <input type="text" maxlength="1" required oninput="moveFocus(this)">
        <input type="text" maxlength="1" required>
      </div>
      <button type="submit" class="btn">Verify Code</button>
    </form>
    <div class="resend">
      Didn't receive the code? <a href="#">Resend Code</a>
    </div>
  </div>

  <script>
    function moveFocus(element) {
      if (element.value.length === element.maxLength) {
        let next = element.nextElementSibling;
        if (next) next.focus();
      }
    }
  </script>

</body>
</html>