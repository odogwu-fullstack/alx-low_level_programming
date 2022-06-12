/**
 * _isalpha - checks if entered value is an alpha character
 * @c: this function takes a parameter to check against
 *
 * Return: Doesnt return shit
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
