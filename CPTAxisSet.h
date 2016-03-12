
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class NSArray, CPTLineStyle;

@interface CPTAxisSet : CPTLayer {

	NSArray* axes;
	CPTLineStyle* borderLineStyle;

}

@property (nonatomic,retain) NSArray * axes; 
@property (nonatomic,copy) CPTLineStyle * borderLineStyle; 
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CPTLineStyle *)borderLineStyle;
-(void)relabelAxes;
-(id)axisForCoordinate:(int)arg1 atIndex:(unsigned)arg2 ;
-(void)setAxes:(NSArray *)arg1 ;
-(void)setBorderLineStyle:(CPTLineStyle *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)display;
-(id)initWithLayer:(id)arg1 ;
-(NSArray *)axes;
@end

