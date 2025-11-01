encoded = b"a#l67'gdb"
key = 85

decoded = bytes([b ^ key for b in encoded])
print(decoded.decode('utf-8', errors='replace'))