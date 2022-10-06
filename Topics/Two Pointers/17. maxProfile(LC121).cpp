// App 1 - Naive
int minValue = arr[0];
    int maxDiff = 0;

    for (int i = 0; i < arr.size(); i++){
        minValue = min(arr[i], minValue);
        maxDiff = max(arr[i] - minValue, maxDiff);
    }
    return maxDiff;
}

// App 2 -

    


