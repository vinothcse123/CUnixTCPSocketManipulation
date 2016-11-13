void getUserandHostName(char *p_output,int p_len)
{
	char l_buffer[p_len];	
	gethostname(p_output,p_len);		
	getlogin_r(l_buffer,p_len-strlen(p_output));
	strcat(p_output,"@");
	strcat(p_output,l_buffer);
	
	printf("%s",p_output);
}
