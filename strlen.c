int strlen(char *string)
{
  char *ptr = string;
  while (*ptr != '\0') ptr++
  return ptr - string;
}
