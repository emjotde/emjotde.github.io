---
layout: default
title: SyMGIZA++
software: true
nav: projects
summary: Symmetrized word alignment models. On average results in better alignment quality than MGIZA++.
---

Download from [github](https://github.com/emjotde/symgiza-pp)

SyMGIZA++ is a tool based on GIZA++ and MGIZA++. It extends the algorithms employed in both programs with a symmetrization mechanism, i.e. two directed word alignment models are trained in parallel and parameters of both models can be used between iterations to compute the parameters of the next model. We were able to show that this information interchange between models tends to improve word alignment quality directly and translation quality indirectly. 

The main features of SyMGIZA++ are:
* the symmetrization mechanism,
* multi-threading - SyMGIZA++ inherits the multithreading capacities of MGIZA++, the two directed models are trained simultanously.

If you use this, please cite:

[__SyMGiza++: Symmetrized Word Alignment Models for Machine Translation.__](http://emjotde.github.io/publications/pdf/mjd2011siis.pdf) Marcin Junczys-Dowmunt and Arkadiusz Szał. In Pascal Bouvry, Mieczyslaw A. Klopotek, Franck Leprévost, Malgorzata Marciniak, Agnieszka Mykowiecka, and Henryk Rybinski, editors, Security and Intelligent Information Systems (SIIS), volume 7053 of Lecture Notes in Computer Science, pages 379-390, Warsaw, Poland, 2011. Springer.

    @inproceedings{junczys_siis_2011,
      author = {Marcin Junczys-Dowmunt and Arkadiusz Szał},
      title = {SyMGiza++: Symmetrized Word Alignment Models for Machine Translation},
      booktitle = {Security and Intelligent Information Systems (SIIS)},
      year = {2011},
      editor = {Bouvry, Pascal and Klopotek, Mieczyslaw A. and Leprévost, Franck and Marciniak, Malgorzata and Mykowiecka, Agnieszka and Rybinski, Henryk},
      series = {Lecture Notes in Computer Science},
      volume = {7053},
      pages = {379-390},
      address = {Warsaw, Poland},
      publisher = {Springer},
      url = {http://emjotde.github.io/publications/pdf/mjd2011siis.pdf},
    }
