// App 1 O(n)
int doFind(vector<int> &parents, int n)
{
	int p = parents[n];
	while (p != parents[p])
	{
		parents[p] = parents[parents[p]];
		p = parents[p];
	}

	return p;
}

bool doUnion(vector<int> &parents, vector<int> &ranks, int n1, int n2)
{
	int p1 = doFind(parents, n1);
	int p2 = doFind(parents, n2);

	if (p1 == p2)
		return false;

	if (ranks[p1] > ranks[p2])
	{
		parents[p2] = p1;
		ranks[p1] += ranks[p2];
	}
	else
	{
		parents[p1] = p2;
		ranks[p2] += ranks[p1];
	}
	return true;
}

int countComponents(int n, vector<vector<int>> &edges)
{
	

	vector<int> parents;
	vector<int> ranks;
	

	for (int i = 0; i < n; i++)
	{
		parents.push_back(i);
		ranks.push_back(1);
	}

	int result = n;
	for (int i = 0; i < edges.size(); i++)
	{
		int n1 = edges[i][0];
		int n2 = edges[i][1];

		result -= doUnion(parents, ranks, n1, n2);
	}

	return result;
}
