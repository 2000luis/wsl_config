set number
set exrc
set nohlsearch
set hidden
set tabstop=4 softtabstop=4
set shiftwidth=4
set expandtab
set smartindent
set incsearch
set scrolloff=8
set signcolumn=yes
set colorcolumn=100
set mouse=a
set showcmd
set encoding=utf-8
set showmatch
set relativenumber
set ma
" set nowrap

if has("syntax")
    syntax on
endif

"leader
let mapleader=" "

"Plugins
call plug#begin('/home/luisepp/.config/nvim/autoload/Plugged')

"cursors
Plug 'terryma/vim-multiple-cursors'

"Themes plugs
Plug 'fcpg/vim-fahrenheit'
Plug 'Rigellute/rigel'

"javaplugin
Plug 'pangloss/vim-javascript'
Plug 'maxmellon/vim-jsx-pretty'

Plug 'nvim-lua/popup.nvim'
Plug 'nvim-lua/plenary.nvim'
Plug 'nvim-telescope/telescope.nvim', { 'tag': '0.1.0' }
Plug 'kyazdani42/nvim-web-devicons'

"tagbar
Plug 'preservim/tagbar'

"commentarios
Plug 'tpope/vim-commentary'

"themes
Plug 'vim-airline/vim-airline'
Plug 'chrisbra/csv.vim'
Plug 'vim-airline/vim-airline-themes'
" Plug.vim
Plug 'lambdalisue/battery.vim'

"nerdtree
Plug 'preservim/nerdtree'

"emmet
Plug 'mattn/emmet-vim'

"vim-surround
Plug 'tpope/vim-surround'

"treesitter
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}

"treesitter-context
Plug 'nvim-treesitter/nvim-treesitter-context'

"themes
Plug 'folke/tokyonight.nvim', { 'branch': 'main' }
Plug 'bignimbus/pop-punk.vim' 

call plug#end()


" Vim Script
" colorscheme tokyonight

" There are also colorschemes for the different styles
" colorscheme tokyonight-night
" colorscheme tokyonight-storm
" colorscheme tokyonight-day
colorscheme tokyonight-moon


" colorscheme pop-punk



" " Set contrast.
 "        " This configuration option should be placed before `colorscheme gruvbox-material`.
 "        " Available values: 'hard', 'medium'(default), 'soft'
 "        let g:gruvbox_material_background = 'soft'
 "        " For better performance
 "        let g:gruvbox_material_better_performance = 1
 "        colorscheme gruvbox-material


" Important!!
        " if has('termguicolors')
        "   set termguicolors
        " endif
        " " The configuration options should be placed before `colorscheme edge`.
        " let g:edge_style = 'aura'
        " let g:edge_better_performance = 1
        " colorscheme edge


"tagbar config
nmap <F8> :TagbarToggle<CR>

"airline config
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#formatter = 'unique_tail'

"theme
let g:airline_theme = 'onedark'

"Colorscheme rigel config
syntax enable
highlight Normal guibg=cleared 
highlight Normal guifg=cleared
highlight Normal ctermfg=NONE
highlight Normal ctermbg=NONE

