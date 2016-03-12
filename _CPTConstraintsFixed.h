
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTConstraints.h>

@interface _CPTConstraintsFixed : CPTConstraints {

	char isFixedToLower;
	float offset;

}

@property (assign,nonatomic) float offset; 
@property (assign,nonatomic) char isFixedToLower; 
-(id)initWithLowerOffset:(float)arg1 ;
-(id)initWithUpperOffset:(float)arg1 ;
-(char)isEqualToConstraint:(id)arg1 ;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(char)isFixedToLower;
-(void)setIsFixedToLower:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setOffset:(float)arg1 ;
-(float)offset;
@end

