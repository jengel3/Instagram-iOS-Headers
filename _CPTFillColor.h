
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTFill.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTColor;

@interface _CPTFillColor : CPTFill <NSCopying, NSCoding> {

	CPTColor* fillColor;

}

@property (nonatomic,copy) CPTColor * fillColor; 
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)isOpaque;
-(CGColorRef)cgColor;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFillColor:(CPTColor *)arg1 ;
-(CPTColor *)fillColor;
-(id)initWithColor:(id)arg1 ;
@end

