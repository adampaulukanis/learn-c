#!/bin/ksh

rm -rf ex1-16
make ex1-16

echo << KONIEC
Hello world
The quick brown fox jumps over the lazy dog near the riverbank at sunset.
x
Quantum entanglement remains one of the strangest phenomena in modern physics, defying classical intuition.
Coffee.
Sometimes I wonder if parallel universes are quietly judging our life choices from a distance we can't perceive.
42
Artificial intelligence systems in 2026 have become surprisingly good at generating existential dread on demand.
Rain
The old wooden pier creaked under our footsteps while the salty wind carried memories of summers long forgotten.
:)
Machine learning models trained on internet comments tend to develop a very particular kind of sarcastic personality.
beep
According to recent astronomical observations, the universe continues expanding at an accelerating rate and nobody asked it to calm down.
ok
KONIEC

cat test-ex1-16.sh | ./ex1-16
