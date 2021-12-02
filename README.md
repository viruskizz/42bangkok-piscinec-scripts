<div id="top"></div>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/viruskizz/42bangkok-piscinec-scripts">
    <img src="https://github.com/viruskizz/42bangkok-piscinec-scripts/blob/main/logo-42-test-suite.png" alt="Logo" height="180">
  </a>
</div>



<!-- ABOUT THE PROJECT -->
## 42Bangkok Piscine C Test Script

[![Product Name Screen Shot][product-screenshot]](https://github.com/viruskizz/42bangkok-piscinec-scripts)

This repository is use for help pisciner to test thier own code in C-Project. There are single test script for individual exercise while coding and automate evaluate-c script for evaluate other piscine. Also there other utility file for example vim setup gitignore suggested template 

The automate script will compile all code and file test execise in ONE-CLICK.

Thank you to *nsmitsom(Best)* for supporting test file in main.c

_updated at 2021-12-02_


<!-- GETTING STARTED -->
## Getting Started

You can download or copy the separate file or clone entire project.
- `c0x` meant to working c-project directory that include exercise file (ft_**) and or working file
- `check_c0x` meant to test c-project directory that include only main.c
- `.vimrc.template` meant to vim settup template
- `.gitignore.template`  meant to  gitignore file suggestion


### Installation

1. Vim Setup
move and rename template file to working file as `.vimrc` in _root directory_
```
mv .vimrc.template ~/.vimrc
```

2. gitignore Setup
move and rename template file to working file as `.gitignore` in _root project_
```
mv .gitignore.template ~/<exercise_path>/.gitignore
```

3. Test Script Setup
move script file to _root directory_
```
mv test-c.sh ~/test-c.sh
chmod +x ~/test-c.sh
```

4. Evaluate C Script Setup
move script file to _root directory_
```
mv evaluate-c.sh ~/evaluate-c.sh
chmod +x ~/evaluate-c.sh
```

<!-- USAGE EXAMPLES -->
## Usage

Not spcial use for vim and gitignore. You can learn more about [vim editor](https://www.vim.org/) and [gitignore file](https://git-scm.com/docs/gitignore) to configuration futher as you need.

**To Testing your exercise**
change to your _exercise directory_ and execute script and your file
```sh
cd
~/test-c.sh 
```
**To Evaluating your friend**
change to your _root directory_ and run script with your exercise (including with main.c ready for test) or using check_c0x and your friend friend exercise that would be evaluated.

```sh
# clone your friend project
git clone http://git-x-x.com/xxxxx/ c00

# run automate test
# ~/evaluate-c.sh <test_dir> <evaluated_dir>
~/evaluate-c.sh check_c00
```

_\~ขอให้โชคดีกับการ Piscine ครับ GoodLuck xD\~_

<!-- CONTACT -->
## Contact

Araiva
   - Twitter: [@viruskizz](https://mobile.twitter.com/viruskizz)
   - Discord: [Araiva#1851](https://discord.com/)


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[product-screenshot]: https://github.com/viruskizz/42bangkok-piscinec-scripts/blob/main/assets/evaluate-result-script.png