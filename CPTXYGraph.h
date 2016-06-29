
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTGraph.h>

@interface CPTXYGraph : CPTGraph {

	int xScaleType;
	int yScaleType;

}

@property (assign,nonatomic) int xScaleType; 
@property (assign,nonatomic) int yScaleType; 
-(id)newPlotSpace;
-(id)newAxisSet;
-(id)initWithFrame:(CGRect)arg1 xScaleType:(int)arg2 yScaleType:(int)arg3 ;
-(int)xScaleType;
-(int)yScaleType;
-(void)setXScaleType:(int)arg1 ;
-(void)setYScaleType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

