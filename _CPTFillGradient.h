
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

