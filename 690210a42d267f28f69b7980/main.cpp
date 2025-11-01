__int64 __fastcall main()
{
  int userInput; // [rsp+28h] [rbp-8h] BYREF
  int theKey; // [rsp+2Ch] [rbp-4h]

  _main();
  theKey = 68;
  printf("Please enter the key: ");
  scanf("%d", &userInput);
  if ( theKey == userInput )
    printf("Correct!");
  else
    printf("Bad key!");
  return 0;
}