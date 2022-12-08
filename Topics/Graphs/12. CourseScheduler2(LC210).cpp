// App 1 DFS O(v + e)
bool dfs(int course, unordered_map<int, vector<int>> &res, unordered_set<int> &visited, unordered_set<int> &cycle, vector<int> & result){

	// base cases
	if (cycle.find(course) != cycle.end()) return false;

	if (visited.find(course) != visited.end()) return true;
	cycle.insert(course);

	for (int i = 0; i < res[course].size(); i++){
		int nextCourse = res[course][i];
		if (!dfs(nextCourse, res, visited, cycle, result)) return false;
	}

	cycle.erase(course);
	visited.insert(course);
	result.push_back(course);
	return true;
}

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
	unordered_map<int, vector<int>> res;

	unordered_set<int> cycle;
	unordered_set<int> visited;

	for (int i = 0; i < prerequisites.size(); i++){
		res[prerequisites[i][0]].push_back(prerequisites[i][1]);
	}

	vector<int> result;

	for (int course = 0; course < numCourses; course++){
		if (!dfs(course, res, visited, cycle, result)) return {};
	}

	return result;

        
}
