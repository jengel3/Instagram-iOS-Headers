
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <Instagram/IGCollectionViewLayoutAdditions.h>

@class IGEstimatingFeedLayoutSectionCache, NSString;

@interface IGEstimatingFeedCollectionViewLayout : UICollectionViewLayout <IGCollectionViewLayoutAdditions> {

	char _userFloatingHeaders;
	float _supplementaryHeaderViewHeight;
	float _supplementaryFooterViewHeight;
	float _headerAdjustmentAmount;
	IGEstimatingFeedLayoutSectionCache* _sectionCache;

}

@property (nonatomic,readonly) IGEstimatingFeedLayoutSectionCache * sectionCache;                             //@synthesize sectionCache=_sectionCache - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEstimatingFeedCollectionViewLayoutDelegate> delegate; 
@property (nonatomic,readonly) char userFloatingHeaders;                                                      //@synthesize userFloatingHeaders=_userFloatingHeaders - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                             //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;                                             //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                                                    //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
-(float)headerAdjustmentAmount;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(float)supplementaryFooterViewHeight;
-(id)initWithFloatingHeaders:(char)arg1 ;
-(CGSize)contentOffsetFix;
-(void)setNeedsBoundsFix;
-(IGEstimatingFeedLayoutSectionCache *)sectionCache;
-(void)checkBoundsNeedFixing;
-(void)fixBoundsIfNeeded;
-(char)userFloatingHeaders;
-(id)sectionsBelowSection:(int)arg1 origin:(CGPoint)arg2 inRect:(CGRect)arg3 sectionCount:(int)arg4 ;
-(id)sectionsAboveSection:(int)arg1 origin:(CGPoint)arg2 inRect:(CGRect)arg3 sectionCount:(int)arg4 ;
-(id)sectionsAboveFirstSection:(id)arg1 inRect:(CGRect)arg2 sectionCount:(int)arg3 ;
-(id)sectionsBelowLastSection:(id)arg1 inRect:(CGRect)arg2 sectionCount:(int)arg3 ;
-(CGPoint)headerOffset;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(id<IGEstimatingFeedCollectionViewLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)sectionsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

