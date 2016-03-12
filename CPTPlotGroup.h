
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@interface CPTPlotGroup : CPTLayer
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)addPlot:(id)arg1 ;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removePlot:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)display;
@end

