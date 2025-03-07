> [!CAUTION]
> **This tree-sitter parser is in a pre-alpha/experimental/testing stage. I have no plans for official support or answering issues at this time.
> I will be working towards a formalized release, but until then, all features are prone to breaking changes - often. Use completely at
> your own risk.**

# tree-sitter-spss
A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar and parser for [IBM SPSS](https://www.ibm.com/spss) command syntax.

## Table of Contents
[Why Make This?](#why-make-this?)

[Brief Description of SPSS Syntax](#brief-description-of-spss-syntax)

[Disclaimers](#disclaimers)

## Why Make This?
The most straightforward answer: I thought it'd be fun! I wanted to try writing a working tree-sitter parser for a language that wasn't
yet available, and thought this would be a good challenge. I also do use SPSS syntax a fair bit, and was looking to improve my own editing experience.
I find the SPSS built-in syntax editor to be clunky and unenjoyable, even though it is rather convenient. Having this parser is also useful for when I
inject SPSS syntax for demonstration into my [Quarto](https://quarto.org/) documents.

## Brief Description of SPSS Syntax
SPSS is primarily presented as a menu-driven statistical program, and most users will likely navigate analyses in a purely GUI format. 
Under-the-hood, SPSS is actually translating these menu selections and options into command syntax, which in turn, is run to produce output. 
This pseudo-code can work well to emulate the more text-driven programming of languages like [R](https://www.r-project.org) or [Python](https://www.python.org/),
while still providing the general ease of use and accessibility of SPSS. The command syntax can be stored in a .sps file, which is actually
a plain text file that can be opened and edited in any regular text editor, or in SPSS's own built-in syntax editor.

It's worth noting that SPSS's command syntax is fairly simplistic relative to formal programming languages, but as stated on [IBM's own 
website](https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=tutorial-working-syntax), "It also provides some functionality not 
found in the menus and dialog boxes. Most commands are accessible from the menus and dialog boxes. However, some commands and 
options are available only by using the command language." Therefore, it is worth having a reasonable grasp on the command syntax,
so one can access the full array of features.

The syntax can be thought of as a list of sequential commands, which are each modified by subcommands and keywords. The most authoritative
reference on the subject is 
the [Command Syntax Reference Guide for SPSS 30](https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-introduction-guide-command-syntax).
In that reference, the ['Universals' section](https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-universals) describes the general flow
and format of commands and subcommands, and the syntax that must be used to write in this format.

In modern versions of SPSS, there is also the included option to integrate directly [with R](https://www.ibm.com/docs/en/spss-statistics/saas?topic=r-) 
and [with Python](https://www.ibm.com/docs/en/spss-statistics/saas?topic=python-overview), so that you can use these languages directly in the syntax.

## Disclaimers
SPSS and the command syntax are created and owned by IBM. I make no claim of ownership to these products and have only used the publically available resources 
linked above to produce this open-source project. This project only provides a parser to better highlight, indent, and structure this language - but does
not provide a way to run the syntax itself; that is only available through a officiallly licensced copy of 
SPSS, [which can be purchased on IBM's website](https://www.ibm.com/products/spss-statistics/pricing).
