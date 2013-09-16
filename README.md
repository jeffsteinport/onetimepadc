onetimepadc
=======

Random one-time-pad generator for c

Generate a one-time pad for use with whatever encryption you are using. Each key is 24 characters long and 20 keys are generated. Characters that are easily confused when written (e.g., i, l, 1, o, 0) are not used to avoid transcription error. To avoid further confusion, only lower-case letters are used. For super-high security, generate on an air-gap computer and hand transcribe each line onto paper. 

Outputs something like this:

```
Pad # 1808040685

1:      @cd@g+[nz$*+>g84>pn7<[cb

2:      ekkdpr$]bn[we8q3<fee7ngp

3:      @+xe7fsn$k9yh>twk]c85?wk

4:      s>#7+6x+g#sq58k[2t@*2snk

5:      p832h5k@396[z976<#wme4#$

6:      xzs5en>bx@bn4x[pch?2tg6>

7:      68h+a7td[wht6f+9#pxasq7[

8:      ><d@d*<*@fyt]z]$fz?]nw5w

9:      r9+87@mpf#n4@+]>tsrpd[z5

10:     3p@<s4srx+z*cs#t#xxzp@5q

11:     @wmz>8?h6$e6bexf9*8mhen8

12:     @rd]@hk>m]x*nmasw@y]d?bn

13:     t*fkrb2rbemaz]88a+2yzwzg

14:     thy<tf*wst57+565hszq]]76

15:     87a[9<x*$f#g6@3ysqc[tggm

16:     >6hc2q?s53md>r67ecqmb@rc

17:     p*7qaphst*[3f5t[6p8pnyw?

18:     >sbt@*[nwkmc>+[@x83mb4e?

19:     @]zmsfy>g<rf8[cbdzpb@?x5

20:     >y>w8ykssr38e76y55nx>#]c
```
