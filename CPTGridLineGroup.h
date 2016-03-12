
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer {

	char major;
	CPTPlotArea* plotArea;

}

@property (assign,nonatomic,__weak) CPTPlotArea * plotArea; 
@property (assign,nonatomic) char major; 
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CPTPlotArea *)plotArea;
-(void)setPlotArea:(CPTPlotArea *)arg1 ;
-(void)setMajor:(char)arg1 ;
-(char)major;
@end

