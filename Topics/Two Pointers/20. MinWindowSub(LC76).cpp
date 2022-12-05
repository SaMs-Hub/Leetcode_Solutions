// App 1 O(m + n) maps

string minWindow(string s, string t)
{
	int total = s.size();
	int counter = t.size();

	unordered_map<char, int> res;

	for (int i = 0; i < counter; i++)
		res[t[i]]++;

	int i = 0;
	int j = 0;

	int minStart = 0;
	int minLength = INT_MAX;

	while (j < total)
	{
		if (res[s[j]] > 0)
			counter--;
		res[s[j]]--;

		j++;

		while (counter == 0)
		{
			if (j - i < minLength)
			{
				minStart = i;
				minLength = j - i;
			}

			res[s[i]]++;

			if (res[s[i]] > 0)
				counter++;

			i++;
		}
	}
