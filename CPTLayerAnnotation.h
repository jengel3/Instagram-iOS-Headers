
#import <Instagram/CPTAnnotation.h>

@class CPTLayer, CPTConstraints;

@interface CPTLayerAnnotation : CPTAnnotation {

	CPTLayer* anchorLayer;
	int rectAnchor;
	CPTConstraints* xConstraints;
	CPTConstraints* yConstraints;

}

@property (nonatomic,__weak,readonly) CPTLayer * anchorLayer; 
@property (assign,nonatomic) int rectAnchor; 
@property (nonatomic,retain) CPTConstraints * xConstraints; 
@property (nonatomic,retain) CPTConstraints * yConstraints; 
-(void)positionContentLayer;
-(id)initWithAnchorLayer:(id)arg1 ;
-(void)setRectAnchor:(int)arg1 ;
-(CPTLayer *)anchorLayer;
-(CPTConstraints *)xConstraints;
-(CPTConstraints *)yConstraints;
-(int)rectAnchor;
-(void)setXConstraints:(CPTConstraints *)arg1 ;
-(void)setYConstraints:(CPTConstraints *)arg1 ;
-(void)setConstraints;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

