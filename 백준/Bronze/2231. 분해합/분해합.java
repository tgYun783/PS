import java.util.*;
import java.io.*;
public class Main {
	
	
	public static void main(String[] args) throws IOException {
		
		var br = new BufferedReader(new InputStreamReader(System.in));
		var bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		var to = Integer.parseInt(br.readLine());
		
		for(int i=1; i<=1_000_000; i++)
		{
			int from = i;
			var st = Integer.toString(i).split("");
			
			for(var e : st)
			{
				from += Integer.parseInt(e);
			}
			
			if(from == to)
			{
				bw.write(Integer.toString(i));
				bw.flush();
				return;
			}
		}
		bw.write('0');
		bw.flush();
	}
}
