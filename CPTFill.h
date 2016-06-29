
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CPTFill : NSObject <NSCopying, NSCoding>

@property (getter=isOpaque,nonatomic,readonly) char opaque; 
@property (nonatomic,readonly) CGColorRef cgColor; 
+(id)fillWithColor:(id)arg1 ;
+(id)fillWithGradient:(id)arg1 ;
+(id)fillWithImage:(id)arg1 ;
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(CGColorRef)cgColor;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithColor:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithGradient:(id)arg1 ;
@end

