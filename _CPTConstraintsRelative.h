
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTConstraints.h>

@interface _CPTConstraintsRelative : CPTConstraints {

	float offset;

}

@property (assign,nonatomic) float offset; 
-(char)isEqualToConstraint:(id)arg1 ;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(id)initWithRelativeOffset:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setOffset:(float)arg1 ;
-(float)offset;
@end

