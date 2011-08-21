<div id="pandora-container" class="container_12 clearfix">
  <div id="header" class="grid_12">
    <div class="right"></div>
    <div class="bottom"></div>
    <div class="left"></div>
    <?php print $content['header']; ?>
  </div>
  <div id="navigation" class="grid_12">
    <div class="right"></div>
    <div class="br"></div>
    <div class="bottom"></div>
    <div class="bl"></div>
    <div class="left"></div>
    <?php print $content['navigation']; ?>
  </div>
  <div id="content" class="grid_8">
    <div class="tl"></div>
    <div class="top"></div>
    <div class="tr"></div>
    <div class="right"></div>
    <div class="br"></div>
    <div class="bottom"></div>
    <div class="bl"></div>
    <div class="left"></div>
    <div id="content-inner"><?php print $content['main']; ?></div>
  </div>
  <div id="sidebar-secondary" class="grid_4"><?php print $content['secondary']; ?></div>
</div>
<div id="footer"><?php print $content['footer']; ?></div>