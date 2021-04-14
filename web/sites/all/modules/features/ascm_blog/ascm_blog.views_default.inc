<?php

/**
 * @file
 * ascm_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ascm_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog';
  $view->description = 'Blog view';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ASCM Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Author';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Admin */
  $handler = $view->new_display('page', 'Admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog Admin';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Author';
  $handler->display->display_options['path'] = 'blog/admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog Admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['blog'] = $view;

  $view = new view();
  $view->name = 'newsletter_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_mailing';
  $view->human_name = 'Newsletter Archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newsletter Archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'To subscribe to our newsletters or update your details, visit our main <a href="/newsletter">newsletter</a> page.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: CiviCRM Mailings: Subject Line */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'civicrm_mailing';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_wrapper_type'] = 'h2';
  /* Field: CiviCRM Mailings: Approval Date */
  $handler->display->display_options['fields']['approval_date']['id'] = 'approval_date';
  $handler->display->display_options['fields']['approval_date']['table'] = 'civicrm_mailing';
  $handler->display->display_options['fields']['approval_date']['field'] = 'approval_date';
  $handler->display->display_options['fields']['approval_date']['label'] = '';
  $handler->display->display_options['fields']['approval_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['approval_date']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['approval_date']['date_format'] = 'long';
  $handler->display->display_options['fields']['approval_date']['second_date_format'] = 'long';
  /* Field: CiviCRM Mailings: Body - HTML */
  $handler->display->display_options['fields']['body_html']['id'] = 'body_html';
  $handler->display->display_options['fields']['body_html']['table'] = 'civicrm_mailing';
  $handler->display->display_options['fields']['body_html']['field'] = 'body_html';
  $handler->display->display_options['fields']['body_html']['label'] = '';
  $handler->display->display_options['fields']['body_html']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_html']['text_format'] = 'filtered_html';
  /* Sort criterion: CiviCRM Mailings: Approval Date */
  $handler->display->display_options['sorts']['approval_date']['id'] = 'approval_date';
  $handler->display->display_options['sorts']['approval_date']['table'] = 'civicrm_mailing';
  $handler->display->display_options['sorts']['approval_date']['field'] = 'approval_date';
  $handler->display->display_options['sorts']['approval_date']['order'] = 'DESC';
  /* Filter criterion: CiviCRM Mailings: Visibility */
  $handler->display->display_options['filters']['visibility']['id'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['table'] = 'civicrm_mailing';
  $handler->display->display_options['filters']['visibility']['field'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['operator'] = 'not empty';
  $handler->display->display_options['filters']['visibility']['value'] = 'Y';
  /* Filter criterion: CiviCRM Mailings: Archived? */
  $handler->display->display_options['filters']['is_archived']['id'] = 'is_archived';
  $handler->display->display_options['filters']['is_archived']['table'] = 'civicrm_mailing';
  $handler->display->display_options['filters']['is_archived']['field'] = 'is_archived';
  $handler->display->display_options['filters']['is_archived']['value'] = '0';
  /* Filter criterion: CiviCRM Mailings: Approval Date */
  $handler->display->display_options['filters']['approval_date']['id'] = 'approval_date';
  $handler->display->display_options['filters']['approval_date']['table'] = 'civicrm_mailing';
  $handler->display->display_options['filters']['approval_date']['field'] = 'approval_date';
  $handler->display->display_options['filters']['approval_date']['operator'] = '<=';
  $handler->display->display_options['filters']['approval_date']['value']['value'] = '+1 day';
  $handler->display->display_options['filters']['approval_date']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'newsletter-archive';
  $export['newsletter_archive'] = $view;

  return $export;
}
