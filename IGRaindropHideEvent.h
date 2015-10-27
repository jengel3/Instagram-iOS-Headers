/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IGRaindropUser, NSString;

@interface IGRaindropHideEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropUser* __thrift_targetUser;
	long long __thrift_sectionNumber;
	long long __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterkey;
	NSString* __thrift_targetId;
	char __thrift_targetUser_set;
	char __thrift_sectionNumber_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_clusterkey_set;
	char __thrift_targetId_set;

}

@property (nonatomic,retain) IGRaindropUser * targetUser; 
@property (assign,nonatomic) long long sectionNumber; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clusterkey; 
@property (nonatomic,retain) NSString * targetId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)positionIsSet;
-(void)unsetPosition;
-(char)algorithmIsSet;
-(void)unsetAlgorithm;
-(void)setSectionNumber:(long long)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(char)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(NSString *)targetId;
-(char)targetIdIsSet;
-(void)unsetTargetId;
-(void)setTargetUser:(IGRaindropUser *)arg1 ;
-(void)setClusterkey:(NSString *)arg1 ;
-(id)initWithTargetUser:(id)arg1 sectionNumber:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clusterkey:(id)arg5 targetId:(id)arg6 ;
-(IGRaindropUser *)targetUser;
-(char)targetUserIsSet;
-(void)unsetTargetUser;
-(NSString *)clusterkey;
-(char)clusterkeyIsSet;
-(void)unsetClusterkey;
-(long long)sectionNumber;
-(char)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

