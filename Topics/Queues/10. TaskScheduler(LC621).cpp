// App 1 Heaps - O(n)
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
	int size = tasks.size();
	vector<int> counter(26);
	
	int maxCount = 0;
	int maxFrequency = 0;

	for (int i = 0; i < size; i++){
		counter[tasks[i] - 'A']++;

		int currentCount = counter[tasks[i] - 'A'];

		if (currentCount == maxCount) maxFrequency++;
		else if (maxCount < currentCount){
			maxCount = currentCount;
			maxFrequency = 1;
		}

	}

	int partCount = maxCount - 1;
	int partLength = n - (maxFrequency - 1);

	int emptySlots = partCount * partLength;

	int availableTasks = size - maxCount * maxFrequency;
	int idles = max(0, emptySlots - availableTasks);

	return size + idles;
        
    }
};
