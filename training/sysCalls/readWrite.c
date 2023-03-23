int main()
{
	char buff[30];
	int n;
	write(1,"This i written to fd no 1\n",31);
	write(1,"Enter line of text\n",strlen(
"Enter line of text\n"));
	n = read(0,buff,80);
	write(1,"following is line i read\n",29);
	write(1,buff,n);
}
