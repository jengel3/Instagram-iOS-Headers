/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleInnerFill : IGPathStyle {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)fillWithColor:(id)arg1 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
@end

