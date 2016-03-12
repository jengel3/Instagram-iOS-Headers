
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CPTColorSpace : NSObject <NSCoding> {

	CGColorSpaceRef cgColorSpace;

}

@property (nonatomic,readonly) CGColorSpaceRef cgColorSpace; 
+(id)genericRGBSpace;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)cgColorSpace;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

