#include <cstdio>
#include <algorithm>

using namespace std;

struct sampleTeam{

    int id, solved;
    sampleTeam(){}

    bool operator < (sampleTeam X)const{
        return solved > X.solved;
    }
}ben[150000];

int main(){
    int N;
    scanf("%d",&N);

    for(int k = 0; k < N; ++k) {
        scanf("%d %d", &ben[k].id, &ben[k].solved);
    }
    stable_sort(ben, ben + N);

    for(int j = 0; j < N; ++j)
        printf("%d %d\n", ben[j].id, ben[j].solved);

    return 0;
}
