/*
 * Copyright (c) 2013 Antonio Aiello <http://tristamus.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* GIMP RGBA C-Source image dump (sdl_icon.c) */

static const struct {
  uint32_t  	 width;
  uint32_t  	 height;
  uint32_t  	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  uint8_t 		 pixel_data[32 * 32 * 4 + 1];
} CLIENT_WINDOW_ICON = {
	32, 32, 4,
	"````````````````````````````````````````^08XG+/Q6WB^*4N8\"2]^#3.!"
	"\"C\"!\"C!_+$Z:7WO!G[7S_@L[````````````````````````````````````X.L5"
	"````````````````````````````````V^D;4G2[\"#.#\"#.#\"#.#\"#.#\"#.$%3R)"
	"%T\".\"#.$\"#.#\"#.#\"#.$\"#.#6WF`S-3[]@$Q````````````````YO(?G(=P[_,2"
	"`````````````````````P\\_````L[SE&T:5#3N,#3J+#3J+#3N+#3N+#CN,'D61"
	"*%*?#CN,##N+#3J+#3N,#CZ486V-L)5J@Z/J````````^`D\\IJ*H?VE$Q[JM````"
	"`````````````````P\\_XO,H9'.36'2I$4.5$T26$D26$T27%4:7&$B8'$N:+U:>"
	"/&6P&4F9%$67$4.5(5&D?7ITAGA:M:VA.&&M2G.`O\\+8@W99@W-0II)D^`@[````"
	"`````````````P\\_V>TC3&RBM*6',F.T+V\"N&$^A&$^@'%&B)5:E+5VJ,V&L1FNN"
	"5G[%+5VK%TV?0VNMC(-CA'I7@7ICFZ6W6WFRBXN'AH-SB']?BG]3W-_I````````"
	"`````````P\\_Y/@L*V*UE(M>L+>U.6FT17.].&RZ*F\"P+6.Q.&FU1'.]0W*\\3W6W"
	";9'72GK+9X\"GBH9?A(-B@X%?A(-CC)\"+@X1S?(!U=GIP@H=]MK.0````````````"
	"````````````*FJ_B).+B(MVK[W&17G#1GC#/G2`1'?\".&^]17?\"27K$17C#68/,"
	"I:>'CI%YAHMSBI\"!BY%]AHMOAHQTB8YYAHQVA(M]=X!VD)=_D*[D````````````"
	"````````<:/K07;#H*1I@XQ]NL?'0WK&483/3X/-3X/-1W[)1GW)/WC$/'?%3'J_"
	":8[&8X2GA9>@D9A]EZ&*B92\"BY6(C9B*C9>(BY6'@8V!H;*W/GG)@K#X`````@X]"
	"````\\/`Q-'G-A)^CB)-P@HUYO<:R5XS95(G448?228'.2('-0G[,.WK*-WG*37R_"
	"48S<0GW*1'_-3X;7>92OI*Z'C)B,BI>*C9F,B9:(E*\".D*O8?9BOD:\"<Q=#!````"
	"````I<#Z2HC:HJR8AY-[A)!VJ+2,AJKM58O648C42X;30H'0/'[//G_0/X#158'#"
	"9Z#O/H#31H+/3(;22(/18X[3K[F6C9J,C9J,C)B(AI.%B9:$AY2$L+RDF\\,'````"
	"````:8O#89'=HJN*C9F-C)B*DIZ-P,_44(G54(K64(K62H;53(?52X?43(C5:I79"
	"CI6$IZZCF++25H_?3XC44XK56HK3L;F-B)*&C)>*C)B*BI6)EZ&,=J+D6Y#:````"
	"N,?UB:OA8XS2L+:-B)&\"B)*$C)6*KK61A:OO6([75XW75HW65X[768[76Y'8<YC8"
	"HZJ4AX^!D)A^N\\\"G=*'H4(G44(K5:8FUK;2*BI*(B9*)D)B'A:314(/*68S2RN4>"
	"FJ>\\DK#C98K/L[F6BY.)C96+C).(C).$P<B`7Y';68S578[68)#799/::)7<>YO8"
	"I:N;C).+BY*&BI\"\"P<.F:YOG5(G58)3AIJJ3AXY`BY&%G*W\"7H[5:9?<6HW8G\\,!"
	"GJ>AHK7278/,JZR)C9.-C)&)A8I\\AHM\\F)Q[L<+B6XG39([6:I/:;)3:9Y#6=I+/"
	"GJ28BI\"+CI2-C)&(EIF#N,?85H;27HO4AIJXGJ*0K;2R:I/=:I/99Y/<5XG6>*/K"
	"EYV0QLO!8)+HGIMQ@XA^B(Q`AHEXA(=R@X9UM[:/?9_H:Y'8;Y3;9X[478/+9H&^"
	"DIB/@HB&BY\",CI.,B8R$P,\"F;Y?B9H_68X/&N[F-D[#Q;I/9;9+8;9;>78O79I/>"
	"H*6/JJ=\\?*;UHZB9A89O@H5QA(=R@X9QA(9WK[F^8HO5;)/9;)+87X;-4'B`5'\"L"
	"A8N#>8!^AHV(CI.-BX^'K:R'@J/L9X[6:XW5LK&'F;'I;)'79XW3<I?=;I?>6XK7"
	"HJB9D9-]ML/:8WVJJ*9V@X5L@X5L@X9OG9UXA*'>98O3:I#6:(S36H#'2&^X4&NH"
	"?H5[='QXA(J$C9*+BX^%K*N\"?)[E78;1:8K2KZZ$F+#D:H[49HO188;-<)7<68;3"
	"DZ\"@C)&#I*>0D:SRB8EHAHEN@X5H@X9JN+J;4GG'5WK#7H#&7X''4W:\\16FP5FZI"
	"@XQ\\>(!XAHV!C92'BH]`M;:.7H/12W.^36RSNKEWA)_B8X7*78#(78#&47:^6X'+"
	"AI>TIZN)C9)]GZ:F=86IDI9SAHMMA(EFKKBQ-UNG1&:N2FNR4'\"W4G\"T0F.J8GFP"
	"DIJ$@8E[BY*\"C)2!B(]XLKNQ,UFF-%JF;8&:FIUBL[_'0&*K2&JR-5NG,%>E67K$"
	"<8;$J*Y`CI>\"CI9YJ+/,?85TB9!RCY1@D*.W)4B3+U\"9-56>.UJA<8:`0V&I;8&V"
	"GZB(BI-\\C)5\\BI)WIZUX36JM)$>3(4:8DIMT@HE;HZE:E*?1&3V+&S^.&T\".>936"
	"EZ?;?XN$BI1XBY5[BY5VBY1SB)%MFJ)@=XRP%#>#&SR'(4&+)T:0.5:<@)\"^;H&Q"
	"HJR$B9-TB9-QF:%P8GFD$S:\"$#-`0UR-F*!5A(U5@XQ5NL)F57&Y\"2U\\\"BY]I;OW"
	"N,/E@)+(F*-NB91SC)ARA9!BA9%AF:1B?9.R#3%_#S)`%#6\"&3N&%CB%@8^/J;?'"
	"I[)RAH]F>HF).E><$S6\"$S6\"(4&0DIU;@XY0@XY-@X].A9!/R=.$)$6:!\"IZ````"
	"^04YD)^M=8)^B959A)!=A)!6A9)BDIYHG[&T$#6#'D&.-E:<05R74VN4<H*!N<5S"
	"/%BI*DR=$3:$%#B%%#B%,5&;CYILAI)8AI)8B)1<A)!+AY-*C9E'PL^H9H/*````"
	"````J;6FK+K=<7U#A)!(@X],A)!8AI-@R-2E$#B(+D^7.%2.5&Z,8GA_@(]UNL1M"
	"+%\"D&T&/&#^,(4>:6W.:D)IGB95BAI):AY-BC)AJDY]L;'^5?XYUB))(QM+A````"
	"````Z_@RJ+1(BI=IA9%$@X]*A9%4AY-7L+Q:7G[,*E&=+%.?*U*=)E\"@D9YSG*B)"
	"2&>T676I;H.0B)-JBI9;B95BB)1>BI=EBI9BB)1BDY];I;?!($N:>)CB[/@J`P\\_"
	"````````M<#'LKM!@XY%A9!2B95BCIAHDIU>M\\6Y,%NG.&&M-E^K4F^C<Y\"P<X:?"
	"J;%7BY)-CYE>B))<AY%9AY%;B))AC9=LBY9JCIELB))GIK!H?)KA````````````"
	"````````````G:5TFI]'A8M6B9%GBY-KBY)CIZQ:A*';06RV0V^Z;8K&.&:T>XF9"
	"7W_$2&^\\>XR/J*M>BY%IBY%EBY%J?X9DC91EA8QF?X=AAX]ET->R````````````"
	"`````````````0T`G9YFFII@C9!JBHUDAXA7A(1(O;A>9H[92GC\"1G?#0'*`@(R;"
	"7HK607.`.&V\\7GVQIZ-<BXUJD)%IGZ_&87NFGIIAB8IBAH5/IIY!Z_<=````````"
	"`````````````````@\\`D)%_HIQECXQJA7].AX%.AGY\"O*]A<9OC07?%/W?)@HJ6"
	"78W<0WK*.77(,W+&1'?(F91PF9)GQ\\.C,'#$2H#6M+.JGX]!@WE\"PK=[````````"
	"````````````````````````LKC2EXM@EHMDBG]9BGY9A7=%KYA/F+';/8+:AXB."
	"5Y'E0H'508#60('60('6187<>X2-N:)HA;8$````````WNPAH95SJ(M!W-SG````"
	"````````````````````````````]`8\\J:JZC8)PH(UGBW5&@FU!DW=!G)B7KYQW"
	"5YGR1XSA1HSA1HSA1HSA1XSB=K#^I[+=[OHI````````````````R,_U?G%?`P\\_"
	"````````````````````````````````````````S-D*O+G(I)>.BWQK@6Y5E'E7"
	"7Z/[3Y3J6Y[Q?K8!LMD9]`@Z````````````````````````````````````P,OX"
	"",
};
