/*
 Navicat MySQL Data Transfer

 Source Server         : localhost
 Source Server Version : 50509
 Source Host           : localhost
 Source Database       : mukurtu_install_alt_db

 Target Server Version : 50509
 File Encoding         : utf-8

 Date: 05/29/2012 08:27:58 AM
*/

SET NAMES utf8;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
--  Records of `users_demo`
-- ----------------------------
BEGIN;
UPDATE `users` SET

UPDATE `users`
SET `pass` = '$S$DHzQQjQ./TH8esajhgW95sOjp5Im4oMcFhUrfvguSLPmeBh3ami8'
WHERE
	`name` = `Debby Demo` OR
	`name` = `Beryl Demo` OR	
	`name` = `Alberto Demo` OR	
	`name` = `Gordon Demo` OR
	`name` = `Florence Demo` OR
	`name` = `Ernesto Demo`
	
;

SET FOREIGN_KEY_CHECKS = 1;
