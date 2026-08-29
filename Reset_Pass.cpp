<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Reset Password</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif; }
    body { background-color: #f0f2f5; display: flex; justify-content: center; align-items: center; min-height: 100vh; padding: 20px; }
    .card { background: #ffffff; padding: 32px; border-radius: 10px; box-shadow: 0 4px 12px rgba(0,0,0,0.08); width: 100%; max-width: 400px; }
    h2 { margin-bottom: 8px; font-size: 24px; color: #1a1a1a; text-align: center; }
    p { margin-bottom: 24px; font-size: 14px; color: #666; text-align: center; }
    .form-group { margin-bottom: 16px; }
    label { display: block; margin-bottom: 6px; font-weight: 500; font-size: 14px; color: #333; }
    input { width: 100%; padding: 10px 12px; border: 1px solid #ccc; border-radius: 6px; font-size: 14px; }
    input:focus { outline: none; border-color: #0066cc; }
    .btn { width: 100%; padding: 12px; background-color: #0066cc; color: white; border: none; border-radius: 6px; font-size: 16px; font-weight: 600; cursor: pointer; margin-top: 8px; }
    .btn:hover { background-color: #0052a3; }
    .error-msg { color: #d93025; font-size: 12px; margin-top: 4px; display: none; }
  </style>
</head>
<body>

  <div class="card">
    <h2>Reset Password</h2>
    <p>Please enter your new password below.</p>
    <form id="resetForm" onsubmit="return validatePasswords(event)">
      <div class="form-group">
        <label for="newPassword">New Password</label>
        <input type="password" id="newPassword" placeholder="At least 8 characters" required>
      </div>
      <div class="form-group">
        <label for="confirmPassword">Confirm New Password</label>
        <input type="password" id="confirmPassword" placeholder="Re-enter new password" required>
        <span id="errorMsg" class="error-msg">Passwords do not match.</span>
      </div>
      <button type="submit" class="btn">Update Password</button>
    </form>
  </div>

  <script>
    function validatePasswords(event) {
      const pass = document.getElementById('newPassword').value;
      const confirm = document.getElementById('confirmPassword').value;
      const error = document.getElementById('errorMsg');

      if (pass !== confirm) {
        event.preventDefault();
        error.style.display = 'block';
        return false;
      }
      error.style.display = 'none';
      alert('Password successfully reset!');
      return true;
    }
  </script>

</body>
</html>