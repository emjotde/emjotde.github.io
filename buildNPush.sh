#!/bin/bash -v

git pull
git checkout jekyll
jekyll build
git checkout master
mv _site/* .
rm -rf _site
git add *
git commit -a -m 'Push static pages'
git push
git checkout jekyll