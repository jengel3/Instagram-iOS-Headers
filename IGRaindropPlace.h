/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGRaindropPlace : TBaseStruct <TBase, NSCoding> {

	int __thrift_placeSource;
	NSString* __thrift_name;
	NSString* __thrift_placeId;
	char __thrift_placeSource_set;
	char __thrift_name_set;
	char __thrift_placeId_set;

}

@property (assign,nonatomic) int placeSource; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * placeId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setPlaceSource:(int)arg1 ;
-(id)initWithPlaceSource:(int)arg1 name:(id)arg2 placeId:(id)arg3 ;
-(void)read:(id)arg1 ;
-(int)placeSource;
-(char)placeSourceIsSet;
-(void)unsetPlaceSource;
-(char)nameIsSet;
-(void)unsetName;
-(char)placeIdIsSet;
-(void)unsetPlaceId;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
@end

