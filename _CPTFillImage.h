
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTFill.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTImage;

@interface _CPTFillImage : CPTFill <NSCopying, NSCoding> {

	CPTImage* fillImage;

}

@property (nonatomic,copy) CPTImage * fillImage; 
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)isOpaque;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFillImage:(CPTImage *)arg1 ;
-(CPTImage *)fillImage;
@end

