#!/bin/bash
URL="https://raw.githubusercontent.com/viruskizz/42bangkok-piscinec-scripts/refs/heads/main/rush01"
FILES=("main.py" "test.py" "validate_views.py" "generator.py" "run.sh")
PWD=$(dirname "$0")
DIR=rush01_tester
if [ ! -d "$DIR" ]; then
    mkdir "$DIR"
else
    rm -rf "${DIR:?}"/*
fi
for file in "${FILES[@]}"; do
    curl -sL "${URL}/${file}" -o "${DIR}/${file}"
done
