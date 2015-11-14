/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropUser, NSNumber, NSString;

@interface IGRaindropUserClickEvent : TBaseStruct {

	IGRaindropUser* __thrift_user;
	NSNumber* __thrift_sectionNumber;
	NSNumber* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithUser:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 targetId:(id)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

