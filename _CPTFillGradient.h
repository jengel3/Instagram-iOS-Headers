/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTFill.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTGradient;

@interface _CPTFillGradient : CPTFill <NSCopying, NSCoding> {

	CPTGradient* fillGradient;

}

@property (nonatomic,copy) CPTGradient * fillGradient; 
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)isOpaque;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(CPTGradient *)fillGradient;
-(void)setFillGradient:(CPTGradient *)arg1 ;
-(id)initWithGradient:(id)arg1 ;
@end
