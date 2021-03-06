<?php
// $Id: stormticket.views.inc,v 1.1.2.11 2010/08/23 16:46:13 juliangb Exp $

function stormticket_views_data() {
  $data['stormticket']['table']['group']  = 'Storm';
  $data['stormticket']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );
  
  $data['stormticket']['ticketstatus'] = array(
    'title' => t('Ticket Status'),
    'help' => 'Storm Ticket status',
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'stormattribute_handler_field_attributes_domain',
      'domain' => 'Ticket Status',
    ),
    'filter' => array(
      'handler' => 'stormattribute_handler_filter_attributes_domain',
      'domain' => 'Ticket Status',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['stormticket']['ticketcategory'] = array(
    'title' => t('Ticket Category'),
    'help' => t('Storm Ticket category'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'stormattribute_handler_field_attributes_domain',
      'domain' => 'Ticket Category',
    ),
    'filter' => array(
      'handler' => 'stormattribute_handler_filter_attributes_domain',
      'domain' => 'Ticket Category',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['stormticket']['ticketpriority'] = array(
    'title' => t('Ticket Priority'),
    'help' => t('Storm Ticket priority'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'stormattribute_handler_field_attributes_domain',
      'domain' => 'Ticket Priority',
    ),
    'filter' => array(
      'handler' => 'stormattribute_handler_filter_attributes_domain',
      'domain' => 'Ticket Priority',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['stormticket']['datebegin'] = array(
    'title' => t('Ticket Date Begin'),
    'help' => t('Storm Ticket begin date'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['stormticket']['dateend'] = array(
    'title' => t('Ticket Date End'),
    'help' => t('Storm Ticket end date'),
    'field' => array(
      'click sortable' => TRUE,
      'handler' => 'views_handler_field_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );
  
  $data['stormticket']['organization_nid'] = array(
    'title' => t('Ticket Organization NID'),
    'help' => 'Storm Ticket Organization NID',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['stormticket']['organization_title'] = array(
    'title' => t('Ticket Organization'),
    'help' => t('Storm Ticket organization'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['stormticket']['project_nid'] = array(
    'title' => t('Ticket Project NID'),
    'help' => 'Storm Ticket Project NID',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['stormticket']['project_title'] = array(
    'title' => t('Ticket Project'),
    'help' => t('Storm Ticket project'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['stormticket']['task_nid'] = array(
    'title' => t('Ticket Task NID'),
    'help' => 'Storm Ticket Task NID',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['stormticket']['task_title'] = array(
    'title' => t('Ticket Task'),
    'help' => t('Storm Task title'),
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  $data['stormticket']['assigned_nid'] = array(
    'title' => t('Ticket Assigned Node ID'),
    'help' => 'Storm Ticket Assigned Node ID',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_equality',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['stormticket']['assigned_title'] = array(
    'title' => t('Ticket Assigned Title'),
    'help' => 'Storm Ticket Assigned Title',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  $data['stormtask']['billable'] = array(
    'title' => t('Task Billable'),
    'help' => 'Storm Task Billable',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );
  
  $data['stormtask']['billed'] = array(
    'title' => t('Tasl Billed'),
    'help' => 'Storm Task Billed',
    'field' => array(
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  return $data;
}

function stormticket_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'stormattribute'),
    ),
    'handlers' => array(
      'stormattribute_handler_field_attributes_domain' => array(
        'parent' => 'views_handler_field',
      ),
      'stormattribute_handler_filter_attributes_domain' => array(
        'parent' => 'views_handler_filter_in_operator',
      ),
    ),
  );
}
