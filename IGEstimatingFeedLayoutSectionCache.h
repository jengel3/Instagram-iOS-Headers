

#import <Instagram/Instagram-Structs.h>
@class IGEstimatingFeedLayoutSectionAttributes, NSMutableDictionary;

@interface IGEstimatingFeedLayoutSectionCache : NSObject {

	IGEstimatingFeedLayoutSectionAttributes* _firstSection;
	IGEstimatingFeedLayoutSectionAttributes* _lastSection;
	float _supplementaryHeaderViewHeight;
	int _averageSampleCount;
	NSMutableDictionary* _sections;
	CGSize _averageSectionSize;
	CGRect _cachedArea;

}

@property (nonatomic,__weak,readonly) IGEstimatingFeedLayoutSectionAttributes * firstSection;              //@synthesize firstSection=_firstSection - In the implementation block
@property (nonatomic,__weak,readonly) IGEstimatingFeedLayoutSectionAttributes * lastSection;               //@synthesize lastSection=_lastSection - In the implementation block
@property (assign,nonatomic) CGRect cachedArea;                                                            //@synthesize cachedArea=_cachedArea - In the implementation block
@property (assign,nonatomic) CGSize averageSectionSize;                                                    //@synthesize averageSectionSize=_averageSectionSize - In the implementation block
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                          //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) int averageSampleCount;                                                       //@synthesize averageSampleCount=_averageSampleCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sections;                                               //@synthesize sections=_sections - In the implementation block
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(id)sectionAttributesForSection:(int)arg1 ;
-(void)moveSectionsBy:(CGSize)arg1 ;
-(CGPoint)estimatedOriginForSection:(int)arg1 ;
-(void)reloadCell:(id)arg1 inCollectionView:(id)arg2 ;
-(void)addSectionAttributes:(id)arg1 ;
-(CGRect)cachedArea;
-(id)knownAttributesInFrame:(CGRect)arg1 ;
-(int)estimatedSectionForPoint:(CGPoint)arg1 ;
-(char)needsSetEstimatedSectionSize;
-(void)setEstimatedSectionSize:(CGSize)arg1 ;
-(void)addSectionAttributes:(id)arg1 updateAverage:(char)arg2 ;
-(id)initWithEstimatedSectionSize:(CGSize)arg1 ;
-(void)setCachedArea:(CGRect)arg1 ;
-(int)averageSampleCount;
-(void)setAverageSectionSize:(CGSize)arg1 ;
-(void)setAverageSampleCount:(int)arg1 ;
-(CGSize)averageSectionSize;
-(IGEstimatingFeedLayoutSectionAttributes *)firstSection;
-(void)extendCachedArea:(CGRect)arg1 ;
-(void)updateAverageSectionSizeWithSize:(CGSize)arg1 ;
-(id)unsortedKnownAttributesInFrame:(CGRect)arg1 ;
-(char)sectionIsCached:(int)arg1 ;
-(void)moveSectionsBelowSection:(int)arg1 by:(CGSize)arg2 ;
-(id)init;
-(void)reset;
-(void)setSections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sections;
-(IGEstimatingFeedLayoutSectionAttributes *)lastSection;
@end

