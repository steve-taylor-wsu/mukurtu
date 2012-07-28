/*
 Navicat MySQL Data Transfer

 Source Server         : localhost
 Source Server Version : 50509
 Source Host           : localhost
 Source Database       : mukurtu_install_alt_db

 Target Server Version : 50509
 File Encoding         : utf-8

 Date: 05/29/2012 08:24:37 AM
*/

SET NAMES utf8;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
--  Table structure for `users_demo`
-- ----------------------------
DROP TABLE IF EXISTS `users_demo`;
CREATE TABLE `users_demo` (
  `uid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Primary Key: Unique user ID.',
  `name` varchar(60) NOT NULL DEFAULT '' COMMENT 'Unique user name.',
  `pass` varchar(128) NOT NULL DEFAULT '' COMMENT 'User’s password (hashed).',
  `mail` varchar(254) DEFAULT '' COMMENT 'User’s e-mail address.',
  `theme` varchar(255) NOT NULL DEFAULT '' COMMENT 'User’s default theme.',
  `signature` varchar(255) NOT NULL DEFAULT '' COMMENT 'User’s signature.',
  `signature_format` varchar(255) DEFAULT NULL COMMENT 'The filter_format.format of the signature.',
  `created` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for when user was created.',
  `access` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for previous time user accessed the site.',
  `login` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for user’s last login.',
  `status` tinyint(4) NOT NULL DEFAULT '0' COMMENT 'Whether the user is active(1) or blocked(0).',
  `timezone` varchar(32) DEFAULT NULL COMMENT 'User’s time zone.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'User’s default language.',
  `picture` int(11) NOT NULL DEFAULT '0' COMMENT 'Foreign key: file_managed.fid of user’s picture.',
  `init` varchar(254) DEFAULT '' COMMENT 'E-mail address used for initial account creation.',
  `data` longblob COMMENT 'A serialized array of name value pairs that are related to the user. Any form values posted during user edit are stored and are loaded into the $user object during user_load(). Use of this field is discouraged and it will likely disappear in a future...',
  PRIMARY KEY (`uid`),
  UNIQUE KEY `name` (`name`),
  KEY `access` (`access`),
  KEY `created` (`created`),
  KEY `mail` (`mail`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Stores user data.';

-- ----------------------------
--  Records of `users_demo`
-- ----------------------------
BEGIN;
INSERT INTO `users_demo` VALUES ('0', '', '', '', '', '', null, '0', '0', '0', '0', null, '', '0', '', null), ('1', 'admin', '$S$DTwZ8WYXohK.N4crFEKqew/IEv.wWd6lsPYJ/ob9LoXyMmiJUbea', 'chachasikes@gmail.com', '', '', null, '1338262562', '1338277102', '1338262720', '1', 'America/Los_Angeles', '', '0', 'chachasikes@gmail.com', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('2', 'Librarian', '$S$DLW/EB2fs1TsmiyhfOBTLfXrebLMJwWJADfOuouhTp0g112rCmLq', 'pantheon+mukurtu@codifi.info', '', '', null, '1338262660', '0', '0', '1', 'America/Los_Angeles', '', '0', 'pantheon+mukurtu@codifi.info', 0x613a323a7b733a373a226f7665726c6179223b693a303b733a373a22636f6e74616374223b693a313b7d), ('3', 'Demo', '$S$De0Jd0J1HubnkCrao29I6yDvWUMWNDizSQYVe8oXixq2oFStHJfb', 'pantheon+demo@codifi.info', '', '', null, '1338262660', '0', '0', '1', 'America/Los_Angeles', '', '0', 'pantheon+demo@codifi.info', 0x613a323a7b733a373a226f7665726c6179223b693a303b733a373a22636f6e74616374223b693a313b7d), ('4', 'Mukurtu Admin', '$S$DIS6PrAXGy5biuNlbfxWZGe39dQb1zraGJ8B0ZCtFxdQt4ZFC6FX', 'pantheon+codaadmin@codifi.info', '', '', null, '1338262660', '0', '0', '1', 'America/Los_Angeles', '', '0', 'pantheon+codaadmin@codifi.info', 0x613a323a7b733a373a226f7665726c6179223b693a303b733a373a22636f6e74616374223b693a313b7d), ('5', 'Community Admin', '$S$DwwUzUyTJoYaN2M4S7l9/c1Gmhigns2USP66htOel0DECy5SGhRb', 'pantheon+community_admin@codifi.info', '', '', null, '1338262660', '0', '0', '1', 'America/Los_Angeles', '', '0', 'pantheon+community_admin@codifi.info', 0x613a323a7b733a373a226f7665726c6179223b693a303b733a373a22636f6e74616374223b693a313b7d), ('9', 'michael', '', 'michael@codifi.info', '', '', null, '1338237621', '0', '0', '1', null, 'english', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('10', 'colin', '', 'colin@quilted.coop', '', '', null, '1338237621', '0', '0', '1', null, 'english', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('11', 'Community Member', '', 'chacha+community@mukurtu.org', '', '', null, '1338237621', '0', '0', '1', null, '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('12', 'Debby Demo', '$S$DHzQQjQ./TH8esajhgW95sOjp5Im4oMcFhUrfvguSLPmeBh3ami8', 'chacha+Debby@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('13', 'Chris Demo', '$S$DNyrm/IR38AbMcYEFDaTkWzaE8XwQ0FkVDhmeH0/vwj/20jHeDo/', 'chacha+Chris@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('14', 'Beryl Demo', '$S$DcGCWfd9b5RMeF9iixvVQb6eMyFKHCaTOmixN2manxEoOvOVvyra', 'chacha+Beryl@mukurtu.org', '', '', 'full_html', '1338237621', '1338263145', '1338262931', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('15', 'Alberto Demo', '$S$D/pLWO7Q5gLfPmaSykWOTjBqZUl49l10vm5ZONR0oPJSDQ/pSSzU', 'chacha+Alberto@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('16', 'Gordon Demo', '$S$DLAhKuCxBSxXVExoDUs7KqmzhK5Z31wAYYDfqyClcP.IDE8d4Gt5', 'chacha+Gordon@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('17', 'Florence Demo', '$S$Da98Y/FxBKFIvlKbKv9jTHpqhbwPk7kjSgOK8aVbsniGhzPUnfMm', 'chacha+Florence@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d), ('18', 'Ernesto Demo', '$S$DrjcgP2PoPSxkiN9LjoVZnXqLjtoroNyazcUKhNZA0NGmUwdHvth', 'chacha+Ernesto@mukurtu.org', '', '', 'full_html', '1338237621', '0', '0', '1', '', '', '0', '', 0x613a313a7b733a373a22636f6e74616374223b693a313b7d);
COMMIT;

SET FOREIGN_KEY_CHECKS = 1;
