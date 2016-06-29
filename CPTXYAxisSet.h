
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAxisSet.h>

@class CPTXYAxis;

@interface CPTXYAxisSet : CPTAxisSet

@property (nonatomic,readonly) CPTXYAxis * xAxis; 
@property (nonatomic,readonly) CPTXYAxis * yAxis; 
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayers;
-(CPTXYAxis *)yAxis;
-(CPTXYAxis *)xAxis;
@end

