int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+1Ch] [ebp-4h] BYREF

  __main();
  printf("Enter password (int): ");
  scanf("%d", &v4);
  if ( v4 == 124816 ) // funni
    printf("You got it ;)");
  return 0;
}