
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor;

@interface CPTColor : NSObject <NSCopying, NSCoding> {

	CGColorRef cgColor;

}

@property (nonatomic,readonly) UIColor * uiColor; 
@property (nonatomic,readonly) CGColorRef cgColor; 
@property (getter=isOpaque,nonatomic,readonly) char opaque; 
+(id)colorWithGenericGray:(float)arg1 ;
+(id)colorWithComponentRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)blackColor;
+(id)clearColor;
+(id)whiteColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)lightGrayColor;
+(id)grayColor;
+(id)darkGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
-(id)initWithComponentRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(UIColor *)uiColor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(CGColorRef)cgColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)debugQuickLookObject;
@end

