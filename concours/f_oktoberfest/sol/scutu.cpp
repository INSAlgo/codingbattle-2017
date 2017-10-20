#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <vector>
#include <list>

using namespace std;

int main()
{
	//global volume
	int V;
	fscanf(stdin, "%d", &V);
	
	//initial a volume
	int a;
	fscanf(stdin, "%d", &a);

	//initial b volume
	int b;
	fscanf(stdin, "%d", &b);

	int nABMax = V;

	// Q: using a rare matrix?
	vector<vector<int>> arrAB(nABMax+1, vector<int>(nABMax + 1)); //default: init to zero
	vector<int> arrV(V+1);

	arrAB[a][b] = 1;
	arrV[a+b] = 1;

	list<pair<int, int>> listToProcess;

	listToProcess.push_back(make_pair(a, b));

	list<pair<int, int>>::iterator it; 

	while (listToProcess.size() > 0) {
		it = listToProcess.begin();
		int nPosA = (*it).first;
		int nPosB = (*it).second;
		listToProcess.pop_front();

		int nNewA = 0;
		int nNewB = 0;
		if (arrAB[nPosA][nPosB] == 1) {
			//(a,b) -> ([sqrt(a)], [sqrt(b)])
			nNewA = sqrt(nPosA);
			nNewB = sqrt(nPosB);
			if (nNewA + nNewB <= V) {
				arrV[nNewA + nNewB] = 1;

				if ((nNewA <= nABMax) && (nNewB <= nABMax) && (arrAB[nNewA][nNewB] == 0)) {
					arrAB[nNewA][nNewB] = 1;
					listToProcess.push_back(make_pair(nNewA, nNewB));
				}
			}

			//(a,b) -> (a^3, b^2)
			if (nPosA <= sqrt(V))
				nNewA = nPosA * nPosA * nPosA;
			else
				nNewA = V + 1;
			if (nPosB <= sqrt(V))
				nNewB = nPosB * nPosB;
			else
				nNewB = V + 1;
			if (nNewA + nNewB <= V) {
				arrV[nNewA + nNewB] = 1;

				if ((nNewA <= nABMax) && (nNewB <= nABMax) && (arrAB[nNewA][nNewB] == 0)) {
					arrAB[nNewA][nNewB] = 1;
					listToProcess.push_back(make_pair(nNewA, nNewB));
				}
			}

			//(a,b) -> (a^2, b^3)
			if (nPosA <= sqrt(V))
				nNewA = nPosA * nPosA;
			else
				nNewA = V + 1;
			if (nPosB <= sqrt(V))
				nNewB = nPosB * nPosB * nPosB;
			else
				nNewB = V + 1;
			if (nNewA + nNewB <= V) {
				arrV[nNewA + nNewB] = 1;

				if ((nNewA <= nABMax) && (nNewB <= nABMax) && (arrAB[nNewA][nNewB] == 0)) {
					arrAB[nNewA][nNewB] = 1;
					listToProcess.push_back(make_pair(nNewA, nNewB));
				}
			}

			//if solution found -> stop the algorithm
			//TBD
		}
	}
	
	//find solution
	int nSolution = V;
	while ((arrV[nSolution] == 0) && (nSolution > 0)) nSolution--;

	printf("%d\n", nSolution);

	return 0;
}

