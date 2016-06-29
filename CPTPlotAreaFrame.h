
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTBorderedLayer.h>

@class CPTPlotArea, CPTAxisSet, CPTPlotGroup;

@interface CPTPlotAreaFrame : CPTBorderedLayer {

	CPTPlotArea* plotArea;

}

@property (nonatomic,retain) CPTPlotArea * plotArea; 
@property (nonatomic,retain) CPTAxisSet * axisSet; 
@property (nonatomic,retain) CPTPlotGroup * plotGroup; 
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CPTAxisSet *)axisSet;
-(void)setAxisSet:(CPTAxisSet *)arg1 ;
-(CPTPlotGroup *)plotGroup;
-(void)setPlotGroup:(CPTPlotGroup *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setGraph:(id)arg1 ;
-(CPTPlotArea *)plotArea;
-(void)setPlotArea:(CPTPlotArea *)arg1 ;
@end

