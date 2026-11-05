class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
          int w = d + 1;  
        auto bucket = [w](int v) { return v >= 0 ? v / w : (v + 1) / w - 1; };  
        unordered_map<int, pair<int, int>> box;  
        for (int b : arr2) {
            auto [it, fresh] = box.try_emplace(bucket(b), b, b);
            if (!fresh) it->second = {min(it->second.first, b), max(it->second.second, b)};
        }
        auto far = [&](int a) {  
            int k = bucket(a);
            auto left = box.find(k - 1), right = box.find(k + 1);
            return !box.contains(k)
                && (left == box.end() || left->second.second < a - d)
                && (right == box.end() || right->second.first > a + d);
        };
        return ranges::count_if(arr1, far);
    }
};