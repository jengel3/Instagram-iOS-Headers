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

@interface IGRaindropBeaconEvent : TBaseStruct <TBase, NSCoding> {

	long long __thrift_sequenceId;
	char __thrift_sequenceId_set;

}

@property (assign,nonatomic) long long sequenceId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)read:(id)arg1 ;
-(void)setSequenceId:(long long)arg1 ;
-(id)initWithSequenceId:(long long)arg1 ;
-(long long)sequenceId;
-(char)sequenceIdIsSet;
-(void)unsetSequenceId;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

