/*
Navicat MySQL Data Transfer

Source Server         : xiaofeng
Source Server Version : 50536
Source Host           : localhost:3306
Source Database       : house

Target Server Type    : MYSQL
Target Server Version : 50536
File Encoding         : 65001

Date: 2016-08-11 23:06:16
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `customer`
-- ----------------------------
DROP TABLE IF EXISTS `customer`;
CREATE TABLE `customer` (
  `ID` int(11) NOT NULL COMMENT '客户编号',
  `Name` char(20) NOT NULL COMMENT '客户姓名',
  `Sex` char(5) NOT NULL COMMENT '客户性别',
  `NativePlace` char(50) NOT NULL COMMENT '客户籍贯',
  `IDCard` char(20) NOT NULL COMMENT '客户身份证号',
  `RoomID` int(11) NOT NULL COMMENT '客户所租赁房屋编号',
  `InDate` datetime NOT NULL COMMENT '入住时间',
  `LeaveDate` datetime NOT NULL COMMENT '离开时间',
  `Bargain` char(20) NOT NULL COMMENT '合同编号',
  `Price` int(11) NOT NULL COMMENT '价格',
  `Remark` char(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;

-- ----------------------------
-- Records of customer
-- ----------------------------

-- ----------------------------
-- Table structure for `login`
-- ----------------------------
DROP TABLE IF EXISTS `login`;
CREATE TABLE `login` (
  `LoginID` int(11) NOT NULL COMMENT '管理员编号',
  `User` char(20) NOT NULL COMMENT '用户名',
  `Password` char(20) NOT NULL COMMENT '用户密码',
  PRIMARY KEY (`LoginID`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;

-- ----------------------------
-- Records of login
-- ----------------------------
INSERT INTO `login` VALUES ('2016080301', 'xiaofeng', '101010');

-- ----------------------------
-- Table structure for `renter`
-- ----------------------------
DROP TABLE IF EXISTS `renter`;
CREATE TABLE `renter` (
  `RenterID` int(11) NOT NULL AUTO_INCREMENT COMMENT '房主编号',
  `Name` char(20) NOT NULL COMMENT '房主姓名',
  `Contact` char(20) NOT NULL COMMENT '联系方式',
  `Bargain` char(20) NOT NULL COMMENT '合同编号',
  `Price` int(11) NOT NULL COMMENT '价格',
  `Remark` char(100) NOT NULL COMMENT '备注信息',
  PRIMARY KEY (`RenterID`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=gb2312;

-- ----------------------------
-- Records of renter
-- ----------------------------
INSERT INTO `renter` VALUES ('1', '张三', '2589334', '001', '1000', '普通房屋');
INSERT INTO `renter` VALUES ('2', '李四', '883379', '002', '1000', '普通房屋');
INSERT INTO `renter` VALUES ('3', '王五', '883380', '003', '1500', '标准房屋');
INSERT INTO `renter` VALUES ('4', '邓六', '8789545', '004', '2000', '高档房屋');

-- ----------------------------
-- Table structure for `roominfo`
-- ----------------------------
DROP TABLE IF EXISTS `roominfo`;
CREATE TABLE `roominfo` (
  `RoomID` int(11) NOT NULL AUTO_INCREMENT COMMENT '房屋编号',
  `RenterID` int(11) NOT NULL COMMENT '房主编号',
  `RoomType` char(20) NOT NULL COMMENT '房屋类型',
  `Location` char(50) NOT NULL COMMENT '所在位置',
  `Floor` int(11) NOT NULL COMMENT '所在楼层',
  `RatingNum` int(11) NOT NULL COMMENT '最大入住人数',
  `RealNum` int(11) NOT NULL COMMENT '实际入住人数',
  `Area` int(11) NOT NULL COMMENT '房屋面积',
  `Price` int(11) NOT NULL COMMENT '房屋价格',
  `Air` char(10) NOT NULL COMMENT '是否包含空调',
  `Phone` char(10) NOT NULL COMMENT '是否包含电话',
  `TV` char(10) NOT NULL COMMENT '是否包含电视',
  `Washer` char(10) NOT NULL COMMENT '是否包含洗衣机',
  `Internet` char(10) NOT NULL COMMENT '是否包含网络',
  `Fridge` char(10) NOT NULL COMMENT '是否包含冰箱',
  `Remark` char(100) NOT NULL COMMENT '备注信息',
  PRIMARY KEY (`RoomID`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=gb2312;

-- ----------------------------
-- Records of roominfo
-- ----------------------------
INSERT INTO `roominfo` VALUES ('1', '1', '普通房屋', '开发区', '1', '3', '0', '80', '1000', '0', '1', '1', '1', '0', '1', '普通房屋');
INSERT INTO `roominfo` VALUES ('2', '1', '普通房屋', '开发区', '1', '3', '0', '80', '1000', '0', '1', '1', '1', '0', '1', '普通房屋');
INSERT INTO `roominfo` VALUES ('3', '2', '标准房间', '市区', '3', '3', '0', '80', '1500', '0', '1', '1', '1', '0', '1', '标准房间');
INSERT INTO `roominfo` VALUES ('4', '3', '普通房屋', '开发区', '1', '3', '0', '80', '1000', '0', '1', '1', '1', '0', '1', '普通房屋');
INSERT INTO `roominfo` VALUES ('5', '3', '标准房间', '市区', '2', '3', '0', '80', '1500', '0', '1', '1', '1', '0', '1', '标准房间');
