<div id="top"></div>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/viruskizz/42bangkok-piscinec-scripts">
    <img src="https://raw.githubusercontent.com/viruskizz/42bangkok-piscinec-scripts/main/logo-42-test-suite.png" alt="Logo" height="180">
  </a>
</div>

<!-- [![Product Name Screen Shot][product-screenshot]](https://github.com/viruskizz/42bangkok-piscinec-scripts) -->

<div align="center">
	<h2>42Bangkok Piscine C Test Script</h2>	
  <a href="https://github.com/viruskizz/42bangkok-piscinec-scripts">
    <img src="https://raw.githubusercontent.com/viruskizz/42bangkok-piscinec-scripts/main/assets/evaluate-result-script.png" alt="Logo" width="80%">
  </a>
</div>

<br/>

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

### Testing Project Directory

:clipboard: Araiva Tester
- :open_file_folder: c02
- :open_file_folder: c03
- :open_file_folder: c04
- :open_file_folder: c05
- :open_file_folder: c06

:clipboard: nsmitsom Tester (100%)
- :open_file_folder: check_c00
- :open_file_folder: check_c01
- :open_file_folder: check_c02
- :open_file_folder: check_c03
- :open_file_folder: check_c04
- :open_file_folder: check_c07

## Fully Installation

### Install by git
clone script project into your root dir **(Recommended)**
```sh
git clone https://github.com/viruskizz/42bangkok-piscinec-scripts.git ~/
```

#### Setup Evaluate script

copy `evaluate-c.sh` into root directory
```sh
cp ~/42bangkok-piscinec-scripts/evaluate-c.sh ~/evaluate-c.sh
```

grant permission to script file
```sh
chmod +x ~/evaluate-c.sh
```

#### Vim Setup
move and rename template file to working file as `.vimrc` in _root directory_
```
cp ~/42bangkok-piscinec-scripts/.vimrc.template ~/.vimrc
```


### Alternate Solution with downloading

You also can download main.c testing in release asset on Github following by this link [Stable-Release](https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/tag/stable) select your c subject as you wish and copy it into your root working directory. by the way, you can use http download into your directoy instead.


1. Download
```sh
curl https://github.com/.../check_c00.tar.gz -OL check_c00.tar.gz
```
2. Ungzip
```sh
tar -xvzf check_c00.tar.gz
```

#### Testing file url
Change url in curl command `curl <url> -OL filename.tar.gz`
- [check_c01]
- [check_c02]
- [check_c03]
- [check_c04]
- [araiva_c05]
- [check_c07]

<!-- USAGE EXAMPLES -->
## Usage

Not spcial use for `vim` and `gitignore`. You can learn more about [vim editor](https://www.vim.org/) and [gitignore file](https://git-scm.com/docs/gitignore) to configuration futher as you need.

**To Evaluating your friend**

change to your _root directory_ and run script with your exercise (including with main.c ready for test) or using check_c0x and your friend friend exercise that would be evaluated.

clone your friend project
```sh
git clone http://git-x-x.com/xxxxx/ c00
```

run automate test
~/evaluate-c.sh <test_dir> <evaluated_dir>
```sh
~/evaluate-c.sh ~/42bangkok-piscinec-scripts/check_c00 c00
```


_\~ขอให้โชคดีกับการ Piscine ครับ GoodLuck xD\~_

<!-- CONTACT -->
## Contact

Araiva
   - Twitter: [@viruskizz](https://mobile.twitter.com/viruskizz)
   - Discord: [Araiva#1851](https://discord.com/)


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[product-screenshot]: https://raw.githubusercontent.com/viruskizz/42bangkok-piscinec-scripts/main/assets/evaluate-result-script.png

[check_c00]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c00.tar.gz
[check_c01]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c01.tar.gz
[check_c02]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c02.tar.gz
[check_c03]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c03.tar.gz
[check_c04]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c04.tar.gz
[araiva_c05]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/araiva_c05.tar.gz
[check_c07]: https://github.com/viruskizz/42bangkok-piscinec-scripts/releases/download/stable/check_c07.tar.gz
