<?php
/**
 * @file
 * sm_site_information.pages.inc
 * 
 * Created this file so written functions in this file are not loaded in .module file 
 */

/**
 * Page callback for page json
 * @param int $nid
 * @return string
 */
function sm_site_information_page_json($nid) {
  $node = node_load($nid);
  return json_encode($node);
}

