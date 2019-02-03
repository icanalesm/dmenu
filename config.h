/* See LICENSE file for copyright and license details. */

/* Default settings; can be overriden by command line. */

/* appearance */
#define CLR_NORFG    "#BBBBBB"
#define CLR_NORBG    "#222222"
#define CLR_SELFG    "#EEEEEE"
#define CLR_SELBG    "#005577"
#define CLR_OUTFG    "#000000"
#define CLR_OUTBG    "#00FFFF"
#define FNT_SANS     "sans:size=10"

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	FNT_SANS
};

/*
 * -nf option; normal foreground color 
 * -nb option; normal background color
 * -sf option; selected foreground color
 * -sb option; selected background color
 */
static const char *colors[SchemeLast][2] = {
	/*               foreground  background */
	[SchemeNorm] = { CLR_NORFG,  CLR_NORBG },
	[SchemeSel]  = { CLR_SELFG,  CLR_SELBG },
	[SchemeOut]  = { CLR_OUTFG,  CLR_OUTBG },
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
