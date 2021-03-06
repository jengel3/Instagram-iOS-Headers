
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlotDataSource.h>

@class CPTPlot, CPTPlotRange, CPTMutablePlotRange, NSString;

@interface CPTFunctionDataSource : NSObject <CPTPlotDataSource> {

	/*function pointer*/void* dataSourceFunction;
	/*^block*/id dataSourceBlock;
	CPTPlot* dataPlot;
	float resolution;
	CPTPlotRange* dataRange;
	unsigned cachedCount;
	unsigned dataCount;
	CPTMutablePlotRange* cachedPlotRange;
	double cachedStep;

}

@property (nonatomic,retain) CPTPlot * dataPlot; 
@property (assign,nonatomic) double cachedStep; 
@property (assign,nonatomic) unsigned dataCount; 
@property (assign,nonatomic) unsigned cachedCount; 
@property (nonatomic,retain) CPTMutablePlotRange * cachedPlotRange; 
@property (nonatomic,readonly) /*function pointer*/void* dataSourceFunction; 
@property (nonatomic,readonly) id dataSourceBlock; 
@property (assign,nonatomic) float resolution; 
@property (nonatomic,retain) CPTPlotRange * dataRange; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataSourceForPlot:(id)arg1 withFunction:(/*function pointer*/void*)arg2 ;
+(id)dataSourceForPlot:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)dataForPlot:(id)arg1 recordIndexRange:(NSRange)arg2 ;
-(id)initForPlot:(id)arg1 withFunction:(/*function pointer*/void*)arg2 ;
-(id)initForPlot:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initForPlot:(id)arg1 ;
-(void)plotBoundsChanged;
-(void)setCachedPlotRange:(CPTMutablePlotRange *)arg1 ;
-(CPTMutablePlotRange *)cachedPlotRange;
-(CPTPlot *)dataPlot;
-(void)setCachedStep:(double)arg1 ;
-(CPTPlotRange *)dataRange;
-(double)cachedStep;
-(void)plotSpaceChanged;
-(/*function pointer*/void*)dataSourceFunction;
-(id)dataSourceBlock;
-(void)setDataRange:(CPTPlotRange *)arg1 ;
-(void)setDataPlot:(CPTPlot *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)dataCount;
-(void)setDataCount:(unsigned)arg1 ;
-(unsigned)cachedCount;
-(void)setCachedCount:(unsigned)arg1 ;
-(float)resolution;
-(void)setResolution:(float)arg1 ;
@end

