<?php
/**
 * @file
 * library_contribute_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function library_contribute_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contribute_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Contribute landing page';
  $page->admin_description = 'A user landing page for contributing scenarios and metadata to the library.';
  $page->path = 'contribute';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contribute',
    'name' => 'main-menu',
    'weight' => '1',
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
  $handler->name = 'page_contribute_landing_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'contribute_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Registered users',
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
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    ),
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
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first',
          1 => 'second',
          2 => 'third',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'first' => array(
        'type' => 'region',
        'title' => 'First',
        'width' => '33.10951988234358',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'second' => array(
        'type' => 'region',
        'title' => 'Second',
        'width' => '33.8709562974253',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'third' => array(
        'type' => 'region',
        'title' => 'Third',
        'width' => '33.01952382023113',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'fourth',
          1 => 'fifth',
          2 => 'sixth',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'fourth' => array(
        'type' => 'region',
        'title' => 'Fourth',
        'width' => '33.07305600227876',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'fifth' => array(
        'type' => 'region',
        'title' => 'Fifth',
        'width' => '33.879435950213136',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'sixth' => array(
        'type' => 'region',
        'title' => 'Sixth',
        'width' => '33.047508047508',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'col1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What kind of material is appropriate?',
      'body' => 'Any scenario, story, video or image which attempts to depict a possible future is an appropriate contribution to the Library. We imagine that the core of the library will be scenarios developed by foresight practitioners in public projects, but we are also interested in speculative art, videos and stories.',
      'format' => 'plain_text',
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
    $display->content['new-1'] = $pane;
    $display->panels['col1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'col2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What about copyright?',
      'body' => 'You should not upload any information which you do not hold the rights to. By choosing to upload your own work to the Library we assume you are granting others the ability to reuse and repurpose your work. You should choose the appropriate license when you upload the work.

You can add a record to the Library which describes a copyright work, such as a book or a film, without uploading it and link to the work\'s web page or a canonical web page which describes it such as the Wikipedia entry, the IMDB page (for a film) or the WorldCat page (for a book).',
      'format' => 'plain_text',
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
    $display->content['new-2'] = $pane;
    $display->panels['col2'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'col3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Register action',
      'title' => 'Start adding scenarios',
      'body' => '<p>For the Library to be more useful to searchers than simply using Google, the items need to be indexed and classified as future depictions. The form allows you to enter a lot of metadata, but the only items which as mandatory are Title and URL. The Library will work better if you try to enter as much of the rest as you can, but if you can\'t find some of the information it\'s OK to leave it out.</p>
<p><a href="//%token:site:url-brief/node/add/scenario/quick" class="action submit-scenario">Submit new scenario</a></p>
',
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
      'admin_title' => 'Contribute intro text',
      'title' => '',
      'body' => '<div class="custom-page-left">
<h1>Contribute to the Library</h1>
<p>Everyone is welcome to contribute to Open Futures. This is a community of academics, futurists, researchers, planners and students. We’re aiming to create an open and inclusive platform where people can collate, discover and contribute their scenario work.</p>
</div>
<div class="custom-page-right">
<img src="//%token:site:url-brief/profiles/openfutures/modules/features/library_contribute_page/images/contribute.png" />
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contribute_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contribute_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Anonymous users',
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
    'access' => array(
      'logic' => 'and',
    ),
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
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first',
          1 => 'second',
          2 => 'third',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'first' => array(
        'type' => 'region',
        'title' => 'First',
        'width' => '33.10951988234358',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'second' => array(
        'type' => 'region',
        'title' => 'Second',
        'width' => '33.8709562974253',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'third' => array(
        'type' => 'region',
        'title' => 'Third',
        'width' => '33.01952382023113',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'fourth',
          1 => 'fifth',
          2 => 'sixth',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'fourth' => array(
        'type' => 'region',
        'title' => 'Fourth',
        'width' => '33.07305600227876',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'fifth' => array(
        'type' => 'region',
        'title' => 'Fifth',
        'width' => '33.879435950213136',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'sixth' => array(
        'type' => 'region',
        'title' => 'Sixth',
        'width' => '33.047508047508',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'col1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What kind of material is appropriate?',
      'body' => 'Any scenario, story, video or image which attempts to depict a possible future is an appropriate contribution to the Library. We imagine that the core of the library will be scenarios developed by foresight practitioners in public projects, but we are also interested in speculative art, videos and stories.',
      'format' => 'plain_text',
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
    $display->content['new-5'] = $pane;
    $display->panels['col1'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'col2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What about copyright?',
      'body' => 'You should not upload any information which you do not hold the rights to. By choosing to upload your own work to the Library we assume you are granting others the ability to reuse and repurpose your work. You should choose the appropriate license when you upload the work.

You can add a record to the Library which describes a copyright work, such as a book or a film, without uploading it and link to the work\'s web page or a canonical web page which describes it such as the Wikipedia entry, the IMDB page (for a film) or the WorldCat page (for a book).',
      'format' => 'plain_text',
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
    $display->content['new-6'] = $pane;
    $display->panels['col2'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'col3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Register action',
      'title' => 'Ready to get started?',
      'body' => '<p>To begin adding scenarios you\'ll need to create an account on the site.</p>
<p><a href="http://%token:site:url-brief/user/register" class="action">Register</a></p>
',
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
    $display->content['new-7'] = $pane;
    $display->panels['col3'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contribute intro text',
      'title' => '',
      'body' => '<div class="custom-page-left">
<h1>Contribute to the Library</h1>
<p>Everyone is welcome to contribute to Open Futures. This is a community of academics, futurists, researchers, planners and students. We’re aiming to create an open and inclusive platform where people can collate, discover and contribute their scenario work.</p>
</div>
<div class="custom-page-right">
<img src="//%token:site:url-brief/profiles/openfutures/modules/features/library_contribute_page/images/contribute.png" />
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
    $display->content['new-8'] = $pane;
    $display->panels['top'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contribute_landing_page'] = $page;

  return $pages;

}
