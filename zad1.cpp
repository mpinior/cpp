#include <iostream>
#include <vector>
#include <algorithm>

unsigned int ToMinutes(std::string time_HH_MM) {
    int j=1;
    unsigned int sum=0;
    for (int i=time_HH_MM.length()-1; i>=0; i--){
        if (time_HH_MM[i]==':') {
            j = j/10 * 6;
            continue;
        }
        sum = sum + (time_HH_MM[i] - 48) * j;
        j = j*10;
    }
    return sum;
}

unsigned int MinimalTimeDifference(std::vector<std::string> times) {
    std::vector<unsigned int> tab (times.size());
    for (int i=0; i<times.size()-1; i++){
        tab[i] = ToMinutes(times[i]);
    }
    std::sort(tab.begin(), tab.end());
    unsigned int min = tab[1] - tab[0];
    for (int i=0; i<tab.size()-2; i++){
        if (tab[i+1] - tab[i] < min){
            min = tab[i+1] - tab[i];
        }
    }
    return min;
}

