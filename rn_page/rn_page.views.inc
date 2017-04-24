<?php



/**
 * Implemens hook_views_default_views().
 */
function rn_page_views_default_views() {
 
    $view = new view();
    $view->name = 'drupal_test_task_views';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'users';
    $view->human_name = 'drupal-test-task-views';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Drupal test task views';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = true;
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'uid' => 'uid',
      'name' => 'name',
      'edit_node' => 'edit_node',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
      'uid' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'name' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'edit_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
    );
    /* Field: User: Uid */
    $handler->display->display_options['fields']['uid']['id'] = 'uid';
    $handler->display->display_options['fields']['uid']['table'] = 'users';
    $handler->display->display_options['fields']['uid']['field'] = 'uid';
    $handler->display->display_options['fields']['uid']['label'] = 'id';
    $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
    /* Field: User: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'users';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['label'] = 'username';
    $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
    /* Field: User: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'users';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = '';
    $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
    /* Filter criterion: User: Active */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'users';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = '1';
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'drupal-test-task-views';

    
    $views['drupal_test_task_views'] = $view;
    return $views;
}