 for ( i = 70; i; --i )
  {
    *(_DWORD *)v0 = -858993460;
    v0 += 4;
  }
  sub_1400116DB(&unk_14002D077);
  qmemcpy(v8, "a#l67'gdb", 9); // xor with 85, actual password is 4v9cbr217 (thank the DDLC Plus devs for teaching me about XOR :pray:)
  v9 = 9;
  v10 = 85;
  LOBYTE(v2) = 85;
  sub_140011410(v11, v8, 9, v2);
  sub_1400116CC(v12);
  sub_1400110C3(std::cout, (__int64)"Enter password: ");
  sub_14001102D(std::cin, v12);
  if ( (unsigned __int8)sub_1400111D1((__int64)v12, (__int64)v11) )
    v3 = sub_1400110C3(std::cout, (__int64)"Access granted.");
  else
    v3 = sub_1400110C3(std::cout, (__int64)"Access denied.");
  std::ostream::operator<<(v3, sub_140011050);
  system("pause");
  v13 = 0;
  sub_140011140(v12);
  sub_140011140(v11);
  v4 = v13;
  sub_1400115C3(v6, &unk_1400231A0);
  return v4;
}