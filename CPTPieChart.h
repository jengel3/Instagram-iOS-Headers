
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlot.h>

@class CPTLineStyle, CPTFill, NSArray;

@interface CPTPieChart : CPTPlot {

	char labelRotationRelativeToRadius;
	float pieRadius;
	float pieInnerRadius;
	float startAngle;
	float endAngle;
	int sliceDirection;
	CPTLineStyle* borderLineStyle;
	CPTFill* overlayFill;
	unsigned pointingDeviceDownIndex;
	CGPoint centerAnchor;

}

@property (nonatomic,copy) NSArray * sliceWidths; 
@property (nonatomic,copy) NSArray * sliceFills; 
@property (nonatomic,copy) NSArray * sliceRadialOffsets; 
@property (assign,nonatomic) unsigned pointingDeviceDownIndex; 
@property (assign,nonatomic) float pieRadius; 
@property (assign,nonatomic) float pieInnerRadius; 
@property (assign,nonatomic) float startAngle; 
@property (assign,nonatomic) float endAngle; 
@property (assign,nonatomic) int sliceDirection; 
@property (assign,nonatomic) CGPoint centerAnchor; 
@property (nonatomic,copy) CPTLineStyle * borderLineStyle; 
@property (nonatomic,copy) CPTFill * overlayFill; 
@property (assign,nonatomic) char labelRotationRelativeToRadius; 
+(id)defaultPieSliceColorForIndex:(unsigned)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(void)setLabelRotation:(float)arg1 ;
-(CPTLineStyle *)borderLineStyle;
-(void)setBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)insertDataAtIndex:(unsigned)arg1 numberOfRecords:(unsigned)arg2 ;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(unsigned)numberOfLegendEntries;
-(id)titleForLegendEntryAtIndex:(unsigned)arg1 ;
-(id)attributedTitleForLegendEntryAtIndex:(unsigned)arg1 ;
-(float)pieInnerRadius;
-(int)sliceDirection;
-(CGPoint)centerAnchor;
-(CPTFill *)overlayFill;
-(char)labelRotationRelativeToRadius;
-(void)reloadDataInIndexRange:(NSRange)arg1 ;
-(void)reloadSliceFillsInIndexRange:(NSRange)arg1 ;
-(void)reloadRadialOffsetsInIndexRange:(NSRange)arg1 ;
-(void)reloadPlotDataInIndexRange:(NSRange)arg1 ;
-(void)updateNormalizedData;
-(void)deleteDataInIndexRange:(NSRange)arg1 ;
-(float)radiansForPieSliceValue:(float)arg1 ;
-(void)addSliceToPath:(CGPathRef)arg1 centerPoint:(CGPoint)arg2 startingAngle:(float)arg3 finishingAngle:(float)arg4 ;
-(id)sliceFillForIndex:(unsigned)arg1 ;
-(float)normalizedPosition:(float)arg1 ;
-(char)angle:(float)arg1 betweenStartAngle:(float)arg2 endAngle:(float)arg3 ;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1 ;
-(void)setPointingDeviceDownIndex:(unsigned)arg1 ;
-(unsigned)pointingDeviceDownIndex;
-(void)reloadSliceFills;
-(void)reloadRadialOffsets;
-(unsigned)pieSliceIndexAtAngle:(float)arg1 ;
-(float)medianAngleForPieSliceIndex:(unsigned)arg1 ;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2 ;
-(NSArray *)sliceWidths;
-(void)setSliceWidths:(NSArray *)arg1 ;
-(NSArray *)sliceFills;
-(void)setSliceFills:(NSArray *)arg1 ;
-(NSArray *)sliceRadialOffsets;
-(void)setSliceRadialOffsets:(NSArray *)arg1 ;
-(void)setPieInnerRadius:(float)arg1 ;
-(void)setSliceDirection:(int)arg1 ;
-(void)setCenterAnchor:(CGPoint)arg1 ;
-(void)setLabelRotationRelativeToRadius:(char)arg1 ;
-(void)setOverlayFill:(CPTFill *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reloadData;
-(id)initWithLayer:(id)arg1 ;
-(void)setStartAngle:(float)arg1 ;
-(float)startAngle;
-(float)pieRadius;
-(void)setPieRadius:(float)arg1 ;
-(void)setEndAngle:(float)arg1 ;
-(float)endAngle;
@end

