std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) {
 vec.push_back(i);
 }
 vec.erase(std::remove(vec.begin(), vec.end(), 5), vec.end());