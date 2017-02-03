int strlen(const char* a)
{
	int c = 0;
	while(*a) {
		++c;
		++a;
	}
	return c;
}

char* strdup(const char* a)
{
	char* s = new char[strlen(a) + 1];
	while(*a) {
		*s = *a;
		++a;
		++s;
	}
	++s;
	s = 0;
	s -= strlen(a);
	--s;
	return s;
}

int main()
{
	string?
}
