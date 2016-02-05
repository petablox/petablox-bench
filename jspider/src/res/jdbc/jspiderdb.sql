#
# JSpider database creation script
#
# WARNING: This JDBC storage provider is an alpha release.
# It has only been tested on MySQL 3.
#
# $Id: jspiderdb.sql,v 1.4 2003/04/06 11:25:30 vanrogu Exp $
#

CREATE TABLE jspider_content (
  id int(11) NOT NULL default '0',
  content blob
) TYPE=MyISAM;

CREATE TABLE jspider_cookie (
  id int(11) NOT NULL auto_increment,
  site int(11) NOT NULL default '0',
  name varchar(255) NOT NULL default '',
  value varchar(255) NOT NULL default '',
  domain varchar(255) NOT NULL default '',
  path varchar(255) NOT NULL default '',
  expires varchar(255) default NULL,
  PRIMARY KEY  (id)
) TYPE=MyISAM;

CREATE TABLE jspider_decision (
  resource int(11) NOT NULL default '0',
  subject int(11) NOT NULL default '0',
  type int(11) NOT NULL default '0',
  comment longtext NOT NULL,
  PRIMARY KEY  (resource,subject)
) TYPE=MyISAM;

CREATE TABLE jspider_decision_step (
  resource int(11) NOT NULL default '0',
  subject int(11) NOT NULL default '0',
  sequence int(11) NOT NULL default '0',
  type int(11) NOT NULL default '0',
  rule longtext NOT NULL,
  decision int(11) NOT NULL default '0',
  comment longtext NOT NULL,
  PRIMARY KEY  (resource,subject,sequence)
) TYPE=MyISAM;

CREATE TABLE jspider_resource (
  id int(11) NOT NULL auto_increment,
  url longtext NOT NULL,
  state int(11) NOT NULL default '0',
  httpstatus int(11) NOT NULL default '0',
  site int(11) NOT NULL default '0',
  timems int(11) NOT NULL default '0',
  mimetype varchar(255) default NULL,
  size int(11) NOT NULL default '0',
  PRIMARY KEY  (id)
) TYPE=MyISAM;

CREATE TABLE jspider_resource_reference (
  referer int(11) NOT NULL default '0',
  referee int(11) NOT NULL default '0',
  count int(11) NOT NULL default '0',
  PRIMARY KEY(referer,referee)
) TYPE=MyISAM;

CREATE TABLE jspider_site (
  id int(11) NOT NULL auto_increment,
  host varchar(255) NOT NULL default '',
  port int(11) NOT NULL default '80',
  robotstxthandled tinyint(4) NOT NULL default '0',
  usecookies tinyint(4) NOT NULL default '0',
  useproxy tinyint(4) NOT NULL default '0',
  state int(11) NOT NULL default '0',
  obeyrobotstxt int(11) NOT NULL default '0',
  fetchrobotstxt int(11) NOT NULL default '0',
  PRIMARY KEY  (id)
) TYPE=MyISAM;
