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

@class IGRaindropNavState, NSString;

@interface IGRaindropViewSwitchEvent : TBaseStruct <TBase, NSCoding> {

	int __thrift_fromViewType;
	int __thrift_toViewType;
	IGRaindropNavState* __thrift_fromNavState;
	NSString* __thrift_clickPoint;
	int __thrift_fromViewSubType;
	int __thrift_toViewSubType;
	char __thrift_fromViewType_set;
	char __thrift_toViewType_set;
	char __thrift_fromNavState_set;
	char __thrift_clickPoint_set;
	char __thrift_fromViewSubType_set;
	char __thrift_toViewSubType_set;

}

@property (assign,nonatomic) int fromViewType; 
@property (assign,nonatomic) int toViewType; 
@property (nonatomic,retain) IGRaindropNavState * fromNavState; 
@property (nonatomic,retain) NSString * clickPoint; 
@property (assign,nonatomic) int fromViewSubType; 
@property (assign,nonatomic) int toViewSubType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)read:(id)arg1 ;
-(char)clickPointIsSet;
-(void)unsetClickPoint;
-(void)setFromViewType:(int)arg1 ;
-(void)setToViewType:(int)arg1 ;
-(void)setFromNavState:(IGRaindropNavState *)arg1 ;
-(void)setFromViewSubType:(int)arg1 ;
-(void)setToViewSubType:(int)arg1 ;
-(id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4 fromViewSubType:(int)arg5 toViewSubType:(int)arg6 ;
-(int)fromViewType;
-(char)fromViewTypeIsSet;
-(void)unsetFromViewType;
-(int)toViewType;
-(char)toViewTypeIsSet;
-(void)unsetToViewType;
-(IGRaindropNavState *)fromNavState;
-(char)fromNavStateIsSet;
-(void)unsetFromNavState;
-(int)fromViewSubType;
-(char)fromViewSubTypeIsSet;
-(void)unsetFromViewSubType;
-(int)toViewSubType;
-(char)toViewSubTypeIsSet;
-(void)unsetToViewSubType;
-(char)makeImmutable;
-(void)setClickPoint:(NSString *)arg1 ;
-(NSString *)clickPoint;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

