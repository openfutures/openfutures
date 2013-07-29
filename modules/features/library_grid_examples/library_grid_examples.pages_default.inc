<?php
/**
 * @file
 * library_grid_examples.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function library_grid_examples_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'grid_examples';
  $page->task = 'page';
  $page->admin_title = 'Grid examples';
  $page->admin_description = 'Example page layouts that are available across the Open Futures site.';
  $page->path = 'grid-examples';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_grid_examples_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'grid_examples';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Eight Four',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'grid-examples/eightfour',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'eightfour';
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
          2 => 2,
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
        'title' => 'Hero',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'onethreetwo-hero',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_1',
          1 => 'column_2',
          2 => 'column_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'column_1' => array(
        'type' => 'region',
        'title' => 'Column 1',
        'width' => '33.36031834279618',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col1',
      ),
      'column_2' => array(
        'type' => 'region',
        'title' => 'Column 2',
        'width' => '33.61856451244284',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col2',
      ),
      'column_3' => array(
        'type' => 'region',
        'title' => 'Column 3',
        'width' => '33.021117144760986',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col3',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '74.09992036548053',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-main',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.900079634519475',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'main_' => NULL,
      'sidebar' => NULL,
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
    'column_1' => array(
      'style' => 'naked',
    ),
    'column_2' => array(
      'style' => 'naked',
    ),
    'column_3' => array(
      'style' => 'naked',
    ),
    'main_' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Main content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Sidebar content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_grid_examples_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'grid_examples';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Eight Four Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'grid-examples/eightfourtwo',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'eightfourtwo';
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
          2 => 2,
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
        'title' => 'Hero',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'onethreetwo-hero',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_1',
          1 => 'column_2',
          2 => 'column_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'column_1' => array(
        'type' => 'region',
        'title' => 'Column 1',
        'width' => '33.36031834279618',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col1',
      ),
      'column_2' => array(
        'type' => 'region',
        'title' => 'Column 2',
        'width' => '33.61856451244284',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col2',
      ),
      'column_3' => array(
        'type' => 'region',
        'title' => 'Column 3',
        'width' => '33.021117144760986',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col3',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '74.09992036548053',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-main',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.900079634519475',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'main_' => NULL,
      'sidebar' => NULL,
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
      'side' => NULL,
      'bottom' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
    'column_1' => array(
      'style' => 'naked',
    ),
    'column_2' => array(
      'style' => 'naked',
    ),
    'column_3' => array(
      'style' => 'naked',
    ),
    'main_' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Bottom row',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse euismod pulvinar ipsum vel mattis. Nam vitae leo at arcu placerat pretium vel sit amet risus. Ut sit amet commodo erat. Nam venenatis tincidunt diam eu malesuada. Donec quis nunc euismod, laoreet enim ut, ornare ante. Nullam a elit a ipsum consequat volutpat. Pellentesque est nulla, pharetra eu dignissim a, aliquam sed odio. Fusce vel nibh suscipit, tincidunt metus quis, fringilla massa. Aliquam posuere magna posuere eleifend viverra. Curabitur gravida fringilla purus, at euismod mauris auctor luctus. Donec fringilla sapien nec quam vestibulum, a ultrices purus varius. Vestibulum accumsan adipiscing nisl non aliquet. Phasellus fringilla tellus ac orci pellentesque, ac scelerisque arcu feugiat. Donec at tempus enim. Sed iaculis commodo risus ac fringilla.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['bottom'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Left supplementary',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse euismod pulvinar ipsum vel mattis. Nam vitae leo at arcu placerat pretium vel sit amet risus. Ut sit amet commodo erat. Nam venenatis tincidunt diam eu malesuada.',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $display->panels['left'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Main content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['main'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Right supplementary',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse euismod pulvinar ipsum vel mattis. Nam vitae leo at arcu placerat pretium vel sit amet risus. Ut sit amet commodo erat. Nam venenatis tincidunt diam eu malesuada. Donec quis nunc euismod, laoreet enim ut, ornare ante.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'side';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Sidbar content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.

Nunc et lorem eu tellus sodales sollicitudin. Donec ac blandit enim. Aliquam venenatis hendrerit erat non tincidunt. Vivamus sagittis, metus a viverra sodales, tortor massa aliquet ante, ac lacinia elit augue in orci. Curabitur quis orci eget ipsum bibendum ultricies. Aenean hendrerit mi sed metus dignissim cursus. Integer eu massa risus. Vestibulum rhoncus, lacus cursus venenatis accumsan, lacus orci pellentesque lorem, eget feugiat arcu nisl sit amet elit. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Phasellus eget vestibulum leo. Morbi feugiat, elit et varius dapibus, risus neque porttitor dui, at volutpat erat lacus interdum sem. Fusce malesuada porta nunc non pharetra. Phasellus mollis leo quis est lobortis congue. Nullam at erat ac neque sagittis tincidunt et vitae velit.

Vestibulum eleifend et diam volutpat pharetra. Proin faucibus diam sit amet ultricies luctus. Fusce arcu libero, accumsan non interdum et, luctus id risus. Nam sollicitudin interdum semper. Cras mauris ante, ullamcorper in convallis nec, venenatis et mi. Nam luctus condimentum bibendum. Nunc porttitor eleifend auctor. Curabitur dignissim erat vitae sem viverra dapibus. Phasellus ac molestie diam. Nullam vehicula justo nec neque pharetra, non aliquam mi ultricies. Sed blandit in quam id posuere. Etiam pellentesque, nulla a volutpat pulvinar, nisi erat mattis libero, eu iaculis diam dui eget lacus. Nam sapien lorem, viverra ac congue a, mollis eu lorem. Nulla at diam congue sem accumsan aliquam id quis justo. Nullam a hendrerit massa.

Nullam interdum porta eros. Donec mollis vel ante a tincidunt. In hac habitasse platea dictumst. Aenean eu sodales ipsum, a convallis magna. Vestibulum luctus suscipit metus vitae faucibus. Fusce non diam eget libero vestibulum aliquet vel sit amet orci. In nec risus libero. Mauris elit tortor, hendrerit quis est eu, faucibus iaculis magna. Pellentesque convallis justo ipsum, ac condimentum sapien semper a. Praesent laoreet, justo et varius varius, ligula leo tempor eros, ut accumsan nibh orci ut massa. Cras quis massa ornare, porta arcu ut, imperdiet eros. Donec quis scelerisque urna, vel dignissim lectus. Quisque tristique arcu vitae egestas pulvinar.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['side'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_grid_examples_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'grid_examples';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'One Three Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
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
          2 => 2,
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
        'title' => 'Hero',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'onethreetwo-hero',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_1',
          1 => 'column_2',
          2 => 'column_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'column_1' => array(
        'type' => 'region',
        'title' => 'Column 1',
        'width' => '33.36031834279618',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col1',
      ),
      'column_2' => array(
        'type' => 'region',
        'title' => 'Column 2',
        'width' => '33.61856451244284',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col2',
      ),
      'column_3' => array(
        'type' => 'region',
        'title' => 'Column 3',
        'width' => '33.021117144760986',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'onethreetwo-col3',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '74.09992036548053',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-main',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.900079634519475',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'onethreetwo-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column_1' => NULL,
      'column_2' => NULL,
      'column_3' => NULL,
      'main_' => NULL,
      'sidebar' => NULL,
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
    'column_1' => array(
      'style' => 'naked',
    ),
    'column_2' => array(
      'style' => 'naked',
    ),
    'column_3' => array(
      'style' => 'naked',
    ),
    'main_' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'col1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Column 1 content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['col1'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'col2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Column 2 content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['col2'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'col3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Column 3 content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['col3'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Main content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['left'][0] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Sidbar content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc varius congue dapibus. Praesent consequat mollis diam vitae mollis. Proin mollis vel sapien non eleifend. Phasellus venenatis purus ut lectus gravida imperdiet. Sed sit amet suscipit purus, vel aliquam mi. Proin sed augue eu ipsum porta varius. Integer convallis mauris id ornare consequat. Ut porttitor vel felis et feugiat. Donec volutpat lectus imperdiet neque varius aliquam.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['right'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Hero content',
      'body' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam vitae lorem ac metus auctor feugiat. Sed sit amet venenatis justo. In pretium vestibulum mi sed ullamcorper. Vivamus tortor magna, faucibus sed elit at, semper posuere odio. Etiam nunc sapien, adipiscing non aliquam dignissim, porttitor accumsan sem. Proin vitae odio sed felis cursus cursus nec in mauris. Donec id rhoncus arcu, ac placerat risus. Morbi semper ipsum ut eros fermentum, at auctor mauris condimentum.

Quisque vulputate in metus sit amet tristique. Nulla sed eros porta, eleifend mi in, eleifend sapien. Integer auctor nulla nulla, nec sollicitudin mauris porta nec. Mauris vitae nisi risus. Morbi rutrum convallis lacus, vel varius lectus lacinia aliquet. Etiam venenatis ullamcorper odio, sed luctus tellus. Etiam diam sem, aliquet et pretium vel, aliquam vel massa. Integer aliquet consectetur lorem eu luctus. Aliquam a augue enim. Pellentesque vitae nisi rutrum sapien varius dapibus. Duis nec congue nunc, et malesuada nulla. Aliquam vestibulum sit amet urna et semper. Etiam consequat ligula quis magna porta, id sagittis orci molestie. Mauris condimentum luctus nisl, non blandit lectus porta et.

Morbi luctus dictum nunc a ultrices. Suspendisse sit amet molestie risus, tempor interdum magna. Vivamus at lectus posuere ipsum posuere sollicitudin eget eget elit. Morbi dictum nibh non ligula pulvinar, non sodales ipsum consectetur. Nulla facilisi. Vivamus convallis id eros eu pellentesque. Aliquam ultricies quam dolor, eu tincidunt urna rhoncus sed. Mauris lobortis lacus ac dui condimentum hendrerit. Proin eget felis ut nunc tincidunt vehicula non et neque.',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['top'][0] = 'new-13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['grid_examples'] = $page;

  return $pages;

}
