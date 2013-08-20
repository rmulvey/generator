/*========================================================================
 *
 * File:      $RCSfile: DLGLexer.h,v $
 * Version:   $Revision: 1.9 $
 * Modified:  $Date: 2013/01/10 23:41:31 $
 *
 * (c) Copyright 1992-2013 by Mentor Graphics Corp. All rights reserved.
 *
 *========================================================================
 * This document contains information proprietary and confidential to
 * Mentor Graphics Corp., and is not for external distribution.
 *======================================================================== 
 */
#ifndef DLGLexer_h
#define DLGLexer_h
/*
 * D L G L e x e r  C l a s s  D e f i n i t i o n
 *
 * Generated from: parser.dlg
 *
 * 1989-1999 by  Will Cohen, Terence Parr, and Hank Dietz
 * Purdue University Electrical Engineering
 * DLG Version 1.33MR20
 */


#include "DLexerBase.h"


#include "p_error.hh"
#include "P.h"
#include "vchar.h"

class DLGLexer : public DLGLexerBase {
public:


void errstd(const char *s)
{
	if ( s )
	{
		((P*)parser)->er->stmt_error( _line, _begcol, _endcol, 
		"Near line %d col %d (err354): %S (skipping text '%S')\n",
		_line, _begcol, vcharScribeASCII(s), vcharScribeASCII(_lextext) );
	}
	else
	{
	((P*)parser)->er->stmt_error( _line, _begcol, _endcol, 
	"Near line %d col %d (err355): Lexical error (skipping text '%S')\n",
	_line, _begcol, vcharScribeASCII(_lextext) );
}
}

void panic ( const char *msg )
{
throw msg;
}
public:
	static const int MAX_MODE;
	static const int DfaStates;
	static const int START;
	static const int TICKED_PHRASE;
	static const int QUOTED_STRING;
	static const int C_COMMENT;
	typedef unsigned short DfaState;

