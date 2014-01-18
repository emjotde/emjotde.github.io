#!/bin/bash -v

jekyll build
git commit -a -m 'Commit local changes to Jekyll sources'
git checkout master
rsync -ca _site/* .
rm -rf _site
git add *
git commit -a -m 'Commit static pages'
git push
git checkout jekyll