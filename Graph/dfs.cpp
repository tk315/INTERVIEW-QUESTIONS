void dfs(int S,int V,vector <int> adj[],int visit[],vector <int> &ans)
{
    ans.push_back(S);
    visit[S]=1;
    for(int i=0;i<adj[S].size();i++)
    {
        if(visit[adj[S][i]]==0)
        {
            dfs(adj[S][i],V,adj,visit,ans);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
    int visit[V]={0};
    vector <int> ans;
    dfs(0,V,adj,visit,ans);
    return ans;
}