<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Login & Sign Up</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f4f4f9;
      display: flex;
      justify-content: center;
      align-items: center;
      min-height: 100vh;
      margin: 0;
    }

    .container {
      background: #ffffff;
      padding: 30px;
      border-radius: 8px;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
      width: 100%;
      max-width: 360px;
    }

    h2 {
      margin-top: 0;
      text-align: center;
      color: #333;
    }

    .form-group {
      margin-bottom: 15px;
    }

    label {
      display: block;
      margin-bottom: 5px;
      color: #666;
    }

    input[type="text"],
    input[type="email"],
    input[type="password"] {
      width: 100%;
      padding: 10px;
      border: 1px solid #ccc;
      border-radius: 4px;
      box-sizing: border-box;
    }

    button {
      width: 100%;
      padding: 10px;
      background-color: #007bff;
      border: none;
      border-radius: 4px;
      color: white;
      font-size: 16px;
      cursor: pointer;
    }

    button:hover {
      background-color: #0056b3;
    }

    .toggle-link {
      text-align: center;
      margin-top: 15px;
      font-size: 14px;
    }

    .toggle-link a {
      color: #007bff;
      text-decoration: none;
    }

    .hidden {
      display: none;
    }
  </style>
</head>
<body>

  <div class="container">
    <form id="login-form">
      <h2>Login</h2>
      <div class="form-group">
        <label for="login-email">Email</label>
        <input type="email" id="login-email" required>
      </div>
      <div class="form-group">
        <label for="login-password">Password</label>
        <input type="password" id="login-password" required>
      </div>
      <button type="submit">Log In</button>
      <div class="toggle-link">
        Don't have an account? <a href="#" onclick="toggleForms()">Sign Up</a>
      </div>
    </form>

    <form id="signup-form" class="hidden">
      <h2>Sign Up</h2>
      <div class="form-group">
        <label for="signup-name">Full Name</label>
        <input type="text" id="signup-name" required>
      </div>
      <div class="form-group">
        <label for="signup-email">Email</