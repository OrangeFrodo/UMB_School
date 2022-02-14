// Simple web server. Test that you can access it locally with telnet or web browser

import 'dart:io';

Future<void> main() async {
  final server = await HttpServer.bind('127.0.0.1', 8881); // localhost and TCP port 8881

  // Await response
  await for (final request in server) {
    request.response.write('Hello, world');
    await request.response.close();
  }
}