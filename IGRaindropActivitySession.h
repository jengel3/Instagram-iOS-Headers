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

@interface IGRaindropActivitySession : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_sessionId;
	long long __thrift_sessionIdIndex;
	long long __thrift_lengthInMillis;
	char __thrift_sessionId_set;
	char __thrift_sessionIdIndex_set;
	char __thrift_lengthInMillis_set;

}

@property (nonatomic,retain) NSString * sessionId; 
@property (assign,nonatomic) long long sessionIdIndex; 
@property (assign,nonatomic) long long lengthInMillis; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)read:(id)arg1 ;
-(void)setSessionIdIndex:(long long)arg1 ;
-(void)setLengthInMillis:(long long)arg1 ;
-(id)initWithSessionId:(id)arg1 sessionIdIndex:(long long)arg2 lengthInMillis:(long long)arg3 ;
-(char)sessionIdIsSet;
-(void)unsetSessionId;
-(long long)sessionIdIndex;
-(char)sessionIdIndexIsSet;
-(void)unsetSessionIdIndex;
-(long long)lengthInMillis;
-(char)lengthInMillisIsSet;
-(void)unsetLengthInMillis;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
@end

