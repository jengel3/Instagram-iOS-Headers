/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropActivitySession : TBaseStruct {

	NSString* __thrift_sessionId;
	NSNumber* __thrift_sessionIdIndex;
	NSNumber* __thrift_lengthInMillis;

}
-(id)toDict;
-(id)initWithSessionId:(id)arg1 sessionIdIndex:(id)arg2 lengthInMillis:(id)arg3 ;
-(id)sessionIdIndex;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)sessionId;
@end

