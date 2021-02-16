int add(int x, int y)
{
   int z = x + y;
   return z;
}

int main()
{
    int ans = add(1, 2);
    return ans;
}


/*objdump disassembly output objdump -d */

/*
080483dc <add>:
 80483dc:	55                   	push   %ebp
 80483dd:	89 e5                	mov    %esp,%ebp
 80483df:	83 ec 04             	sub    $0x4,%esp
 80483e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80483e5:	8b 55 08             	mov    0x8(%ebp),%edx
 80483e8:	01 d0                	add    %edx,%eax
 80483ea:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80483ed:	8b 45 fc             	mov    -0x4(%ebp),%eax
 80483f0:	c9                   	leave  
 80483f1:	c3                   	ret 
*/

/*
080483f2 <main>:
 80483f2:	55                   	push   %ebp
 80483f3:	89 e5                	mov    %esp,%ebp
 80483f5:	83 ec 0c             	sub    $0xc,%esp
 80483f8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80483ff:	00 
 8048400:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048407:	e8 d0 ff ff ff       	call   80483dc <add>
 804840c:	89 45 fc             	mov    %eax,-0x4(%ebp)
 804840f:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8048412:	c9                   	leave  
 8048413:	c3                   	ret 
*/
