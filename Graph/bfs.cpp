vector<int> bfs(int V,vector<int> adj[]) 
{        
    int visited[V]={0};
    
    queue <int> q;
    q.push(0);
    vector <int> ans;
    while(q.size()!=0)
    {
        int temp=q.front();
        q.pop();
        ans.push_back(temp);
        for(int i=0;i<adj[temp].size();i++)
        {
            if(visited[adj[temp][i]]==0)
            {
                q.push(adj[temp][i]);
                visited[adj[temp][i]]=1;   
            }
        }
    }
    return ans;
}