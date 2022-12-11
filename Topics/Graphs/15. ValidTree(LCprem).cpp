// App 1 O(n)
bool hasCycle(vector<vector<int>> &adj, vector<bool> &visited, int parent, int child)
{
	if (visited[child])
		return true;

	visited[child] = true;
	for (int i = 0; i < adj[child].size(); i++)
	{
		int curr = adj[child][i];
		if (curr != parent && hasCycle(adj, visited, child, curr))
			return true;
	}
	return false;
}

bool validTree(int n, vector<vector<int>> &edges)
{
	vector<vector<int>> adj(n);

	for (int i = 0; i < edges.size(); i++)
	{
		vector<int> edge = edges[i];
		adj[edge[0]].push_back(edge[1]);
		adj[edge[1]].push_back(edge[0]);
	}

	vector<bool> visited(n);
	if (hasCycle(adj, visited, -1, 0))
		return false;

	for (int i = 0; i < visited.size(); i++)
	{
		if (!visited[i])
			return false;
	}

	return true;
}
