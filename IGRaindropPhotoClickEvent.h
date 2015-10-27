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

@class IGRaindropMedia, IGRaindropPositionIn2D, NSString;

@interface IGRaindropPhotoClickEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropMedia* __thrift_media;
	long long __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	NSString* __thrift_targetId;
	NSString* __thrift_searchSessionToken;
	char __thrift_media_set;
	char __thrift_sectionNumber_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_clusterKey_set;
	char __thrift_sectionType_set;
	char __thrift_targetId_set;
	char __thrift_searchSessionToken_set;

}

@property (nonatomic,retain) IGRaindropMedia * media; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) IGRaindropPositionIn2D * position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (assign,nonatomic) int sectionType; 
@property (nonatomic,retain) NSString * targetId; 
@property (nonatomic,retain) NSString * searchSessionToken; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(char)sectionTypeIsSet;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)mediaIsSet;
-(void)unsetMedia;
-(char)positionIsSet;
-(void)unsetPosition;
-(char)algorithmIsSet;
-(void)unsetAlgorithm;
-(void)unsetSectionType;
-(void)setSectionNumber:(long long)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(char)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(char)clusterKeyIsSet;
-(void)unsetClusterKey;
-(NSString *)targetId;
-(char)targetIdIsSet;
-(void)unsetTargetId;
-(void)setSearchSessionToken:(NSString *)arg1 ;
-(NSString *)searchSessionToken;
-(char)searchSessionTokenIsSet;
-(void)unsetSearchSessionToken;
-(id)initWithMedia:(id)arg1 sectionNumber:(long long)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 sectionType:(int)arg6 targetId:(id)arg7 searchSessionToken:(id)arg8 ;
-(long long)sectionNumber;
-(char)makeImmutable;
-(NSString *)algorithm;
-(int)sectionType;
-(void)setSectionType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setPosition:(IGRaindropPositionIn2D *)arg1 ;
-(IGRaindropPositionIn2D *)position;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
-(IGRaindropMedia *)media;
-(void)setMedia:(IGRaindropMedia *)arg1 ;
@end