	DLGLexer(DLGInputStream *in,
		unsigned bufsize=2000)
		: DLGLexerBase(in, bufsize, 0)
	{
	;
	}
	void	  mode(int);
	ANTLRTokenType nextTokenType(void);
	void     advance(void);
protected:
	ANTLRTokenType act1();
	ANTLRTokenType act2();
	ANTLRTokenType act3();
	ANTLRTokenType act4();
	ANTLRTokenType act5();
	ANTLRTokenType act6();
	ANTLRTokenType act7();
	ANTLRTokenType act8();
	ANTLRTokenType act9();
	ANTLRTokenType act10();
	ANTLRTokenType act11();
	ANTLRTokenType act12();
	ANTLRTokenType act13();
	ANTLRTokenType act14();
	ANTLRTokenType act15();
	ANTLRTokenType act16();
	ANTLRTokenType act17();
	ANTLRTokenType act18();
	ANTLRTokenType act19();
	ANTLRTokenType act20();
	ANTLRTokenType act21();
	ANTLRTokenType act22();
	ANTLRTokenType act23();
	ANTLRTokenType act24();
	ANTLRTokenType act25();
	ANTLRTokenType act26();
	ANTLRTokenType act27();
	ANTLRTokenType act28();
	ANTLRTokenType act29();
	ANTLRTokenType act30();
	ANTLRTokenType act31();
	ANTLRTokenType act32();
	ANTLRTokenType act33();
	ANTLRTokenType act34();
	ANTLRTokenType act35();
	ANTLRTokenType act36();
	ANTLRTokenType act37();
	ANTLRTokenType act38();
	ANTLRTokenType act39();
	ANTLRTokenType act40();
	ANTLRTokenType act41();
	ANTLRTokenType act42();
	ANTLRTokenType act43();
	ANTLRTokenType act44();
	ANTLRTokenType act45();
	ANTLRTokenType act46();
	ANTLRTokenType act47();
	ANTLRTokenType act48();
	ANTLRTokenType act49();
	ANTLRTokenType act50();
	ANTLRTokenType act51();
	ANTLRTokenType act52();
	ANTLRTokenType act53();
	ANTLRTokenType act54();
	ANTLRTokenType act55();
	ANTLRTokenType act56();
	ANTLRTokenType act57();
	ANTLRTokenType act58();
	ANTLRTokenType act59();
	ANTLRTokenType act60();
	ANTLRTokenType act61();
	ANTLRTokenType act62();
	ANTLRTokenType act63();
	ANTLRTokenType act64();
	ANTLRTokenType act65();
	ANTLRTokenType act66();
	ANTLRTokenType act67();
	ANTLRTokenType act68();
	ANTLRTokenType act69();
	ANTLRTokenType act70();
	ANTLRTokenType act71();
	ANTLRTokenType act72();
	ANTLRTokenType act73();
	ANTLRTokenType act74();
	ANTLRTokenType act75();
	ANTLRTokenType act76();
	ANTLRTokenType act77();
	ANTLRTokenType act78();
	ANTLRTokenType act79();
	ANTLRTokenType act80();
	ANTLRTokenType act81();
	ANTLRTokenType act82();
	ANTLRTokenType act83();
	ANTLRTokenType act84();
	ANTLRTokenType act85();
	ANTLRTokenType act86();
	ANTLRTokenType act87();
	ANTLRTokenType act88();
	ANTLRTokenType act89();
	ANTLRTokenType act90();
	ANTLRTokenType act91();
	ANTLRTokenType act92();
	ANTLRTokenType act93();
	ANTLRTokenType act94();
	ANTLRTokenType act95();
	ANTLRTokenType act96();
	ANTLRTokenType act97();
	ANTLRTokenType act98();
	ANTLRTokenType act99();
	ANTLRTokenType act100();
	ANTLRTokenType act101();
	ANTLRTokenType act102();
	ANTLRTokenType act103();
	ANTLRTokenType act104();
	ANTLRTokenType act105();
	ANTLRTokenType act106();
	ANTLRTokenType act107();
	ANTLRTokenType act108();
	ANTLRTokenType act109();
	ANTLRTokenType act110();
	ANTLRTokenType act111();
	ANTLRTokenType act112();
	ANTLRTokenType act113();
	static DfaState st0[76];
	static DfaState st1[76];
	static DfaState st2[76];
	static DfaState st3[76];
	static DfaState st4[76];
	static DfaState st5[76];
	static DfaState st6[76];
	static DfaState st7[76];
	static DfaState st8[76];
	static DfaState st9[76];
	static DfaState st10[76];
	static DfaState st11[76];
	static DfaState st12[76];
	static DfaState st13[76];
	static DfaState st14[76];
	static DfaState st15[76];
	static DfaState st16[76];
	static DfaState st17[76];
	static DfaState st18[76];
	static DfaState st19[76];
	static DfaState st20[76];
	static DfaState st21[76];
	static DfaState st22[76];
	static DfaState st23[76];
	static DfaState st24[76];
	static DfaState st25[76];
	static DfaState st26[76];
	static DfaState st27[76];
	static DfaState st28[76];
	static DfaState st29[76];
	static DfaState st30[76];
	static DfaState st31[76];
	static DfaState st32[76];
	static DfaState st33[76];
	static DfaState st34[76];
	static DfaState st35[76];
	static DfaState st36[76];
	static DfaState st37[76];
	static DfaState st38[76];
	static DfaState st39[76];
	static DfaState st40[76];
	static DfaState st41[76];
	static DfaState st42[76];
	static DfaState st43[76];
	static DfaState st44[76];
	static DfaState st45[76];
	static DfaState st46[76];
	static DfaState st47[76];
	static DfaState st48[76];
	static DfaState st49[76];
	static DfaState st50[76];
	static DfaState st51[76];
	static DfaState st52[76];
	static DfaState st53[76];
	static DfaState st54[76];
	static DfaState st55[76];
	static DfaState st56[76];
	static DfaState st57[76];
	static DfaState st58[76];
	static DfaState st59[76];
	static DfaState st60[76];
	static DfaState st61[76];
	static DfaState st62[76];
	static DfaState st63[76];
	static DfaState st64[76];
	static DfaState st65[76];
	static DfaState st66[76];
	static DfaState st67[76];
	static DfaState st68[76];
	static DfaState st69[76];
	static DfaState st70[76];
	static DfaState st71[76];
	static DfaState st72[76];
	static DfaState st73[76];
	static DfaState st74[76];
	static DfaState st75[76];
	static DfaState st76[76];
	static DfaState st77[76];
	static DfaState st78[76];
	static DfaState st79[76];
	static DfaState st80[76];
	static DfaState st81[76];
	static DfaState st82[76];
	static DfaState st83[76];
	static DfaState st84[76];
	static DfaState st85[76];
	static DfaState st86[76];
	static DfaState st87[76];
	static DfaState st88[76];
	static DfaState st89[76];
	static DfaState st90[76];
	static DfaState st91[76];
	static DfaState st92[76];
	static DfaState st93[76];
	static DfaState st94[76];
	static DfaState st95[76];
	static DfaState st96[76];
	static DfaState st97[76];
	static DfaState st98[76];
	static DfaState st99[76];
	static DfaState st100[76];
	static DfaState st101[76];
	static DfaState st102[76];
	static DfaState st103[76];
	static DfaState st104[76];
	static DfaState st105[76];
	static DfaState st106[76];
	static DfaState st107[76];
	static DfaState st108[76];
	static DfaState st109[76];
	static DfaState st110[76];
	static DfaState st111[76];
	static DfaState st112[76];
	static DfaState st113[76];
	static DfaState st114[76];
	static DfaState st115[76];
	static DfaState st116[76];
	static DfaState st117[76];
	static DfaState st118[76];
	static DfaState st119[76];
	static DfaState st120[76];
	static DfaState st121[76];
	static DfaState st122[76];
	static DfaState st123[76];
	static DfaState st124[76];
	static DfaState st125[76];
	static DfaState st126[76];
	static DfaState st127[76];
	static DfaState st128[76];
	static DfaState st129[76];
	static DfaState st130[76];
	static DfaState st131[76];
	static DfaState st132[76];
	static DfaState st133[76];
	static DfaState st134[76];
	static DfaState st135[76];
	static DfaState st136[76];
	static DfaState st137[76];
	static DfaState st138[76];
	static DfaState st139[76];
	static DfaState st140[76];
	static DfaState st141[76];
	static DfaState st142[76];
	static DfaState st143[76];
	static DfaState st144[76];
	static DfaState st145[76];
	static DfaState st146[76];
	static DfaState st147[76];
	static DfaState st148[76];
	static DfaState st149[76];
	static DfaState st150[76];
	static DfaState st151[76];
	static DfaState st152[76];
	static DfaState st153[76];
	static DfaState st154[76];
	static DfaState st155[76];
	static DfaState st156[76];
	static DfaState st157[76];
	static DfaState st158[76];
	static DfaState st159[76];
	static DfaState st160[76];
	static DfaState st161[76];
	static DfaState st162[76];
	static DfaState st163[76];
	static DfaState st164[76];
	static DfaState st165[76];
	static DfaState st166[76];
	static DfaState st167[76];
	static DfaState st168[76];
	static DfaState st169[76];
	static DfaState st170[76];
	static DfaState st171[76];
	static DfaState st172[76];
	static DfaState st173[76];
	static DfaState st174[76];
	static DfaState st175[76];
	static DfaState st176[76];
	static DfaState st177[76];
	static DfaState st178[76];
	static DfaState st179[76];
	static DfaState st180[76];
	static DfaState st181[76];
	static DfaState st182[76];
	static DfaState st183[76];
	static DfaState st184[76];
	static DfaState st185[76];
	static DfaState st186[76];
	static DfaState st187[76];
	static DfaState st188[76];
	static DfaState st189[76];
	static DfaState st190[76];
	static DfaState st191[76];
	static DfaState st192[76];
	static DfaState st193[76];
	static DfaState st194[76];
	static DfaState st195[76];
	static DfaState st196[76];
	static DfaState st197[76];
	static DfaState st198[76];
	static DfaState st199[76];
	static DfaState st200[76];
	static DfaState st201[76];
	static DfaState st202[76];
	static DfaState st203[76];
	static DfaState st204[76];
	static DfaState st205[76];
	static DfaState st206[76];
	static DfaState st207[76];
	static DfaState st208[76];
	static DfaState st209[76];
	static DfaState st210[76];
	static DfaState st211[76];
	static DfaState st212[76];
	static DfaState st213[76];
	static DfaState st214[76];
	static DfaState st215[76];
	static DfaState st216[76];
	static DfaState st217[76];
	static DfaState st218[76];
	static DfaState st219[76];
	static DfaState st220[76];
	static DfaState st221[76];
	static DfaState st222[76];
	static DfaState st223[76];
	static DfaState st224[76];
	static DfaState st225[76];
	static DfaState st226[76];
	static DfaState st227[76];
	static DfaState st228[76];
	static DfaState st229[76];
	static DfaState st230[76];
	static DfaState st231[76];
	static DfaState st232[76];
	static DfaState st233[76];
	static DfaState st234[76];
	static DfaState st235[76];
	static DfaState st236[76];
	static DfaState st237[76];
	static DfaState st238[76];
	static DfaState st239[76];
	static DfaState st240[76];
	static DfaState st241[76];
	static DfaState st242[76];
	static DfaState st243[76];
	static DfaState st244[76];
	static DfaState st245[76];
	static DfaState st246[76];
	static DfaState st247[76];
	static DfaState st248[76];
	static DfaState st249[76];
	static DfaState st250[76];
	static DfaState st251[76];
	static DfaState st252[76];
	static DfaState st253[76];
	static DfaState st254[76];
	static DfaState st255[76];
	static DfaState st256[76];
	static DfaState st257[76];
	static DfaState st258[76];
	static DfaState st259[76];
	static DfaState st260[76];
	static DfaState st261[76];
	static DfaState st262[76];
	static DfaState st263[76];
	static DfaState st264[76];
	static DfaState st265[76];
	static DfaState st266[76];
	static DfaState st267[76];
	static DfaState st268[76];
	static DfaState st269[76];
	static DfaState st270[76];
	static DfaState st271[76];
	static DfaState st272[76];
	static DfaState st273[76];
	static DfaState st274[76];
	static DfaState st275[76];
	static DfaState st276[76];
	static DfaState st277[76];
	static DfaState st278[76];
	static DfaState st279[76];
	static DfaState st280[76];
	static DfaState st281[76];
	static DfaState st282[76];
	static DfaState st283[76];
	static DfaState st284[76];
	static DfaState st285[76];
	static DfaState st286[76];
	static DfaState st287[76];
	static DfaState st288[76];
	static DfaState st289[76];
	static DfaState st290[76];
	static DfaState st291[76];
	static DfaState st292[76];
	static DfaState st293[76];
	static DfaState st294[76];
	static DfaState st295[76];
	static DfaState st296[76];
	static DfaState st297[76];
	static DfaState st298[76];
	static DfaState st299[76];
	static DfaState st300[76];
	static DfaState st301[76];
	static DfaState st302[76];
	static DfaState st303[76];
	static DfaState st304[76];
	static DfaState st305[76];
	static DfaState st306[76];
	static DfaState st307[76];
	static DfaState st308[76];
	static DfaState st309[76];
	static DfaState st310[76];
	static DfaState st311[76];
	static DfaState st312[76];
	static DfaState st313[76];
	static DfaState st314[76];
	static DfaState st315[76];
	static DfaState st316[76];
	static DfaState st317[76];
	static DfaState st318[76];
	static DfaState st319[76];
	static DfaState st320[76];
	static DfaState st321[76];
	static DfaState st322[76];
	static DfaState st323[76];
	static DfaState st324[76];
	static DfaState st325[76];
	static DfaState st326[76];
	static DfaState st327[76];
	static DfaState st328[76];
	static DfaState st329[76];
	static DfaState st330[76];
	static DfaState st331[76];
	static DfaState st332[76];
	static DfaState st333[76];
	static DfaState st334[76];
	static DfaState st335[76];
	static DfaState st336[76];
	static DfaState st337[76];
	static DfaState st338[76];
	static DfaState st339[76];
	static DfaState st340[76];
	static DfaState st341[76];
	static DfaState st342[76];
	static DfaState st343[76];
	static DfaState st344[76];
	static DfaState st345[76];
	static DfaState st346[76];
	static DfaState st347[76];
	static DfaState st348[76];
	static DfaState st349[76];
	static DfaState st350[76];
	static DfaState st351[76];
	static DfaState st352[76];
	static DfaState st353[76];
	static DfaState st354[76];
	static DfaState st355[76];
	static DfaState st356[76];
	static DfaState st357[76];
	static DfaState st358[76];
	static DfaState st359[76];
	static DfaState st360[76];
	static DfaState st361[76];
	static DfaState st362[76];
	static DfaState st363[76];
	static DfaState st364[76];
	static DfaState st365[76];
	static DfaState st366[76];
	static DfaState st367[76];
	static DfaState st368[76];
	static DfaState st369[76];
	static DfaState st370[76];
	static DfaState st371[76];
	static DfaState st372[76];
	static DfaState st373[76];
	static DfaState st374[76];
	static DfaState st375[76];
	static DfaState st376[76];
	static DfaState st377[76];
	static DfaState st378[76];
	static DfaState st379[76];
	static DfaState st380[76];
	static DfaState st381[76];
	static DfaState st382[76];
	static DfaState st383[76];
	static DfaState st384[76];
	static DfaState st385[76];
	static DfaState st386[76];
	static DfaState st387[76];
	static DfaState st388[76];
	static DfaState st389[76];
	static DfaState st390[76];
	static DfaState st391[76];
	static DfaState st392[76];
	static DfaState st393[76];
	static DfaState st394[76];
	static DfaState st395[76];
	static DfaState st396[76];
	static DfaState st397[76];
	static DfaState st398[76];
	static DfaState st399[76];
	static DfaState st400[76];
	static DfaState st401[76];
	static DfaState st402[76];
	static DfaState st403[76];
	static DfaState st404[76];
	static DfaState st405[76];
	static DfaState st406[76];
	static DfaState st407[76];
	static DfaState st408[76];
	static DfaState st409[76];
	static DfaState st410[76];
	static DfaState st411[76];
	static DfaState st412[76];
	static DfaState st413[76];
	static DfaState st414[76];
	static DfaState st415[76];
	static DfaState st416[76];
	static DfaState st417[76];
	static DfaState st418[76];
	static DfaState st419[76];
	static DfaState st420[76];
	static DfaState st421[76];
	static DfaState st422[76];
	static DfaState st423[76];
	static DfaState st424[76];
	static DfaState st425[76];
	static DfaState st426[76];
	static DfaState st427[76];
	static DfaState st428[76];
	static DfaState st429[76];
	static DfaState st430[76];
	static DfaState st431[76];
	static DfaState st432[76];
	static DfaState st433[76];
	static DfaState st434[76];
	static DfaState st435[76];
	static DfaState st436[76];
	static DfaState st437[76];
	static DfaState st438[76];
	static DfaState st439[76];
	static DfaState st440[76];
	static DfaState st441[76];
	static DfaState st442[76];
	static DfaState st443[76];
	static DfaState st444[76];
	static DfaState st445[76];
	static DfaState st446[76];
	static DfaState st447[76];
	static DfaState st448[76];
	static DfaState st449[76];
	static DfaState st450[76];
	static DfaState st451[76];
	static DfaState st452[76];
	static DfaState st453[76];
	static DfaState st454[76];
	static DfaState st455[76];
	static DfaState st456[76];
	static DfaState st457[76];
	static DfaState st458[76];
	static DfaState st459[76];
	static DfaState st460[76];
	static DfaState st461[76];
	static DfaState st462[76];
	static DfaState st463[76];
	static DfaState st464[76];
	static DfaState st465[76];
	static DfaState st466[76];
	static DfaState st467[76];
	static DfaState st468[76];
	static DfaState st469[76];
	static DfaState st470[76];
	static DfaState st471[76];
	static DfaState st472[76];
	static DfaState st473[76];
	static DfaState st474[76];
	static DfaState st475[76];
	static DfaState st476[76];
	static DfaState st477[76];
	static DfaState st478[76];
	static DfaState st479[76];
	static DfaState st480[76];
	static DfaState st481[76];
	static DfaState st482[76];
	static DfaState st483[76];
	static DfaState st484[76];
	static DfaState st485[76];
	static DfaState st486[76];
	static DfaState st487[76];
	static DfaState st488[76];
	static DfaState st489[76];
	static DfaState st490[76];
	static DfaState st491[76];
	static DfaState st492[76];
	static DfaState st493[76];
	static DfaState st494[76];
	static DfaState st495[76];
	static DfaState st496[76];
	static DfaState st497[76];
	static DfaState st498[76];
	static DfaState st499[76];
	static DfaState st500[76];
	static DfaState st501[6];
	static DfaState st502[6];
	static DfaState st503[6];
	static DfaState st504[6];
	static DfaState st505[6];
	static DfaState st506[6];
	static DfaState st507[6];
	static DfaState st508[6];
	static DfaState st509[6];
	static DfaState st510[6];
	static DfaState st511[6];
	static DfaState st512[6];
	static DfaState st513[6];
	static DfaState st514[6];
	static DfaState st515[6];
	static DfaState st516[6];
	static DfaState st517[6];
	static DfaState st518[6];
	static DfaState st519[7];
	static DfaState st520[7];
	static DfaState st521[7];
	static DfaState st522[7];
	static DfaState st523[7];
	static DfaState st524[7];
	static DfaState st525[7];
	static DfaState st526[7];
	static DfaState st527[7];
	static DfaState st528[7];
	static DfaState st529[7];
	static DfaState *dfa[530];
	static DfaState dfa_base[];
	static unsigned char *b_class_no[];
	static DfaState accepts[531];
	static DLGChar alternatives[531];
	static ANTLRTokenType (DLGLexer::*actions[114])();
	static unsigned char shift0[257];
	static unsigned char shift1[257];
	static unsigned char shift2[257];
	static unsigned char shift3[257];
	int ZZSHIFT(int c) { return b_class_no[automaton][1+c]; }
//
// 133MR1 Deprecated feature to allow inclusion of user-defined code in DLG class header
//
#ifdef DLGLexerIncludeFile
#include DLGLexerIncludeFile
#endif
};
typedef ANTLRTokenType (DLGLexer::*PtrDLGLexerMemberFunc)();
#endif