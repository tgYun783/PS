import java.io.*;
import java.util.StringTokenizer;
public class Main {
	static final int INF = Integer.MAX_VALUE/2;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		// n = 도시의 수
		int n = Integer.parseInt(br.readLine());
		// m = 버스의 수
		int m = Integer.parseInt(br.readLine());
	
		int[][] adj = new int[n+1][n+1];
		int[][] dist = new int[n+1][n+1];	
	
		for(int i=0; i<m; i++)
		{
			StringTokenizer st = new StringTokenizer(br.readLine());
			int start = Integer.parseInt(st.nextToken());
			int arrive = Integer.parseInt(st.nextToken());
			int cost = Integer.parseInt(st.nextToken());
			if(adj[start][arrive] == 0 || cost < adj[start][arrive])
			adj[start][arrive] = cost;
		}
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				if(i == j)
					dist[i][j] = 0;
				else if(adj[i][j] != 0)
					dist[i][j] = adj[i][j];
				else
					dist[i][j] = INF;
		}
		// k = 경유하는 노드
		for(int k = 1; k<=n; k++)
			for(int i=1; i<=n; i++)
				for(int j=1; j<=n; j++)
					dist[i][j] = Math.min(dist[i][j], dist[i][k]+dist[k][j]);
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(dist[i][j] == INF)
					bw.write("0 ");
				else
					bw.write(Integer.toString(dist[i][j])+" ");
			}
			bw.newLine();
		}
		bw.flush();
	}
}
