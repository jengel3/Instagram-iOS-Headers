
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAxis.h>

@class NSNumber, CPTConstraints;

@interface CPTXYAxis : CPTAxis {

	NSNumber* orthogonalPosition;
	CPTConstraints* axisConstraints;

}

@property (nonatomic,retain) NSNumber * orthogonalPosition; 
@property (nonatomic,retain) CPTConstraints * axisConstraints; 
-(CGPoint)viewPointForCoordinateValue:(id)arg1 ;
-(id)defaultTitleLocation;
-(void)drawGridLinesInContext:(CGContextRef)arg1 isMajor:(char)arg2 ;
-(void)drawBackgroundBandsInContext:(CGContextRef)arg1 ;
-(void)drawBackgroundLimitsInContext:(CGContextRef)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(NSNumber *)orthogonalPosition;
-(CPTConstraints *)axisConstraints;
-(CGPoint)viewPointForOrthogonalCoordinate:(id)arg1 axisCoordinate:(id)arg2 ;
-(void)orthogonalCoordinateViewLowerBound:(float*)arg1 upperBound:(float*)arg2 ;
-(void)drawTicksInContext:(CGContextRef)arg1 atLocations:(id)arg2 withLength:(float)arg3 inRange:(id)arg4 isMajor:(char)arg5 ;
-(void)setAxisConstraints:(CPTConstraints *)arg1 ;
-(void)setOrthogonalPosition:(NSNumber *)arg1 ;
-(void)setCoordinate:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithLayer:(id)arg1 ;
@end

