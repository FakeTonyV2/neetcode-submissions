class KthLargest {
public:
    vector<int> arr;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        this->arr = nums;
        this->kth = k;
    }
    
    int add(int val) {
        arr.push_back(val);
        sort(arr.begin(), arr.end());
        return (arr[arr.size() - kth]);
    }
};
