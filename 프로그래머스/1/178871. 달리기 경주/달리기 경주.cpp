#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> rank;
    for (int i = 0; i < players.size(); i++)
    {
        rank[players[i]] = i;
    }
    
    for (const auto& call : callings)
    {
        int index = rank[call];
        rank[players[index - 1]] = index;
        rank[call] -= 1; 
        players[index].swap(players[index - 1]);
    }
    
    return players;
}