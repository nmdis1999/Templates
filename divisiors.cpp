vector<int> divisors;
void findDivisors(int n)
{
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (n/i == i)
			{
				divisors.push_back(i);
			}
			else
			{
				dvisiors.push_back(n/i);
				divisors.push_back(i);
			}
		}
	}

	divisors.push_back(n);
}