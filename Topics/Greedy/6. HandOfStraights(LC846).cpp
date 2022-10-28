// APp 1 O(n * log n)
bool isNStraightHand(vector<int> &hand, int groupSize)
{
    int n = hand.size();
    if (n % groupSize != 0)
        return false;

    map<int, int> res;
    for (int i = 0; i < n; i++)
        res[hand[i]]++;

    while (!res.empty())
    {
        int currentElement = res.begin()->first;

        for (int i = 0; i < groupSize; i++)
        {
            if (res[currentElement + i] == 0)
                return false;
            res[currentElement + i]--;
            if (res[currentElement + i] < 1)
                res.erase(currentElement + i);
        }
    }
    return true;
}
