
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPTConstraints : NSObject <NSCoding, NSCopying>
+(id)constraintWithLowerOffset:(float)arg1 ;
+(id)constraintWithUpperOffset:(float)arg1 ;
+(id)constraintWithRelativeOffset:(float)arg1 ;
-(id)initWithLowerOffset:(float)arg1 ;
-(id)initWithUpperOffset:(float)arg1 ;
-(char)isEqualToConstraint:(id)arg1 ;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(id)initWithRelativeOffset:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

