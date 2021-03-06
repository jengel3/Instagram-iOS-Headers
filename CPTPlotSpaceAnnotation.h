
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAnnotation.h>

@class NSArray, CPTPlotSpace;

@interface CPTPlotSpaceAnnotation : CPTAnnotation {

	NSArray* anchorPlotPoint;
	CPTPlotSpace* plotSpace;
	SCD_Struct_CP137* decimalAnchor;
	unsigned anchorCount;

}

@property (assign,nonatomic) SCD_Struct_CP137* decimalAnchor; 
@property (assign,nonatomic) unsigned anchorCount; 
@property (nonatomic,copy) NSArray * anchorPlotPoint; 
@property (nonatomic,readonly) CPTPlotSpace * plotSpace; 
-(void)positionContentLayer;
-(CPTPlotSpace *)plotSpace;
-(void)setAnchorPlotPoint:(NSArray *)arg1 ;
-(void)setContentNeedsLayout;
-(id)initWithPlotSpace:(id)arg1 anchorPlotPoint:(id)arg2 ;
-(NSArray *)anchorPlotPoint;
-(SCD_Struct_CP137*)decimalAnchor;
-(void)setAnchorCount:(unsigned)arg1 ;
-(void)setDecimalAnchor:(SCD_Struct_CP137*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)anchorCount;
@end

