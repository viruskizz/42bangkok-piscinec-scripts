#!/usr/bin/perl
use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) >= 3);
my ($x, $y, $density) = @ARGV;

my $empty;
my $obs;
my $full;
if (scalar(@ARGV) == 6) {
	$empty = "$ARGV[3]";
	$obs = "$ARGV[4]";
	$full = "$ARGV[5]";
} else {
	$empty = ".";
	$obs = "o";
	$full = "x";
}

print "$y$empty$obs$full\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "$obs";
		}
		else {
			print "$empty";
		}
	}
	print "\n";
}