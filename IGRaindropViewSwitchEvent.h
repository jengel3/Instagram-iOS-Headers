/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropNavState, NSString;

@interface IGRaindropViewSwitchEvent : TBaseStruct {

	int __thrift_fromViewType;
	int __thrift_toViewType;
	IGRaindropNavState* __thrift_fromNavState;
	NSString* __thrift_clickPoint;
	int __thrift_fromViewSubType;
	int __thrift_toViewSubType;

}
-(id)toDict;
-(id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4 fromViewSubType:(int)arg5 toViewSubType:(int)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

