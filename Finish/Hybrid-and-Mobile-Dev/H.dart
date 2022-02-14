// Simple HTTP client and JSON parser

import 'dart:io';
import 'dart:convert';

void main() async {

  // Request from HttpClient
  var request = await HttpClient()
      .getUrl(Uri.parse('https://tl.oamk.fi/whmp/dl/example.json'));
  request.persistentConnection = false;
  request.followRedirects = true;
  var response = await request.close();

  // Get user[name] + user[email]
  await for (var contents in response.transform(Utf8Decoder())) {
    Map<String, dynamic> user = jsonDecode(contents);
    print('Name is: ${user['name']}');
    print('Email address is: ${user['email']}');
  }
}