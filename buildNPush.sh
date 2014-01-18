#!/bin/bash -v

jekyll build
git commit -a -m 'Commit local changes to Jekyll sources'
git checkout master
rsync -a _site/* .
rm -rf _site
git add *
git commit -a -m 'Push static pages'
git push
git checkout jekyll