void getUserandHostName(char *p_output,int p_len)
{
	char l_buffer[p_len];	
		
	getlogin_r(p_output,p_len);
	gethostname(l_buffer,p_len-strlen(p_output));
	
	
	strcat(p_output,"@");
	strcat(p_output,l_buffer);
	
	printf("%s",p_output);
}
