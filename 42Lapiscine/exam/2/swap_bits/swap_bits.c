unsigned char	swap_bits(unsigned char octet)
{
	unsigned char ret;

	ret += octet;
	ret <<= 4;
	ret += octet >> 4;
} 
