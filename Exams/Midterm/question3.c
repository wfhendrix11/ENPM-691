struct A
{
	int x[2];
	int y[2];
};

void operation(struct A* p)
{
	// missing statment
	p->x[0] = p->y[0];
}

int main() 
{

}

// p->y[0] = p->x[0];
   // 0x080483ec <+0>:	push   %ebp
   // 0x080483ed <+1>:	mov    %esp,%ebp
   // 0x080483ef <+3>:	mov    $0x0,%eax
   // 0x080483f4 <+8>:	pop    %ebp
   // 0x080483f5 <+9>:	ret 

// p->y[1] = p->x[1];
   // 0x080483ed <+0>:	push   %ebp
   // 0x080483ee <+1>:	mov    %esp,%ebp
   // 0x080483f0 <+3>:	mov    $0x0,%eax
   // 0x080483f5 <+8>:	pop    %ebp
   // 0x080483f6 <+9>:	ret   

// p->x[0] = p->y[0]; 
   // 0x080483ec <+0>:	push   %ebp
   // 0x080483ed <+1>:	mov    %esp,%ebp
   // 0x080483ef <+3>:	mov    $0x0,%eax
   // 0x080483f4 <+8>:	pop    %ebp
   // 0x080483f5 <+9>:	ret 