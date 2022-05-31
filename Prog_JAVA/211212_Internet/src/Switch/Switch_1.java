package Switch;
import java.net.*;
import java.io.*;
import java.nio.channels.*;

public class Switch_1 {
    DataInputStream in       =  null;
 
    // constructor with port
    public Switch_1(int port) throws IOException
    {
    	ServerSocketChannel serverSocketChannel = ServerSocketChannel.open();
        DataInputStream in       =  null;
    	
    	serverSocketChannel.socket().bind(new InetSocketAddress(5000));
    	// serverSocketChannel.socket().bind(new InetSocketAddress(5001));
    	
    	serverSocketChannel.configureBlocking(false);


    	while(true){
    	    SocketChannel socketChannel =
    	            serverSocketChannel.accept();
    	    
    	    in = new DataInputStream(
    		        new BufferedInputStream(socketChannel.);
    	    
    	    String line = "";
    	    
    	    if(socketChannel != null){
    	        //do something with socketChannel...
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
    	}
    }
    
    public static void main(String args[]) throws IOException
    {
        Switch_1 switch5000 = new Switch_1(5002);
    }
}
