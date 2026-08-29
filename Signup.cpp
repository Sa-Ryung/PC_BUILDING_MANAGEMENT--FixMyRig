<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Create Account</title>
  <style>
    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
      font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif;
    }

    body {
      background-color: #f0f2f5;
      display: flex;
      justify-content: center;
      align-items: center;
      min-height: 100vh;
      padding: 20px;
    }

    .signup-card {
      background: #ffffff;
      padding: 32px;
      border-radius: 10px;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.08);
      width: 100%;
      max-width: 400px;
    }

    .signup-card h2 {
      margin-bottom: 8px;
      font-size: 24px;
      color: #1a1a1a;
      text-align: center;
    }

    .signup-card p {
      margin-bottom: 24px;
      font-size: 14px;
      color: #666666;
      text-align: center;
    }

    .form-group {
      margin-bottom: 16px;
    }

    .form-group label {
      display: block;
      margin-bottom: 6px;
      font-weight: 500;
      font-size: 14px;
      color: #333333;
    }

    .form-group input {
      width: 100%;
      padding: 10px 12px;
      border: 1px solid #cccccc;
      border-radius: 6px;
      font-size: 14px;
      transition: border-color 0.2s;
    }

    .form-group input:focus {
      outline: none;
      border-color: #0066cc;
    }

    .btn-submit {
      width: 100%;
      padding: 12px;
      background-color: #0066cc;
      color: #ffffff;
      border: none;
      border-radius: 6px;
      font-size: 16px;
      font-weight: 600;
      cursor: pointer;
      margin-top: 8px;
      transition: background-color 0.2s;
    }

    .btn-submit:hover {
      background-color: #0052a3;
    }

    .footer-text {
      text-align: center;
      margin-top: 20px;
      font-size: 14px;
      color: #666666;
    }

    .footer-text a {
      color: #0066cc;
      text-decoration: none;
    }

    .footer-text a:hover {
      text-decoration: underline;
    }

    .error-msg {
      color: #d93025;
      font-size: 12px;
      margin-top: 4px;
      display: none;
    }
  </style>
</head>
<body>

  <div class="signup-card">
    <h2>Create an Account</h2>
    <p>Sign up to get started</p>

    <form id="signupForm" onsubmit="return validateForm(event)">
      <div class="form-group">
        <label for="fullname">Full Name</label>
        <input type="text" id="fullname" placeholder="Jane Doe" required>
      </div>

      <div class="form-group">
        <label for="email">Email Address</label>
        <input type="email" id="email" placeholder="name@example.com" required>
      </div>

      <div class="form-group">
        <label for="password">Password</label>
        <input type="password" id="password" placeholder="At least 8 characters" required>
      </div>

      <div class="form-group">
        <label for="confirmPassword">Confirm Password</label>
        <input type="password" id="confirmPassword" placeholder="Repeat password" required>
        <span id="errorMsg" class="error-msg">Passwords do not match.</span>
      </div>

      <button type="submit" class="btn-submit">Sign Up</button>

      <div class="footer-text">
        Already have an account? <a href="#">Log in</a>
      </div>
    </form>
  </div>

  <script>
    function validateForm(event) {
      const password = document.getElementById('password').value;
      const confirmPassword = document.getElementById('confirmPassword').value;
      const errorMsg = document.getElementById('errorMsg');

      if (password !== confirmPassword) {
        event.preventDefault();
        errorMsg.style.display = 'block';
        return false;
      }

      errorMsg.style.display = 'none';
      alert('Account created successfully!');
      return true;
    }
  </script>

</body>
</html>