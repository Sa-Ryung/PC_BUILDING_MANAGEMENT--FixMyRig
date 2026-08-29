<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sign up with Google</title>
  <style>
    * { box-sizing: border-box; margin: 0; padding: 0; font-family: "Roboto", Arial, sans-serif; }
    body { background-color: #ffffff; display: flex; justify-content: center; align-items: center; min-height: 100vh; padding: 20px; }
    .card { border: 1px solid #dadce0; border-radius: 8px; padding: 40px; width: 100%; max-width: 450px; text-align: center; }
    .google-logo { width: 75px; margin-bottom: 16px; }
    h2 { font-size: 24px; font-weight: 400; color: #202124; margin-bottom: 8px; }
    p { font-size: 16px; color: #5f6368; margin-bottom: 30px; }
    .google-btn { display: flex; align-items: center; justify-content: center; gap: 12px; width: 100%; padding: 10px; border: 1px solid #dadce0; border-radius: 4px; background: white; cursor: pointer; font-size: 14px; font-weight: 500; color: #3c4043; transition: background 0.2s; }
    .google-btn:hover { background-color: #f8f9fa; border-color: #d2e3fc; }
    .google-btn svg { width: 18px; height: 18px; }
    .divider { margin: 24px 0; border-bottom: 1px solid #dadce0; line-height: 0.1em; color: #5f6368; font-size: 12px; }
    .divider span { background: #fff; padding: 0 10px; }
    .footer { font-size: 12px; color: #5f6368; margin-top: 30px; line-height: 1.5; }
    .footer a { color: #1a73e8; text-decoration: none; }
  </style>
</head>
<body>

  <div class="card">
    <svg class="google-logo" viewBox="0 0 74 24">
      <path fill="#4285F4" d="M67.13 12.24c0-.79-.07-1.54-.19-2.24H52.5v4.25h8.21c-.35 1.9-1.42 3.52-3.03 4.6v3.82h4.9c2.87-2.64 4.55-6.53 4.55-10.43z"/>
      <path fill="#34A853" d="M52.5 27c4.12 0 7.57-1.36 10.1-3.69l-4.9-3.82c-1.36.91-3.1 1.45-5.2 1.45-4 0-7.39-2.7-8.6-6.33H38.7v3.94A14.98 14.98 0 0 0 52.5 27z"/>
      <path fill="#FBBC05" d="M43.9 14.61a8.96 8.96 0 0 1 0-5.22V5.45H38.7a14.99 14.99 0 0 0 0 13.1l5.2-3.94z"/>
      <path fill="#EA4335" d="M52.5 6.06c2.24 0 4.25.77 5.83 2.28l4.37-4.37C60.06 1.68 56.62 0 52.5 0A14.98 14.98 0 0 0 38.7 8.45l5.2 3.94c1.21-3.63 4.6-6.33 8.6-6.33z"/>
    </svg>
    <h2>Create your Account</h2>
    <p>to continue to AppName</p>

    <button class="google-btn" onclick="alert('Redirecting to Google OAuth...')">
      <svg viewBox="0 0 18 18">
        <path fill="#4285F4" d="M17.64 9.2c0-.637-.057-1.251-.164-1.84H9v3.481h4.844a4.14 4.14 0 0 1-1.796 2.716v2.259h2.908c1.702-1.567 2.684-3.875 2.684-6.616z"/>
        <path fill="#34A853" d="M9 18c2.43 0 4.467-.806 5.956-2.18l-2.908-2.259c-.806.54-1.837.86-3.048.86-2.344 0-4.328-1.584-5.036-3.711H.957v2.332A8.997 8.997 0 0 0 9 18z"/>
        <path fill="#FBBC05" d="M3.964 10.71A5.41 5.41 0 0 1 3.682 9c0-.593.102-1.17.282-1.71V4.958H.957A8.996 8.996 0 0 0 0 9c0 1.452.348 2.827.957 4.042l3.007-2.332z"/>
        <path fill="#EA4335" d="M9 3.58c1.321 0 2.508.454 3.44 1.345l2.582-2.58C13.463.891 11.426 0 9 0A8.997 8.997 0 0 0 .957 4.958L3.964 7.29C4.672 5.163 6.656 3.58 9 3.58z"/>
      </svg>
      Sign up with Google
    </button>

    <div class="footer">
      By continuing, you agree to Google's <a href="#">Terms of Service</a> and <a href="#">Privacy Policy</a>.
    </div>
  </div>

</body>
</html>