About
=====

A simple program to prepend on the command line to disable Transparent Huge
Pages (THP) on Linux. This eliminates noise in performance benchmarks that
stress the TLB from user space on systems on which you have no root access.

Usage: `nothp FILE [ARG...]`
