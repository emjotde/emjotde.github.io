#!/bin/bash -v

git commit -a -m 'Commit local changes to Jekyll sources'
git up
git push
bundle exec jekyll build
git checkout master
rsync -ca build/* .
rm -rf build
git add *
git commit -a -m 'Commit static pages'
git push
git checkout jekyll