int __fastcall main(int argc, const char **argv, const char **envp)
{
  char Str2[8];
  _BYTE v5[7];
  char Str1[32];

  _main();
  *(_DWORD *)v5 = 1129925455; // converting this to hex gives 0x43594B4F, but in Mem, it's stored as [0x4F, 0x4B, 0x59, 0x43]
  *(_DWORD *)&v5[3] = 421010243; // converting this to hex gives 0x19181B43, while this one is stored as [0x43, 0x1B, 0x18, 0x19]!
  // so if we just combine the two hex values from the memory we'd get [0x4F, 0x4B, 0x59, 0x43, 0x1B, 0x18, 0x19] 
  decrypt(Str2, v5, 42, 7); // the key is 0x2A in memory so if we xor it with the hex value from the encrypted password we'd get the decrypted password which is easi123 (see py/decode.py)
  // destinationBuffer, sourceBuffer, XOR key, length
  // Str2 = where the decrypted pass is stored 
  // v5 = the encrypted password (in bytes)
  // 42 = the XOR key
  // 7 = The number of letters/numbers total in the pass
  _mingw_printf("Enter password: ");
  _mingw_scanf("%31s", Str1);
  // if the password that you input is the same as the encrypted password you get in
  if ( !strcmp(Str1, Str2) )
    puts("Access granted!");
  else
  // if not...well you don't get in lol
    puts("Access denied!");
  getch();
  return 0;
}

_BYTE *__fastcall decrypt(__int64 a1, __int64 a2, char a3, int a4) // decrypt(destinationBuffer, sourceBuffer, XOR key, length)
{
  _BYTE *result;
  int i;

  for ( i = 0; i < a4; ++i )
    *(_BYTE *)(a1 + i) = a3 ^ *(_BYTE *)(i + a2);
  result = (_BYTE *)(a4 + a1);
  *result = 0;
  return result;
}