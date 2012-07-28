/*
 Navicat MySQL Data Transfer

 Source Server         : localhost
 Source Server Version : 50509
 Source Host           : localhost
 Source Database       : mukurtu_cms_db

 Target Server Version : 50509
 File Encoding         : utf-8

 Date: 06/01/2012 09:29:13 AM
*/

SET NAMES utf8;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
--  Table structure for `og_role`
-- ----------------------------
DROP TABLE IF EXISTS `og_role`;
CREATE TABLE `og_role` (
  `rid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Primary Key: Unique role ID.',
  `gid` int(11) NOT NULL COMMENT 'The group’s unique ID.',
  `name` varchar(64) NOT NULL DEFAULT '' COMMENT 'Unique role name per group.',
  PRIMARY KEY (`rid`)
) ENGINE=InnoDB AUTO_INCREMENT=40 DEFAULT CHARSET=utf8 COMMENT='Stores user roles per group.';

-- ----------------------------
--  Records of `og_role`
-- ----------------------------
BEGIN;
INSERT INTO `og_role` VALUES ('1', '0', 'non-member'), ('2', '0', 'member'), ('3', '0', 'administrator member'), ('37', '0', 'non-member'), ('38', '0', 'member'), ('39', '0', 'administrator member');
COMMIT;

SET FOREIGN_KEY_CHECKS = 1;
