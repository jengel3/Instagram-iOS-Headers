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

@interface IGRaindropPositionIn2D : TBaseStruct <TBase, NSCoding> {

	long long __thrift_x;
	long long __thrift_y;
	char __thrift_x_set;
	char __thrift_y_set;

}

@property (assign,nonatomic) long long x; 
@property (assign,nonatomic) long long y; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)read:(id)arg1 ;
-(id)initWithX:(long long)arg1 y:(long long)arg2 ;
-(char)xIsSet;
-(void)unsetX;
-(char)yIsSet;
-(void)unsetY;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(long long)x;
-(void)setX:(long long)arg1 ;
-(long long)y;
-(void)setY:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

