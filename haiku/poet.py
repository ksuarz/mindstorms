#!/usr/bin/env python
"""
Generates random haikus.

This takes a corpus of words, along with their syllables, and randomly composes
them into a haiku. This does not use any sort of n-gram model, so the output
will be nonsensical.
"""

import argparse
import random
import sys

def read_words(filename):
    """
    Reads words and their syllable counts and loads them into lists.

    The file is simply formatted: the first column is the word, and the second
    column is the syllable count. This loads all of these words into lists based
    on syllable length and joins them into a dictionary. This returns the
    dictionary of lists, as well as a weight dependent on the size of the lists.
    """
    lists = {}
    weights = {}
    total = 0
    try:
        with open(filename) as file:
            for line in file:
                total += 1
                word, syllable = line.split()
                syllable = int(syllable)
                if lists.has_key(syllable):
                    lists[syllable].append(word)
                    weights[syllable] = 0
                else:
                    lists[syllable] = [word]

        for syllable, list in lists.iteritems():
            weights[syllable] = len(list) * 1.0 / total
    except IOError as e:
        print e

    return lists, weights


def weighted_random(dict, weights):
    """
    Selects a random value from a dictionary based on weights.
    """
    r = random.uniform(0, 1.0)
    limit = 0.0
    for s, weight in weights.iteritems():
        if limit + weight > r:
            return random.choice(dict[s]), s
        limit += weight

    # Should not happen except for floating-point misapproximation
    s = random.choice(dict.iterkeys())
    return random.choice(dict[s], s)


def get_haiku(words, weights):
    """
    Returns a haiku.

    Given a dictionary of word-syllable lists, this randomly composes a
    five-seven-five haiku and returns it.
    """
    haiku = []
    for syllables in [5, 7, 5]:
        line = []
        while syllables > 0:
            word, s = weighted_random(words, weights)
            if s <= syllables:
                line.append(word)
                syllables -= s
        haiku.append(" ".join(line))

    return "\n".join(haiku)


if __name__ == "__main__":
    # Set up command line options
    parser = argparse.ArgumentParser(
            prog='poet',
            description='Writes random haikus.',
            epilog='Poetry made fun!')
    parser.add_argument(
            'filename',
            help='A text file containing the words to train on.')

    words, weights = read_words(**parser.parse_args().__dict__)
    while True:
        try:
            print get_haiku(words, weights)
            raw_input("\nHit enter for another haiku.\n")
        except KeyboardInterrupt:
            print "\nGoodbye!"
            break
