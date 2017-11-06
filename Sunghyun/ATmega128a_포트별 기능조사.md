<!DOCTYPE html>
<!-- saved from url=(0895)https://jbt.github.io/markdown-editor/#rZRfaxpBEMff71MM5EWLbWKLNA+lcP4KQtuIsc1rGyIlD6HF5LkYuymiCV4az2g4xYA2WixcrTVXsF/oZu87dPa8eJoYTGiebo/Z/c5nvjO7CyC/SYBV7Fp5A38xMA0d8y3gDRW/dSXp2UZ68bm0sAAfP6R3QZZii6uAFQXzJZA3N9OpnR3AMw14tstPO9ID4LUh6hXAXon+gXa7UV6gVaFhVQxAvWOVW55wOCF73Q2ASltIDDRstFBpAB7qvNa3mE44GV5vUfCJqWu8RgkaOX6e4fmmHWVN4uU1BtaX35bap+0aL/dRqQhOXj4a5ZugcuqdIq8aOMgAdkr4vU21Y2tIOkfmxdBSK+QKcI3Z2pesxKceiAQUpxiIjMeaAMs3KRWjj5vAB/KLiFM+P1HIp4ot9nnv6lFeJYgBIwKQxsYHpSkrCTe+mkiCbG8uVsl1Adk7ALI06LOD4hN7FZxyCo+bk8nnuQQzbJrIW+gKSFPfw/McFprkQ8ZZcaaJQ7TElgF0EIsMPPH1l05zfbAWjzma3nGRobnTNeKBkNiA2b7ol/U1w0/2xYBY6g8xAqZeFuFl/MNor5gVtzRe3x8BOEo0XcT4CG5qv3rGmSHaSe4KUbP3l5/qZKFNGHgr+wOjBBOdn0rg0qOijVJdVhuebim45YX/pzyjfa08UqYmzWmPJ7m1nUr74PWanEj6ILkem7iZY+jItTl0mCP33JJbMsdc5lm40amJCodmkUfvn1xObqfev/M/XnZ07TtXz9lK/CdDpniWPj31Cjn/0sONrV3BZourDLMNojQvDKFP4lwbzihs5aY+rNyimsDdqrnD8Fy9RPSIRJ1nZvT0TTYJ/gE= -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>Markdown Editor</title>
  <script src="./ATmega128a_포트별 기능조사_files/markdown-it.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/markdown-it-footnote.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/highlight.pack.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/emojify.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/codemirror.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/overlay.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/xml.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/markdown.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/gfm.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/javascript.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/css.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/htmlmixed.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/continuelist.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/rawinflate.js.다운로드"></script>
  <script src="./ATmega128a_포트별 기능조사_files/rawdeflate.js.다운로드"></script>
  <link rel="stylesheet" href="./ATmega128a_포트별 기능조사_files/base16-light.css">
  <link rel="stylesheet" href="./ATmega128a_포트별 기능조사_files/codemirror.css">
  <link rel="stylesheet" href="./ATmega128a_포트별 기능조사_files/default.css">
  <style>
    body {margin: 0;}

    .CodeMirror pre{
      line-height: 16px;
    }

    #in{
      position: fixed;
      top: 0;
      left: 0;
      bottom: 0;
      width: 50%;
      height: auto;
      overflow: auto;
      font-size: 12px;
      box-shadow: -10px 2px 6px 10px rgba(0,0,0,0.4);
    }

    .CodeMirror {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      width: auto;
      height: auto;
    }

    .CodeMirror-scroll {
      padding: 30px;
      box-sizing: border-box;
    }

    #out{
      position: fixed;
      top: 0;
      right: 0;
      left: 50%;
      bottom: 0;
      overflow: auto;
      padding: 10px;
      padding-left: 20px;
      color: #444;
      font-family:Georgia, Palatino, 'Palatino Linotype', Times, 'Times New Roman', serif;
      font-size: 16px;
      line-height: 1.5em
    }

    #menu {
      display: none;
      position: fixed;
      background-color: #111;
      border-radius: 5px;
      top: 50%;
      left: 50%;
      width: 250px;
      height: 150px;
      margin-top: -75px;
      margin-left: -125px;
      z-index: 99;
      text-align: center;
      color: white;
    }

    #menu > span {
      display: block;
      font-size: 1.5em;
      line-height: 1.3;
      margin-top: 0.25em;
    }

    #menu > div {
      display: inline-block;
      width: 100px;
      text-align: center;
      vertical-align: top;
      cursor: pointer;
      opacity: 0.7;
    }

    #menu > div:hover {
      opacity: 1;
    }

    #menu svg {
      width: 64px;
      height: 64px;
      margin: 0 auto;
      display: block;
    }
    #menu path {
      fill: #fff;
    }

    #close-menu {
      position: absolute;
      top: 5px;
      right: 9px;
      color: white;
      cursor: pointer;
    }

    .emoji {
      width: 1em;
      height: 1em;
      vertical-align: baseline;
    }

    @media screen and (max-width: 1024px) {
      #in {
        display: none;
      }
      #out {
        left: 0;
        padding-left: 10px;
      }
    }

    .cm-header-1 { font-size: 2em; }
    .cm-header-2 { font-size: 1.75em; }
    .cm-header-3 { font-size: 1.5em; }
    .cm-header-4 { font-size: 1.3em; }
    .cm-header-5 { font-size: 1.2em; }
    .cm-header-6 { font-size: 1.15em; }

    .cm-quote { color: #90a959; font-style: italic; }

    .view #in {
      display: none;
    }
    .view #out {
      left: 0;
      padding-left: 10px;
    }

    a{ color: #0645ad; text-decoration:none;}
    a:visited{ color: #0b0080; }
    a:hover{ color: #06e; }
    a:active{ color:#faa700; }
    a:focus{ outline: thin dotted; }
    a:hover, a:active{ outline: 0; }

    p{margin:1em 0;}

    img{max-width:100%;}

    h1,h2,h3,h4,h5,h6{font-weight:normal;color:#111;line-height:1em;}
    h4,h5,h6{ font-weight: bold; }
    h1{ font-size:2.5em; }
    h2{ font-size:2em; border-bottom:1px solid silver; padding-bottom: 5px; }
    h3{ font-size:1.5em; }
    h4{ font-size:1.2em; }
    h5{ font-size:1em; }
    h6{ font-size:0.9em; }

    blockquote{color:#666666;margin:0;padding-left: 3em;border-left: 0.5em #EEE solid;}
    hr { display: block; height: 2px; border: 0; border-top: 1px solid #aaa;border-bottom: 1px solid #eee; margin: 1em 0; padding: 0; }

    pre, code{
      color: #000;
      font-family:Consolas, "Liberation Mono", Menlo, Courier, monospace;
      font-size: 0.94em; /* 0.94 = 0.88 + (1.00 - 0.88) / 2 */
      border-radius:3px;
      background-color: #F8F8F8;
      border: 1px solid #CCC;
    }
    pre { white-space: pre; white-space: pre-wrap; word-wrap: break-word; padding: 5px;}
    pre code { border: 0px !important; background: transparent !important; line-height: 1.3em; }
    code { padding: 0 3px 0 3px; }
    sub, sup { font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; }
    sup { top: -0.5em; }
    sub { bottom: -0.25em; }
    ul, ol { margin: 1em 0; padding: 0 0 0 2em; }
    li p:last-child { margin:0 }
    dd { margin: 0 0 0 2em; }
    img { border: 0; -ms-interpolation-mode: bicubic; vertical-align: middle; }
    table { border-collapse: collapse; border-spacing: 0; }
    td, th { vertical-align: top; padding: 4px 10px; border: 1px solid #bbb; }
    tr:nth-child(even) td, tr:nth-child(even) th { background: #eee; }
  </style>
</head>
<body>
  <div id="in"><form><textarea id="code" style="display: none;"># (GitHub-Flavored) Markdown Editor

Basic useful feature list:

 * Ctrl+S / Cmd+S to save the file
 * Ctrl+Shift+S / Cmd+Shift+S to choose to save as Markdown or HTML
 * Drag and drop a file into here to load it
 * File contents are saved in the URL so you can share files


I'm no good at writing sample / filler text, so go write something yourself.

Look, a list!

 * foo
 * bar
 * baz

And here's some code! :+1:

```javascript
$(function(){
  $('div').html('I am a div.');
});
```

This is [on GitHub](https://github.com/jbt/markdown-editor) so let me know if I've b0rked it somewhere.


Props to Mr. Doob and his [code editor](http://mrdoob.com/projects/code-editor/), from which
the inspiration to this, and some handy implementation hints, came.

### Stuff used to make this:

 * [markdown-it](https://github.com/markdown-it/markdown-it) for Markdown parsing
 * [CodeMirror](http://codemirror.net/) for the awesome syntax-highlighted editor
 * [highlight.js](http://softwaremaniacs.org/soft/highlight/en/) for syntax highlighting in output code blocks
 * [js-deflate](https://github.com/dankogai/js-deflate) for gzipping of data to make it fit in URLs
</textarea><div class="CodeMirror cm-s-base16-light CodeMirror-wrap"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 402px; left: 134px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-vscrollbar" cm-not-content="true"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-hscrollbar" cm-not-content="true"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div class="CodeMirror-gutter-filler" cm-not-content="true"></div><div class="CodeMirror-scroll" tabindex="-1" draggable="false"><div class="CodeMirror-sizer" style="margin-left: 0px; margin-bottom: -34px; min-height: 568px; padding-right: 0px; padding-bottom: 0px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines"><div style="position: relative; outline: none;"><div class="CodeMirror-measure"><pre><span>xxxxxxxxxx</span></pre></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors" style=""><div class="CodeMirror-cursor" style="left: 104px; top: 368px; height: 16px;">&nbsp;</div></div><div class="CodeMirror-code" style=""><pre class=""><span style="padding-right: 0.1px;"><span class="cm-header cm-header-1"># AVR 포트별 기능 정리</span></span></pre><pre class=""><span style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre><pre class=""><span style="padding-right: 0.1px;"><span class="cm-tag cm-bracket">&lt;</span><span class="cm-tag">br</span><span class="cm-tag cm-bracket">/&gt;</span></span></pre><pre class=""><span style="padding-right: 0.1px;">## port A</span></pre><pre class=""><span style="padding-right: 0.1px;">I/O 또는 Address 로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 일반 범용 I/O로 사용시 신호 방향(DDRA)로 사용 됨</span></pre><pre class=""><span style="padding-right: 0.1px;">* 출력될 데이터 저장</span></pre><pre class=""><span style="padding-right: 0.1px;">* 3개의 레지스터 설정을 통해 제어되는 양방향 범용 I/O포트로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 외부 메모리를 접근하기 위해 사용 될 때는 하위 어드레스 버스로 사용, ALE 신호에 의해 상위 어드레스와 분리 </span></pre><pre class=""><span style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre><pre class=""><span style="padding-right: 0.1px;">## port B</span></pre><pre class=""><span style="padding-right: 0.1px;">I/O로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* PORT A와 동일하게 DDRB, PORTB, PINB 레지스터들에 의해 제어되는 양방향 범용 I/O 포트로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* PORT A와 달리 각마다 핀마다 서로 다른 용도 (PWM 출력, SPI 사용)</span></pre><pre class=""><span style="padding-right: 0.1px;">## port C</span></pre><pre class=""><span style="padding-right: 0.1px;">I/O 또는 Address 로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 포트 C는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다. </span></pre><pre class=""><span style="padding-right: 0.1px;">* 외부 메모리를 액세스 하는 경우에는 A5`A15의 어드레스 출력 포트로 사용된다. </span></pre><pre class=""><span style="padding-right: 0.1px;">## port D</span></pre><pre class=""><span style="padding-right: 0.1px;">I/O로 사용 </span></pre><pre class=""><span style="padding-right: 0.1px;">* 포트 D는 내부 풀업 저항을 갖는 8비트의 양방향 입츨력 포트이다.</span></pre><pre class=""><span style="padding-right: 0.1px;">* 각 핀마다 서로 다른 용도(Timer, USART, TWI)로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">## port E</span></pre><pre><span style="padding-right: 0.1px;">I/O로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 포트 E는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다.</span></pre><pre class=""><span style="padding-right: 0.1px;">* 각 핀마다 서로 다른 용도(TImer, USART)로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">## port F</span></pre><pre><span style="padding-right: 0.1px;">I/O 또는 ADC로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 포트 F는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다.</span></pre><pre><span style="padding-right: 0.1px;">* ATmega128 내부에 있는 8채널(0~7)의 10-bit ADC의 아날로그 입력으로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">## port G</span></pre><pre><span style="padding-right: 0.1px;">I/O로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;">* 포트 G는 내부 풀업 저항을 갖는 5비트의 양방향 입출력 포트이다.</span></pre><pre><span style="padding-right: 0.1px;">*  각 핀마다 서로 다른 용도(Timer, 외부 메모리 I/F 제어신호)로 사용</span></pre><pre class=""><span style="padding-right: 0.1px;"> </span></pre></div></div></div></div></div><div style="position: absolute; height: 30px; width: 1px; top: 568px;"></div><div class="CodeMirror-gutters" style="display: none; height: 1142px;"></div></div></div></form></div>
  <div id="out"><h1>AVR 포트별 기능 정리</h1>
<p><br></p>
<h2>port A</h2>
<p>I/O 또는 Address 로 사용</p>
<ul>
<li>일반 범용 I/O로 사용시 신호 방향(DDRA)로 사용 됨</li>
<li>출력될 데이터 저장</li>
<li>3개의 레지스터 설정을 통해 제어되는 양방향 범용 I/O포트로 사용</li>
<li>외부 메모리를 접근하기 위해 사용 될 때는 하위 어드레스 버스로 사용, ALE 신호에 의해 상위 어드레스와 분리</li>
</ul>
<h2>port B</h2>
<p>I/O로 사용</p>
<ul>
<li>PORT A와 동일하게 DDRB, PORTB, PINB 레지스터들에 의해 제어되는 양방향 범용 I/O 포트로 사용</li>
<li>PORT A와 달리 각마다 핀마다 서로 다른 용도 (PWM 출력, SPI 사용)</li>
</ul>
<h2>port C</h2>
<p>I/O 또는 Address 로 사용</p>
<ul>
<li>포트 C는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다.</li>
<li>외부 메모리를 액세스 하는 경우에는 A5`A15의 어드레스 출력 포트로 사용된다.</li>
</ul>
<h2>port D</h2>
<p>I/O로 사용</p>
<ul>
<li>포트 D는 내부 풀업 저항을 갖는 8비트의 양방향 입츨력 포트이다.</li>
<li>각 핀마다 서로 다른 용도(Timer, USART, TWI)로 사용</li>
</ul>
<h2>port E</h2>
<p>I/O로 사용</p>
<ul>
<li>포트 E는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다.</li>
<li>각 핀마다 서로 다른 용도(TImer, USART)로 사용</li>
</ul>
<h2>port F</h2>
<p>I/O 또는 ADC로 사용</p>
<ul>
<li>포트 F는 내부 풀업 저항을 갖는 8비트의 양방향 입출력 포트이다.</li>
<li>ATmega128 내부에 있는 8채널(0~7)의 10-bit ADC의 아날로그 입력으로 사용</li>
</ul>
<h2>port G</h2>
<p>I/O로 사용</p>
<ul>
<li>포트 G는 내부 풀업 저항을 갖는 5비트의 양방향 입출력 포트이다.</li>
<li>각 핀마다 서로 다른 용도(Timer, 외부 메모리 I/F 제어신호)로 사용</li>
</ul>
</div>
  <div id="menu">
    <span>Save As</span>
    <div id="saveas-markdown">
      <svg height="64" width="64" xmlns="http://www.w3.org/2000/svg">
        <g transform="scale(0.0625)">
          <path d="M950.154 192H73.846C33.127 192 0 225.12699999999995 0 265.846v492.308C0 798.875 33.127 832 73.846 832h876.308c40.721 0 73.846-33.125 73.846-73.846V265.846C1024 225.12699999999995 990.875 192 950.154 192zM576 703.875L448 704V512l-96 123.077L256 512v192H128V320h128l96 128 96-128 128-0.125V703.875zM767.091 735.875L608 512h96V320h128v192h96L767.091 735.875z"></path>
        </g>
      </svg>

      <span>Markdown</span>
    </div>
    <div id="saveas-html">
      <svg height="64" width="64" xmlns="http://www.w3.org/2000/svg">
        <g transform="scale(0.0625) translate(64,0)">
          <path d="M608 192l-96 96 224 224L512 736l96 96 288-320L608 192zM288 192L0 512l288 320 96-96L160 512l224-224L288 192z"></path>
        </g>
      </svg>

      <span>HTML</span>
    </div>
    <a id="close-menu">×</a>
  </div>
  <script type="text/javascript">
    var URL = window.URL || window.webkitURL || window.mozURL || window.msURL;
    navigator.saveBlob = navigator.saveBlob || navigator.msSaveBlob || navigator.mozSaveBlob || navigator.webkitSaveBlob;
    window.saveAs = window.saveAs || window.webkitSaveAs || window.mozSaveAs || window.msSaveAs;

    // Because highlight.js is a bit awkward at times
    var languageOverrides = {
      js: 'javascript',
      html: 'xml'
    };

    emojify.setConfig({ img_dir: 'emoji' });

    var md = markdownit({
      html: true,
      linkify: true,
      highlight: function(code, lang){
        if(languageOverrides[lang]) lang = languageOverrides[lang];
        if(lang && hljs.getLanguage(lang)){
          try {
            return hljs.highlight(lang, code).value;
          }catch(e){}
        }
        return '';
      }
    })
      .use(markdownitFootnote);


    var hashto;

    function update(e){
      setOutput(e.getValue());

      clearTimeout(hashto);
      hashto = setTimeout(updateHash, 1000);
    }

    function setOutput(val){
      val = val.replace(/<equation>((.*?\n)*?.*?)<\/equation>/ig, function(a, b){
        return '<img src="http://latex.codecogs.com/png.latex?' + encodeURIComponent(b) + '" />';
      });

      var out = document.getElementById('out');
      var old = out.cloneNode(true);
      out.innerHTML = md.render(val);
      emojify.run(out);

      var allold = old.getElementsByTagName("*");
      if (allold === undefined) return;

      var allnew = out.getElementsByTagName("*");
      if (allnew === undefined) return;

      for (var i = 0, max = Math.min(allold.length, allnew.length); i < max; i++) {
        if (!allold[i].isEqualNode(allnew[i])) {
          out.scrollTop = allnew[i].offsetTop;
          return;
        }
      }
    }

    var editor = CodeMirror.fromTextArea(document.getElementById('code'), {
      mode: 'gfm',
      lineNumbers: false,
      matchBrackets: true,
      lineWrapping: true,
      theme: 'base16-light',
      extraKeys: {"Enter": "newlineAndIndentContinueMarkdownList"}
    });

    editor.on('change', update);





    document.addEventListener('drop', function(e){
      e.preventDefault();
      e.stopPropagation();

      var reader = new FileReader();
      reader.onload = function(e){
        editor.setValue(e.target.result);
      };

      reader.readAsText(e.dataTransfer.files[0]);
    }, false);





    function saveAsMarkdown(){
      save(editor.getValue(), "untitled.md");
    }

    function saveAsHtml() {
      save(document.getElementById('out').innerHTML, "untitled.html");
    }

    document.getElementById('saveas-markdown').addEventListener('click', function() {
      saveAsMarkdown();
      hideMenu();
    });

    document.getElementById('saveas-html').addEventListener('click', function() {
      saveAsHtml();
      hideMenu();
    });

    function save(code, name){
      var blob = new Blob([code], { type: 'text/plain' });
      if(window.saveAs){
        window.saveAs(blob, name);
      }else if(navigator.saveBlob){
        navigator.saveBlob(blob, name);
      }else{
        url = URL.createObjectURL(blob);
        var link = document.createElement("a");
        link.setAttribute("href",url);
        link.setAttribute("download",name);
        var event = document.createEvent('MouseEvents');
        event.initMouseEvent('click', true, true, window, 1, 0, 0, 0, 0, false, false, false, false, 0, null);
        link.dispatchEvent(event);
      }
    }



    var menuVisible = false;
    var menu = document.getElementById('menu');

    function showMenu() {
      menuVisible = true;
      menu.style.display = 'block';
    }

    function hideMenu() {
      menuVisible = false;
      menu.style.display = 'none';
    }

    document.getElementById('close-menu').addEventListener('click', function(){
      hideMenu();
    });




    document.addEventListener('keydown', function(e){
      if(e.keyCode == 83 && (e.ctrlKey || e.metaKey)){
        e.shiftKey ? showMenu() : saveAsMarkdown();

        e.preventDefault();
        return false;
      }

      if(e.keyCode === 27 && menuVisible){
        hideMenu();

        e.preventDefault();
        return false;
      }
    });




    function updateHash(){
      window.location.hash = btoa( // base64 so url-safe
        RawDeflate.deflate( // gzip
          unescape(encodeURIComponent( // convert to utf8
            editor.getValue()
          ))
        )
      );
    }

    if(window.location.hash){
      var h = window.location.hash.replace(/^#/, '');
      if(h.slice(0,5) == 'view:'){
        setOutput(decodeURIComponent(escape(RawDeflate.inflate(atob(h.slice(5))))));
        document.body.className = 'view';
      }else{
        editor.setValue(
          decodeURIComponent(escape(
            RawDeflate.inflate(
              atob(
                h
              )
            )
          ))
        );
        update(editor);
        editor.focus();
      }
    }else{
      update(editor);
      editor.focus();
    }
  </script>
  <script src="./ATmega128a_포트별 기능조사_files/tracker.js.다운로드" data-gs="GSN-265185-D" async=""></script>


</body></html>