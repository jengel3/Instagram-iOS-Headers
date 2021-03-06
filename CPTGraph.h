
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTBorderedLayer.h>

@class CPTGraphHostingView, CPTPlotAreaFrame, NSMutableArray, NSString, NSAttributedString, CPTTextStyle, CPTLegend, CPTLayerAnnotation, CPTAxisSet, CPTPlotSpace, NSArray;

@interface CPTGraph : CPTBorderedLayer {

	char inTitleUpdate;
	CPTGraphHostingView* hostingView;
	CPTPlotAreaFrame* plotAreaFrame;
	NSMutableArray* plots;
	NSMutableArray* plotSpaces;
	NSString* title;
	NSAttributedString* attributedTitle;
	CPTTextStyle* titleTextStyle;
	int titlePlotAreaFrameAnchor;
	CPTLegend* legend;
	int legendAnchor;
	CPTLayerAnnotation* titleAnnotation;
	CPTLayerAnnotation* legendAnnotation;
	CGPoint titleDisplacement;
	CGPoint legendDisplacement;

}

@property (nonatomic,retain) NSMutableArray * plots; 
@property (nonatomic,retain) NSMutableArray * plotSpaces; 
@property (nonatomic,retain) CPTLayerAnnotation * titleAnnotation; 
@property (nonatomic,retain) CPTLayerAnnotation * legendAnnotation; 
@property (assign,nonatomic) char inTitleUpdate; 
@property (assign,nonatomic,__weak) CPTGraphHostingView * hostingView; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) CPTTextStyle * titleTextStyle; 
@property (assign,nonatomic) CGPoint titleDisplacement; 
@property (assign,nonatomic) int titlePlotAreaFrameAnchor; 
@property (nonatomic,retain) CPTAxisSet * axisSet; 
@property (nonatomic,retain) CPTPlotAreaFrame * plotAreaFrame; 
@property (nonatomic,readonly) CPTPlotSpace * defaultPlotSpace; 
@property (nonatomic,retain) NSArray * topDownLayerOrder; 
@property (nonatomic,retain) CPTLegend * legend; 
@property (assign,nonatomic) int legendAnchor; 
@property (assign,nonatomic) CGPoint legendDisplacement; 
+(char)needsDisplayForKey:(id)arg1 ;
-(CPTGraphHostingView *)hostingView;
-(void)addPlot:(id)arg1 ;
-(CPTPlotAreaFrame *)plotAreaFrame;
-(CPTPlotSpace *)defaultPlotSpace;
-(void)setAxisSet:(CPTAxisSet *)arg1 ;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)inTitleUpdate;
-(void)setInTitleUpdate:(char)arg1 ;
-(CPTAxisSet *)axisSet;
-(void)setPlotAreaFrame:(CPTPlotAreaFrame *)arg1 ;
-(id)newPlotSpace;
-(void)addPlotSpace:(id)arg1 ;
-(id)newAxisSet;
-(NSMutableArray *)plotSpaces;
-(int)titlePlotAreaFrameAnchor;
-(CGPoint)titleDisplacement;
-(CPTLayerAnnotation *)legendAnnotation;
-(int)legendAnchor;
-(CGPoint)legendDisplacement;
-(void)addPlot:(id)arg1 toPlotSpace:(id)arg2 ;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2 intoPlotSpace:(id)arg3 ;
-(void)plotSpaceMappingDidChange:(id)arg1 ;
-(CGPoint)contentAnchorForRectAnchor:(int)arg1 ;
-(void)setLegendAnnotation:(CPTLayerAnnotation *)arg1 ;
-(NSArray *)topDownLayerOrder;
-(void)setTopDownLayerOrder:(NSArray *)arg1 ;
-(id)allPlotSpaces;
-(id)plotSpaceAtIndex:(unsigned)arg1 ;
-(id)plotSpaceWithIdentifier:(id)arg1 ;
-(void)removePlotSpace:(id)arg1 ;
-(void)applyTheme:(id)arg1 ;
-(void)setLegendAnchor:(int)arg1 ;
-(void)setLegendDisplacement:(CGPoint)arg1 ;
-(void)setTitleDisplacement:(CGPoint)arg1 ;
-(void)setTitlePlotAreaFrameAnchor:(int)arg1 ;
-(void)setPlotSpaces:(NSMutableArray *)arg1 ;
-(void)layoutAndRenderInContext:(CGContextRef)arg1 ;
-(id)allPlots;
-(NSMutableArray *)plots;
-(id)plotWithIdentifier:(id)arg1 ;
-(id)plotAtIndex:(unsigned)arg1 ;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removePlot:(id)arg1 ;
-(void)removePlotWithIdentifier:(id)arg1 ;
-(void)setPlots:(NSMutableArray *)arg1 ;
-(void)reloadDataIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSAttributedString *)attributedTitle;
-(void)setPaddingTop:(float)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setPaddingBottom:(float)arg1 ;
-(CPTLegend *)legend;
-(void)setLegend:(CPTLegend *)arg1 ;
-(void)setTitleTextStyle:(CPTTextStyle *)arg1 ;
-(CPTTextStyle *)titleTextStyle;
-(CPTLayerAnnotation *)titleAnnotation;
-(void)setTitleAnnotation:(CPTLayerAnnotation *)arg1 ;
@end

