package Pc;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.net.UnknownHostException;

public class Pc_2 {
	
	@SuppressWarnings("deprecation")
	public Pc_2(String address, int port) {
		
		Socket socket			= null;
		DataInputStream  input	= null;
		DataOutputStream out	= null;
		
		try {
			socket = new Socket(address, port);
			input = new DataInputStream(System.in);
			out = new DataOutputStream(socket.getOutputStream());
			
		}
		catch (UnknownHostException u) {
			System.out.print(u);
		}
		catch (IOException i) {
			System.out.print(i);
		}
		
		String line = "";
		
		while (!line.equals("Over")) {
			try {
				line = input.readLine();
				out.writeUTF(line);
			}
			catch(IOException i)
			{
				System.out.println(i);
			}
		}
		
		try {
			input.close();
			out.close();
			socket.close();
		}
		catch (IOException i)
		{
			System.out.print(i);
		}
		
	}
	
    public static void main(String args[])
    {
        Pc_2 client = new Pc_2("127.0.0.1", 5001);
    }
}
