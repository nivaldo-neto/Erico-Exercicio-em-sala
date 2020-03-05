long fact_recursive(int n)
{
	if (n == 0){
		return 1;
	else
		return (n * fact_recursive(n - 1));
}

long fact_loop(int n)
{
	int c, fact = 1;
	
	for(c = 1; c <= n; c++) //quando o for tiver uma linha só n precisa de {}
		fact = fact * c;
	return fact;
}
