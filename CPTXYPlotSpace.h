
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlotSpace.h>
#import <Instagram/CPTAnimationDelegate.h>

@class CPTPlotRange, NSMutableArray, NSString;

@interface CPTXYPlotSpace : CPTPlotSpace <CPTAnimationDelegate> {

	char allowsMomentumX;
	char allowsMomentumY;
	CPTPlotRange* xRange;
	CPTPlotRange* yRange;
	CPTPlotRange* globalXRange;
	CPTPlotRange* globalYRange;
	int xScaleType;
	int yScaleType;
	int momentumAnimationCurve;
	int bounceAnimationCurve;
	float momentumAcceleration;
	float bounceAcceleration;
	float minimumDisplacementToDrag;
	NSMutableArray* animations;
	CGPoint lastDragPoint;
	CGPoint lastDisplacement;
	double lastDragTime;
	double lastDeltaTime;

}

@property (assign,nonatomic) char isDragging; 
@property (assign,nonatomic) CGPoint lastDragPoint; 
@property (assign,nonatomic) CGPoint lastDisplacement; 
@property (assign,nonatomic) double lastDragTime; 
@property (assign,nonatomic) double lastDeltaTime; 
@property (nonatomic,retain) NSMutableArray * animations; 
@property (nonatomic,copy) CPTPlotRange * xRange; 
@property (nonatomic,copy) CPTPlotRange * yRange; 
@property (nonatomic,copy) CPTPlotRange * globalXRange; 
@property (nonatomic,copy) CPTPlotRange * globalYRange; 
@property (assign,nonatomic) int xScaleType; 
@property (assign,nonatomic) int yScaleType; 
@property (assign,nonatomic) char allowsMomentum; 
@property (assign,nonatomic) char allowsMomentumX; 
@property (assign,nonatomic) char allowsMomentumY; 
@property (assign,nonatomic) int momentumAnimationCurve; 
@property (assign,nonatomic) int bounceAnimationCurve; 
@property (assign,nonatomic) float momentumAcceleration; 
@property (assign,nonatomic) float bounceAcceleration; 
@property (assign,nonatomic) float minimumDisplacementToDrag; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAnimations;
-(void)animationDidFinish:(id)arg1 ;
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(id)plotRangeForCoordinate:(int)arg1 ;
-(int)scaleTypeForCoordinate:(int)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CGPoint)plotAreaViewPointForPlotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 ;
-(void)doublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 forPlotAreaViewPoint:(CGPoint)arg3 ;
-(CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 ;
-(void)plotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 forPlotAreaViewPoint:(CGPoint)arg3 ;
-(void)setPlotRange:(id)arg1 forCoordinate:(int)arg2 ;
-(unsigned)numberOfCoordinates;
-(CGPoint)plotAreaViewPointForPlotPoint:(id)arg1 ;
-(id)plotPointForPlotAreaViewPoint:(CGPoint)arg1 ;
-(CGPoint)plotAreaViewPointForEvent:(UIEvent*)arg1 ;
-(id)plotPointForEvent:(UIEvent*)arg1 ;
-(void)plotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 forEvent:(UIEvent*)arg3 ;
-(void)doublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 forEvent:(UIEvent*)arg3 ;
-(void)setScaleType:(int)arg1 forCoordinate:(int)arg2 ;
-(void)scaleToFitPlots:(id)arg1 ;
-(void)scaleBy:(float)arg1 aboutPoint:(CGPoint)arg2 ;
-(int)xScaleType;
-(int)yScaleType;
-(void)setXScaleType:(int)arg1 ;
-(void)setYScaleType:(int)arg1 ;
-(CPTPlotRange *)globalXRange;
-(CPTPlotRange *)globalYRange;
-(char)allowsMomentumX;
-(char)allowsMomentumY;
-(int)momentumAnimationCurve;
-(int)bounceAnimationCurve;
-(float)momentumAcceleration;
-(float)bounceAcceleration;
-(float)minimumDisplacementToDrag;
-(void)setAllowsMomentum:(char)arg1 ;
-(id)constrainRange:(id)arg1 toGlobalRange:(id)arg2 ;
-(CGPoint)lastDisplacement;
-(float)viewCoordinateForRange:(id)arg1 coordinate:(int)arg2 direction:(char)arg3 ;
-(float)viewCoordinateForViewLength:(SCD_Struct_CP137)arg1 linearPlotRange:(id)arg2 plotCoordinateValue:(SCD_Struct_CP137)arg3 ;
-(float)viewCoordinateForViewLength:(float)arg1 logPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3 ;
-(float)viewCoordinateForViewLength:(float)arg1 logModulusPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3 ;
-(float)viewCoordinateForViewLength:(float)arg1 linearPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3 ;
-(SCD_Struct_CP137)plotCoordinateForViewLength:(SCD_Struct_CP137)arg1 linearPlotRange:(id)arg2 boundsLength:(SCD_Struct_CP137)arg3 ;
-(double)doublePrecisionPlotCoordinateForViewLength:(float)arg1 logPlotRange:(id)arg2 boundsLength:(float)arg3 ;
-(double)doublePrecisionPlotCoordinateForViewLength:(float)arg1 logModulusPlotRange:(id)arg2 boundsLength:(float)arg3 ;
-(double)doublePrecisionPlotCoordinateForViewLength:(float)arg1 linearPlotRange:(id)arg2 boundsLength:(float)arg3 ;
-(void)setAllowsMomentumX:(char)arg1 ;
-(void)setAllowsMomentumY:(char)arg1 ;
-(void)setLastDisplacement:(CGPoint)arg1 ;
-(void)setLastDragTime:(double)arg1 ;
-(void)setLastDeltaTime:(double)arg1 ;
-(char)allowsMomentum;
-(double)lastDragTime;
-(double)lastDeltaTime;
-(void)animateRangeForCoordinate:(int)arg1 shift:(SCD_Struct_CP137)arg2 momentumTime:(float)arg3 speed:(float)arg4 acceleration:(float)arg5 ;
-(id)shiftRange:(id)arg1 by:(SCD_Struct_CP137)arg2 usingMomentum:(char)arg3 inGlobalRange:(id)arg4 withDisplacement:(float*)arg5 ;
-(void)setGlobalXRange:(CPTPlotRange *)arg1 ;
-(void)setGlobalYRange:(CPTPlotRange *)arg1 ;
-(void)setMomentumAnimationCurve:(int)arg1 ;
-(void)setBounceAnimationCurve:(int)arg1 ;
-(void)setMomentumAcceleration:(float)arg1 ;
-(void)setBounceAcceleration:(float)arg1 ;
-(void)setMinimumDisplacementToDrag:(float)arg1 ;
-(CPTPlotRange *)yRange;
-(void)setYRange:(CPTPlotRange *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)animations;
-(id)debugQuickLookObject;
-(void)setLastDragPoint:(CGPoint)arg1 ;
-(CGPoint)lastDragPoint;
-(CPTPlotRange *)xRange;
-(void)setXRange:(CPTPlotRange *)arg1 ;
@end

