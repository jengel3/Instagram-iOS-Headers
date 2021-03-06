
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTResponder.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCopyingNSCodingNSObject, CPTPlotSpaceDelegate;
@class CPTGraph, NSMutableDictionary, NSString;

@interface CPTPlotSpace : NSObject <CPTResponder, NSCoding> {

	char allowsUserInteraction;
	char isDragging;
	id<NSCopying><NSCoding><NSObject> identifier;
	CPTGraph* graph;
	id<CPTPlotSpaceDelegate> delegate;
	NSMutableDictionary* categoryNames;

}

@property (nonatomic,retain) NSMutableDictionary * categoryNames; 
@property (assign,nonatomic) char isDragging; 
@property (nonatomic,copy) id<NSCopying><NSCoding><NSObject> identifier; 
@property (assign,nonatomic) char allowsUserInteraction; 
@property (assign,nonatomic,__weak) CPTGraph * graph; 
@property (assign,nonatomic,__weak) id<CPTPlotSpaceDelegate> delegate; 
@property (nonatomic,readonly) unsigned numberOfCoordinates; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1 ;
-(id)plotRangeForCoordinate:(int)arg1 ;
-(int)scaleTypeForCoordinate:(int)arg1 ;
-(id)categoryForCoordinate:(int)arg1 atIndex:(unsigned)arg2 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CGPoint)plotAreaViewPointForPlotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 ;
-(void)doublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 forPlotAreaViewPoint:(CGPoint)arg3 ;
-(CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 ;
-(void)removeAllCategories;
-(void)plotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 forPlotAreaViewPoint:(CGPoint)arg3 ;
-(char)allowsUserInteraction;
-(void)setCategoryNames:(NSMutableDictionary *)arg1 ;
-(id)orderedSetForCoordinate:(int)arg1 ;
-(void)addCategory:(id)arg1 forCoordinate:(int)arg2 ;
-(void)removeCategory:(id)arg1 forCoordinate:(int)arg2 ;
-(void)insertCategory:(id)arg1 forCoordinate:(int)arg2 atIndex:(unsigned)arg3 ;
-(void)setCategories:(id)arg1 forCoordinate:(int)arg2 ;
-(id)categoriesForCoordinate:(int)arg1 ;
-(unsigned)indexOfCategory:(id)arg1 forCoordinate:(int)arg2 ;
-(void)setAllowsUserInteraction:(char)arg1 ;
-(void)setPlotRange:(id)arg1 forCoordinate:(int)arg2 ;
-(unsigned)numberOfCoordinates;
-(CGPoint)plotAreaViewPointForPlotPoint:(id)arg1 ;
-(id)plotPointForPlotAreaViewPoint:(CGPoint)arg1 ;
-(CGPoint)plotAreaViewPointForEvent:(UIEvent*)arg1 ;
-(id)plotPointForEvent:(UIEvent*)arg1 ;
-(void)plotPoint:(SCD_Struct_CP137*)arg1 numberOfCoordinates:(unsigned)arg2 forEvent:(UIEvent*)arg3 ;
-(void)doublePrecisionPlotPoint:(double*)arg1 numberOfCoordinates:(unsigned)arg2 forEvent:(UIEvent*)arg3 ;
-(void)setScaleType:(int)arg1 forCoordinate:(int)arg2 ;
-(void)scaleToFitPlots:(id)arg1 ;
-(void)scaleToFitPlots:(id)arg1 forCoordinate:(int)arg2 ;
-(void)scaleBy:(float)arg1 aboutPoint:(CGPoint)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CPTPlotSpaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isDragging;
-(id<CPTPlotSpaceDelegate>)delegate;
-(id<NSCopying><NSCoding><NSObject>)identifier;
-(void)setIdentifier:(id<NSCopying><NSCoding><NSObject>)arg1 ;
-(id)debugQuickLookObject;
-(CPTGraph *)graph;
-(void)setGraph:(CPTGraph *)arg1 ;
-(void)setIsDragging:(char)arg1 ;
-(NSMutableDictionary *)categoryNames;
@end

