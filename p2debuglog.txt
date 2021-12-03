(gdb) b main
Breakpoint 1 at 0x7c7: file p2original.c, line 23.
(gdb) r
Starting program: /home/runner/pps-test1-BalajiVirat114-3/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p2original.c:23
23    x= input();
(gdb) n
Enter the number 1
24    y= input();
(gdb) n
Enter the number 2
25    z= add(x,y);
(gdb) s
add (a=1, b=2) at p2original.c:12
12    sum = a+b;
(gdb) s
13    return sum;
(gdb) n
14  }
(gdb) c
Continuing.
sum of 1 + 2 is 3
[Inferior 1 (process 48) exited normally]
(gdb) 
