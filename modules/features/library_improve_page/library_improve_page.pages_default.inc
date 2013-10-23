<?php
/**
 * @file
 * library_improve_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function library_improve_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'improve_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Improve landing page';
  $page->admin_description = 'A landing page for helpers.';
  $page->path = 'improve';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Improve',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_improve_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'improve_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onethreetwo';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'panel-row-top',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '3',
          1 => '1_',
          2 => '2',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      '1_' => array(
        'type' => 'region',
        'title' => 'Second',
        'width' => '33.985343023515924',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'region',
        'title' => 'Third',
        'width' => '32.995273957101055',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'region',
        'title' => 'First',
        'width' => '33.019383019383014',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      '1_' => NULL,
      2 => NULL,
      3 => NULL,
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'col1';
    $pane->type = 'views_panes';
    $pane->subtype = 'improve_scenarios-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['col1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'col2';
    $pane->type = 'views_panes';
    $pane->subtype = 'improve_scenarios-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['col2'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'col3';
    $pane->type = 'views_panes';
    $pane->subtype = 'improve_scenarios-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['col3'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="custom-page-left">
<h1>Improve scenario meta-data</h1>
<p>Some scenarios that have been added only have the bare-basics. Another way to contribute to the library is to dig into existing scenarios and update their meta data to make them more findable.</p>
</div>
<div class="custom-page-right">
<img src="//%token:site:url-brief/profiles/openfutures/modules/features/library_improve_page/images/improve.png" />
</div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['top'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['improve_landing_page'] = $page;

  return $pages;

}
