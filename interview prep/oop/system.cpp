#include<bits/stdc++.h>
using namespace std;


class Stock
{
private:
    int S;
    std::vector<int> days;

public:
    Stock(int s, int maxDay)
    {
        S = s;
        days.resize(maxDay + 1, 0);
    }

    void UpdateDividend(int prevD, int A, int D)
    {
        if (prevD != -1)
        {
            for (int i = prevD; i < days.size(); i++)
            {
                days[i] += A;
                
            }
        }
        for (int i = D; i < days.size(); i++)
        {
            days[i] -= A;
        }
    }

    int CalculateFuturePrice(int F)
    {
        return S + days[F];
    }
};

int main()
{
    int S, N, Q;
    std::cin >> S >> N >> Q;

    Stock stock(S, 1000000);
    std::vector<int> prevDays(N, -1);
    for (int i = 0; i < N; i++)
    {
        int A, D;
        std::cin >> A >> D;
        stock.UpdateDividend(-1, A, D);
        prevDays[i] = D;
    }

    for (int i = 0; i < Q; i++)
    {
        std::string operation;
        std::cin >> operation;

        if (operation == "PRICE")
        {
            int F;
            std::cin >> F;
            std::cout << stock.CalculateFuturePrice(F) << "\n";
        }
        else if (operation == "DIVIDEND_UPDATE")
        {
            int index, A, D;
            std::cin >> index >> A >> D;
            index--;
            stock.UpdateDividend(prevDays[index], A, D);
            prevDays[index] = D;
        }
    }

    return 0;
}