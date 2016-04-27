
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTLineStyle, NSNumber, CPTPlotRange, CPTLineCap, CPTTextStyle, CPTAxisTitle, NSString, NSAttributedString, CPTPlotSpace, NSFormatter, NSSet, NSArray, CPTShadow, NSMutableArray, CPTPlotArea, CPTGridLines, CPTAxisLabel, CPTAxisSet;

@interface CPTAxis : CPTLayer {

	char labelFormatterChanged;
	char minorLabelFormatterChanged;
	char needsRelabel;
	char separateLayers;
	char inTitleUpdate;
	char labelsUpdated;
	CPTLineStyle* axisLineStyle;
	int coordinate;
	NSNumber* labelingOrigin;
	int tickDirection;
	CPTPlotRange* visibleRange;
	CPTPlotRange* visibleAxisRange;
	CPTLineCap* axisLineCapMin;
	CPTLineCap* axisLineCapMax;
	CPTTextStyle* titleTextStyle;
	CPTAxisTitle* axisTitle;
	float titleOffset;
	NSString* title;
	NSAttributedString* attributedTitle;
	float titleRotation;
	int titleDirection;
	NSNumber* titleLocation;
	CPTPlotSpace* plotSpace;
	int labelingPolicy;
	float labelOffset;
	float minorTickLabelOffset;
	float labelRotation;
	float minorTickLabelRotation;
	int labelAlignment;
	int minorTickLabelAlignment;
	CPTTextStyle* labelTextStyle;
	CPTTextStyle* minorTickLabelTextStyle;
	int tickLabelDirection;
	int minorTickLabelDirection;
	NSFormatter* labelFormatter;
	NSFormatter* minorTickLabelFormatter;
	NSSet* axisLabels;
	NSSet* minorTickAxisLabels;
	NSArray* labelExclusionRanges;
	CPTShadow* labelShadow;
	CPTShadow* minorTickLabelShadow;
	NSNumber* majorIntervalLength;
	CPTLineStyle* majorTickLineStyle;
	float majorTickLength;
	NSSet* majorTickLocations;
	unsigned preferredNumberOfMajorTicks;
	unsigned minorTicksPerInterval;
	CPTLineStyle* minorTickLineStyle;
	float minorTickLength;
	NSSet* minorTickLocations;
	CPTLineStyle* majorGridLineStyle;
	CPTLineStyle* minorGridLineStyle;
	CPTPlotRange* gridLinesRange;
	NSArray* alternatingBandFills;
	NSMutableArray* mutableBackgroundLimitBands;
	CPTPlotArea* plotArea;
	CPTGridLines* minorGridLines;
	CPTGridLines* majorGridLines;
	CPTAxisLabel* pointingDeviceDownLabel;
	CPTAxisLabel* pointingDeviceDownTickLabel;

}

