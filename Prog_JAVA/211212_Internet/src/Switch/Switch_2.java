package Switch;

import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Switch_2 {
	Socket          socket   = null;
    ServerSocket    server   = null;
    DataInputStream in       =  null;
 
    // constructor with port
    public Switch_2(int port)
    {
        // starts server and waits for a connection
        try
        {
            server = new ServerSocket(port);
            System.out.println("Server started");
            System.out.println("Waiting for a client ...");
    
            socket = server.accept();
            System.out.println("Client accepted");

            // takes input from the client socket
		    in = new DataInputStream(
		        new BufferedInputStream(socket.getInputStream()));
		
		    String line = "";

		    // reads message from client until "Over" is sent
		    while (!line.equals("Over"))
		    {
		        try
		        {
		            line = in.readUTF();
		            System.out.println(line);
		
		        }
		        catch(IOException i)
		        {
		            System.out.println(i);
		        }
		    }
		    System.out.println("Closing connection");
		
		    // close connection
		    socket.close();
		    in.close();
		}
		catch(IOException i)
		{
		    System.out.println(i);
		}
	}
    
    public static void main(String args[])
    {
    	Switch_2 switch6000 = new Switch_2(6000);
    }
}

