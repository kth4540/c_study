static unsigned int next = 1;

int my_rand()
{
	next = next * 110351535 + 1234;
	next = (unsigned int)(next / 65536) % 32768;


	return (int)next;
}

void my_srand(unsigned int seed)
{
	next = seed;
}