@property (nonatomic,copy) CPTLineStyle * axisLineStyle; 
@property (assign,nonatomic) int coordinate; 
@property (nonatomic,retain) NSNumber * labelingOrigin; 
@property (assign,nonatomic) int tickDirection; 
@property (nonatomic,copy) CPTPlotRange * visibleRange; 
@property (nonatomic,copy) CPTPlotRange * visibleAxisRange; 
@property (nonatomic,copy) CPTLineCap * axisLineCapMin; 
@property (nonatomic,copy) CPTLineCap * axisLineCapMax; 
@property (nonatomic,copy) CPTTextStyle * titleTextStyle; 
@property (nonatomic,retain) CPTAxisTitle * axisTitle; 
@property (assign,nonatomic) float titleOffset; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (assign,nonatomic) float titleRotation; 
@property (assign,nonatomic) int titleDirection; 
@property (nonatomic,retain) NSNumber * titleLocation; 
@property (nonatomic,readonly) NSNumber * defaultTitleLocation; 
@property (assign,nonatomic) int labelingPolicy; 
@property (assign,nonatomic) float labelOffset; 
@property (assign,nonatomic) float minorTickLabelOffset; 
@property (assign,nonatomic) float labelRotation; 
@property (assign,nonatomic) float minorTickLabelRotation; 
@property (assign,nonatomic) int labelAlignment; 
@property (assign,nonatomic) int minorTickLabelAlignment; 
@property (nonatomic,copy) CPTTextStyle * labelTextStyle; 
@property (nonatomic,copy) CPTTextStyle * minorTickLabelTextStyle; 
@property (assign,nonatomic) int tickLabelDirection; 
@property (assign,nonatomic) int minorTickLabelDirection; 
@property (nonatomic,retain) NSFormatter * labelFormatter; 
@property (nonatomic,retain) NSFormatter * minorTickLabelFormatter; 
@property (nonatomic,retain) NSSet * axisLabels; 
@property (nonatomic,retain) NSSet * minorTickAxisLabels; 
@property (assign,nonatomic) char needsRelabel; 
@property (nonatomic,retain) NSArray * labelExclusionRanges; 
@property (nonatomic,retain) CPTShadow * labelShadow; 
@property (nonatomic,retain) CPTShadow * minorTickLabelShadow; 
@property (nonatomic,retain) NSNumber * majorIntervalLength; 
@property (assign,nonatomic) float majorTickLength; 
@property (nonatomic,copy) CPTLineStyle * majorTickLineStyle; 
@property (nonatomic,retain) NSSet * majorTickLocations; 
@property (assign,nonatomic) unsigned preferredNumberOfMajorTicks; 
@property (assign,nonatomic) unsigned minorTicksPerInterval; 
@property (assign,nonatomic) float minorTickLength; 
@property (nonatomic,copy) CPTLineStyle * minorTickLineStyle; 
@property (nonatomic,retain) NSSet * minorTickLocations; 
@property (nonatomic,copy) CPTLineStyle * majorGridLineStyle; 
@property (nonatomic,copy) CPTLineStyle * minorGridLineStyle; 
@property (nonatomic,copy) CPTPlotRange * gridLinesRange; 
@property (nonatomic,copy) NSArray * alternatingBandFills; 
@property (nonatomic,readonly) NSArray * backgroundLimitBands; 
@property (nonatomic,retain) CPTPlotSpace * plotSpace; 
@property (assign,nonatomic) char separateLayers; 
@property (assign,nonatomic,__weak) CPTPlotArea * plotArea; 
@property (assign,nonatomic,__weak) CPTGridLines * minorGridLines; 
@property (assign,nonatomic,__weak) CPTGridLines * majorGridLines; 
@property (nonatomic,readonly) CPTAxisSet * axisSet; 
@property (assign,nonatomic,__weak) CPTAxisLabel * pointingDeviceDownLabel; 
@property (assign,nonatomic,__weak) CPTAxisLabel * pointingDeviceDownTickLabel; 
@property (assign,nonatomic) char labelFormatterChanged; 
@property (assign,nonatomic) char minorLabelFormatterChanged; 
@property (nonatomic,retain) NSMutableArray * mutableBackgroundLimitBands; 
@property (nonatomic,readonly) float tickOffset; 
@property (assign,nonatomic) char inTitleUpdate; 
@property (assign,nonatomic) char labelsUpdated; 
+(char)needsDisplayForKey:(id)arg1 ;
-(CPTPlotSpace *)plotSpace;
-(NSSet *)majorTickLocations;
-(NSSet *)minorTickLocations;
-(float)majorTickLength;
-(float)minorTickLength;
-(float)labelOffset;
-(float)minorTickLabelOffset;
-(float)labelRotation;
-(float)minorTickLabelRotation;
-(int)minorTickLabelAlignment;
-(CPTLineStyle *)majorTickLineStyle;
-(CPTLineStyle *)minorTickLineStyle;
-(int)tickLabelDirection;
-(int)minorTickLabelDirection;
-(CPTLineStyle *)majorGridLineStyle;
-(CPTLineStyle *)minorGridLineStyle;
-(CPTLineCap *)axisLineCapMin;
-(CPTLineCap *)axisLineCapMax;
-(NSNumber *)labelingOrigin;
-(NSNumber *)majorIntervalLength;
-(unsigned)minorTicksPerInterval;
-(unsigned)preferredNumberOfMajorTicks;
-(int)labelingPolicy;
-(CPTTextStyle *)labelTextStyle;
-(CPTTextStyle *)minorTickLabelTextStyle;
-(NSFormatter *)labelFormatter;
-(NSFormatter *)minorTickLabelFormatter;
-(char)labelFormatterChanged;
-(char)minorLabelFormatterChanged;
-(NSSet *)minorTickAxisLabels;
-(CPTAxisTitle *)axisTitle;
-(float)titleRotation;
-(int)titleDirection;
-(NSNumber *)titleLocation;
-(char)needsRelabel;
-(NSArray *)labelExclusionRanges;
-(CPTPlotRange *)visibleAxisRange;
-(CPTPlotRange *)gridLinesRange;
-(NSArray *)alternatingBandFills;
-(NSMutableArray *)mutableBackgroundLimitBands;
-(char)separateLayers;
-(CPTShadow *)labelShadow;
-(CPTShadow *)minorTickLabelShadow;
-(CPTGridLines *)minorGridLines;
-(CPTGridLines *)majorGridLines;
-(id)filteredTickLocations:(id)arg1 ;
-(void)setAxisLabels:(NSSet *)arg1 ;
-(void)setMinorTickAxisLabels:(NSSet *)arg1 ;
-(float)tickOffset;
-(void)setLabelsUpdated:(char)arg1 ;
-(void)setLabelFormatterChanged:(char)arg1 ;
-(void)setMinorLabelFormatterChanged:(char)arg1 ;
-(void)setNeedsRelabel:(char)arg1 ;
-(void)generateFixedIntervalMajorTickLocations:(id*)arg1 minorTickLocations:(id*)arg2 ;
-(void)autoGenerateMajorTickLocations:(id*)arg1 minorTickLocations:(id*)arg2 ;
-(void)generateEqualMajorTickLocations:(id*)arg1 minorTickLocations:(id*)arg2 ;
-(id)filteredMajorTickLocations:(id)arg1 ;
-(void)setMajorTickLocations:(NSSet *)arg1 ;
-(id)filteredMinorTickLocations:(id)arg1 ;
-(void)setMinorTickLocations:(NSSet *)arg1 ;
-(void)updateCustomTickLabels;
-(void)updateAxisLabelsAtLocations:(id)arg1 inRange:(id)arg2 useMajorAxisLabels:(char)arg3 ;
-(CGPoint)viewPointForCoordinateValue:(id)arg1 ;
-(void)relabel;
-(void)updateMajorTickLabels;
-(void)updateMinorTickLabels;
-(void)updateAxisTitle;
-(void)setMutableBackgroundLimitBands:(NSMutableArray *)arg1 ;
-(void)setPointingDeviceDownLabel:(CPTAxisLabel *)arg1 ;
-(void)setPointingDeviceDownTickLabel:(CPTAxisLabel *)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CPTAxisLabel *)pointingDeviceDownLabel;
-(CPTAxisLabel *)pointingDeviceDownTickLabel;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)labelsUpdated;
-(void)setAxisTitle:(CPTAxisTitle *)arg1 ;
-(char)inTitleUpdate;
-(void)setInTitleUpdate:(char)arg1 ;
-(NSNumber *)defaultTitleLocation;
-(void)updateMajorTickLabelOffsets;
-(void)updateMinorTickLabelOffsets;
-(void)setMajorGridLines:(CPTGridLines *)arg1 ;
-(void)setMinorGridLines:(CPTGridLines *)arg1 ;
-(CPTAxisSet *)axisSet;
-(void)setNeedsRelabel;
-(void)addBackgroundLimitBand:(id)arg1 ;
-(void)removeBackgroundLimitBand:(id)arg1 ;
-(void)removeAllBackgroundLimitBands;
-(void)setLabelTextStyle:(CPTTextStyle *)arg1 ;
-(void)setMinorTickLabelTextStyle:(CPTTextStyle *)arg1 ;
-(void)setTitleRotation:(float)arg1 ;
-(void)setTitleDirection:(int)arg1 ;
-(void)setTitleLocation:(NSNumber *)arg1 ;
-(void)setLabelExclusionRanges:(NSArray *)arg1 ;
-(void)setMajorTickLength:(float)arg1 ;
-(void)setMinorTickLength:(float)arg1 ;
-(void)setMinorTickLabelOffset:(float)arg1 ;
-(void)setLabelRotation:(float)arg1 ;
-(void)setMinorTickLabelRotation:(float)arg1 ;
-(void)setMinorTickLabelAlignment:(int)arg1 ;
-(void)setLabelShadow:(CPTShadow *)arg1 ;
-(void)setMinorTickLabelShadow:(CPTShadow *)arg1 ;
-(void)setPlotSpace:(CPTPlotSpace *)arg1 ;
-(void)setMajorTickLineStyle:(CPTLineStyle *)arg1 ;
-(void)setMinorTickLineStyle:(CPTLineStyle *)arg1 ;
-(void)setMajorGridLineStyle:(CPTLineStyle *)arg1 ;
-(void)setMinorGridLineStyle:(CPTLineStyle *)arg1 ;
-(void)setAxisLineCapMin:(CPTLineCap *)arg1 ;
-(void)setAxisLineCapMax:(CPTLineCap *)arg1 ;
-(void)setLabelingOrigin:(NSNumber *)arg1 ;
-(void)setMajorIntervalLength:(NSNumber *)arg1 ;
-(void)setMinorTicksPerInterval:(unsigned)arg1 ;
-(void)setLabelingPolicy:(int)arg1 ;
-(void)setPreferredNumberOfMajorTicks:(unsigned)arg1 ;
-(void)setLabelFormatter:(NSFormatter *)arg1 ;
-(void)setMinorTickLabelFormatter:(NSFormatter *)arg1 ;
-(void)setTickLabelDirection:(int)arg1 ;
-(void)setMinorTickLabelDirection:(int)arg1 ;
-(void)setGridLinesRange:(CPTPlotRange *)arg1 ;
-(void)setVisibleAxisRange:(CPTPlotRange *)arg1 ;
-(void)setSeparateLayers:(char)arg1 ;
-(void)setAlternatingBandFills:(NSArray *)arg1 ;
-(NSArray *)backgroundLimitBands;
-(void)drawGridLinesInContext:(CGContextRef)arg1 isMajor:(char)arg2 ;
-(void)drawBackgroundBandsInContext:(CGContextRef)arg1 ;
-(void)drawBackgroundLimitsInContext:(CGContextRef)arg1 ;
-(void)setCoordinate:(int)arg1 ;
-(int)coordinate;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSAttributedString *)attributedTitle;
-(float)titleOffset;
-(void)setTitleOffset:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setLabelOffset:(float)arg1 ;
-(NSSet *)axisLabels;
-(CPTLineStyle *)axisLineStyle;
-(int)tickDirection;
-(void)setTickDirection:(int)arg1 ;
-(void)setAxisLineStyle:(CPTLineStyle *)arg1 ;
-(CPTPlotArea *)plotArea;
-(int)labelAlignment;
-(void)setLabelAlignment:(int)arg1 ;
-(void)setPlotArea:(CPTPlotArea *)arg1 ;
-(void)setVisibleRange:(CPTPlotRange *)arg1 ;
-(CPTPlotRange *)visibleRange;
-(void)setTitleTextStyle:(CPTTextStyle *)arg1 ;
-(CPTTextStyle *)titleTextStyle;
@end