"autocompletar
inoremap ( ()<esc>i
inoremap ) (<CR><CR>)<esc>kcc
inoremap { {}<esc>i
inoremap } {<CR><CR>}<esc>kcc
inoremap [ []<esc>i
inoremap ] [<CR><CR>]<esc>kcc
" inoremap < <><esc>i
inoremap ' ''<esc>i
inoremap " ""<esc>i
" inoremap > <><CR></><esc>O
inoremap jj <esc>
imap kk <C-y>,
imap hh <esc>A
imap HH <esc>I
inoremap =? ()<space>=><space>{<CR>}<esc>O
inoremap cc <esc>cc
inoremap vv <esc>dd
inoremap gg <esc>ciw
inoremap ` ``<esc>i
" inoremap ; ;<esc>o

imap <Left> <esc><C-w><Left>
imap <Right> <esc><C-w><Right>
" imap <Down> <esc><C-w><Down>
" imap <Up> <esc><C-w><Up>

nmap <Left> <esc><C-w><Left>
nmap <Right> <esc><C-w><Right>
nmap <Down> <esc><C-w><Down>
nmap <Up> <esc><C-w><Up>

"snippets

    ""Search
    nmap <tab>s <F3>/
    imap <tab>s <F3>/
    " imap <tab><tab> <esc>/
    " nmap <tab><tab> /

    ""Delete
    imap s.dall <esc>GVggc
    imap <BS> <C-w>

    ""CSS
    imap s.com /**/<esc>hi

    ""Space
    imap s.<space> <space><space><esc>i
    imap .. <CR><CR><esc>kcc


    ""Move
    imap s.H <esc>i
    imap s.L <esc>la

    ""Enter
    imap s.o <esc>o

    ""Save
    imap s.s <esc><space>s

    ""React

        "Return
        imap s.return return<space>)

        "import
        imap s.import import<space><space>from<space>'hh;<esc>F<space>;i
        imap s.rcss import<space>'./hh;<esc>F'i
        imap s.icss @import<space>".csshh;<esc>F.i
        imap s.react import<space>React<space>from<space>'reacthh;

        "useState
        imap s.useS const<space>[??,<space>set??hh<space>=<space>useState(<esc>0f?vl<C-n>c

        "function
        imap s.function export<space>function<space>(hh}return)<esc>kkf(i
            
            "bajar function
            imap <tab><CR> <esc>jci(
            imap <tab>{ <esc>jci{

        "arrow function
        imap s.fun (s.L=>{

        "const
        imap s.arrow const<space><space>=<space>=?<esc>kf<space>a
        imap s.const const<space><space>=<space><esc>F<space>i
        
        "alinar
        imap s.ali <esc>ggvG=<C-o>

        "var
        imap s.v var(--

        "export
        imap s.ex export<space>default<space>
        
    ""Django
        "jinja
        imap s.ji {%%<esc>i<space><esc>i<space>
        "block
        imap s.bk {%%<esc>i<space>block<space><esc>i<space>
        imap s.end {%%<esc>i<space>endblock<space><esc>
        imap s.extend {%%<esc>i<space>extends<space><esc>i<space>'.html<esc>F.i

    ""C++
    imap c.# #include<space><iostream><CR>using<space>namespace<space>std;<CR><CR>int<space>main(hh{....

    imap cout cout<space><<<space>;<esc>i

    imap cin cin<space>>><space>;<esc>i

    imap c.out <esc>f;i<space><<<space>

    imap c.struck <tab><tab>std;<CR>js..struck<space><space><CR>;<esc>i{<esc>kfkla

    imap c.for for(int<space>i<space>=<space>0;<space>i<space><<space>n;<space>i++<esc>o{..

    imap c.void void<space>(hh;<esc>F(i
    imap c.fv void<space>(hh<CR>{..<esc>kkf(i
    imap c.class class<space><CR>{..private:<CR><CR><CR>public:<CR><CR><esc><tab><tab>}<CR>%kf<space>a

" Default mapping
let g:multi_cursor_start_word_key      = '<C-n>'
let g:multi_cursor_select_all_word_key = '<A-n>'
let g:multi_cursor_start_key           = 'g<C-n>'
let g:multi_cursor_select_all_key      = 'g<A-n>'
let g:multi_cursor_next_key            = '<C-n>'
let g:multi_cursor_prev_key            = '<C-p>'
let g:multi_cursor_skip_key            = '<C-x>'
let g:multi_cursor_quit_key            = '<Esc>'

" Default highlighting (see help :highlight and help :highlight-link)
highlight multiple_cursors_cursor term=reverse cterm=reverse gui=reverse
highlight link multiple_cursors_visual Visual


