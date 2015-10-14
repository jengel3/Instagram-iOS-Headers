/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString;

@interface IGRaindropFollowEvent : TBaseStruct <TBase, NSCoding> {

	char __thrift_isFollow;
	long long __thrift_targetUserId;
	long long __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clickPoint;
	NSString* __thrift_errorMessage;
	long long __thrift_sectionNumber;
	NSString* __thrift_clusterKey;
	NSString* __thrift_targetId;
	char __thrift_isFollow_set;
	char __thrift_targetUserId_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_clickPoint_set;
	char __thrift_errorMessage_set;
	char __thrift_sectionNumber_set;
	char __thrift_clusterKey_set;
	char __thrift_targetId_set;

}

@property (assign,nonatomic) char isFollow; 
@property (assign,nonatomic) long long targetUserId; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clickPoint; 
@property (nonatomic,retain) NSString * errorMessage; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (nonatomic,retain) NSString * targetId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setClickPoint:(NSString *)arg1 ;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(NSString *)clickPoint;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)positionIsSet;
-(void)unsetPosition;
-(char)algorithmIsSet;
-(void)unsetAlgorithm;
-(void)setIsFollow:(char)arg1 ;
-(void)setTargetUserId:(long long)arg1 ;
-(void)setSectionNumber:(long long)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(id)initWithIsFollow:(char)arg1 targetUserId:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(long long)arg7 clusterKey:(id)arg8 targetId:(id)arg9 ;
-(char)isFollow;
-(char)isFollowIsSet;
-(void)unsetIsFollow;
-(long long)targetUserId;
-(char)targetUserIdIsSet;
-(void)unsetTargetUserId;
-(char)clickPointIsSet;
-(void)unsetClickPoint;
-(char)errorMessageIsSet;
-(void)unsetErrorMessage;
-(char)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(char)clusterKeyIsSet;
-(void)unsetClusterKey;
-(NSString *)targetId;
-(char)targetIdIsSet;
-(void)unsetTargetId;
-(long long)sectionNumber;
-(char)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end

