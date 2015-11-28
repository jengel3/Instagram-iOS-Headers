

#import <Instagram/Instagram-Structs.h>
@class IGEstimatingFeedLayoutSectionAttributes, NSMutableDictionary;

@interface IGEstimatingFeedLayoutSectionCache : NSObject {

	IGEstimatingFeedLayoutSectionAttributes* _firstSection;
	IGEstimatingFeedLayoutSectionAttributes* _lastSection;
	NSMutableDictionary* _sections;
	CGSize _averageSectionSize;
	CGRect _cachedArea;

}

@property (nonatomic,__weak,readonly) IGEstimatingFeedLayoutSectionAttributes * firstSection;              //@synthesize firstSection=_firstSection - In the implementation block
@property (nonatomic,__weak,readonly) IGEstimatingFeedLayoutSectionAttributes * lastSection;               //@synthesize lastSection=_lastSection - In the implementation block
@property (assign,nonatomic) CGRect cachedArea;                                                            //@synthesize cachedArea=_cachedArea - In the implementation block
@property (nonatomic,readonly) CGSize averageSectionSize;                                                  //@synthesize averageSectionSize=_averageSectionSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sections;                                               //@synthesize sections=_sections - In the implementation block
-(void)moveBy:(CGSize)arg1 ;
-(CGPoint)estimatedOriginForSection:(int)arg1 ;
-(void)addSectionAttributes:(id)arg1 ;
-(CGRect)cachedAreaOfRect:(CGRect)arg1 ;
-(id)knownAttributesInFrame:(CGRect)arg1 ;
-(int)estimatedSectionForPoint:(CGPoint)arg1 ;
-(id)initWithEstimatedSectionSize:(CGSize)arg1 ;
-(id)sectionAttributesForSection:(int)arg1 ;
-(CGRect)cachedArea;
-(void)setCachedArea:(CGRect)arg1 ;
-(IGEstimatingFeedLayoutSectionAttributes *)firstSection;
-(void)extendCachedArea:(CGRect)arg1 ;
-(id)unsortedKnownAttributesInFrame:(CGRect)arg1 ;
-(CGSize)averageSectionSize;
-(void)reset;
-(void)setSections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sections;
-(IGEstimatingFeedLayoutSectionAttributes *)lastSection;
@end

