#!/bin/bash -v

git commit -a -m 'Commit local changes to Jekyll sources'
git push
jekyll build
git checkout master
git pull
rsync -ca _site/* .
rm -rf _site
git add *
git commit -a -m 'Commit static pages'
git push
git checkout jekyll