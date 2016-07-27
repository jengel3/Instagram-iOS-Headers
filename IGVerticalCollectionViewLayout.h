
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface IGVerticalCollectionViewLayout : UICollectionViewLayout {

	vector<IGSectionEntry, std::__1::allocator<IGSectionEntry> >* _sectionData;
	NSMutableDictionary* _attributesCache;
	char _cachedLayoutInvalid;
	NSMutableDictionary* _headerAttributesCache;
	char _stickyHeaders;
	float _stickyHeaderOriginYAdjustment;
	float _topContentInset;

}

@property (nonatomic,readonly) char stickyHeaders;                             //@synthesize stickyHeaders=_stickyHeaders - In the implementation block
@property (nonatomic,readonly) float topContentInset;                          //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) float stickyHeaderOriginYAdjustment;              //@synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment - In the implementation block
+(Class)invalidationContextClass;
-(NSRange)rangeOfSectionsInRect:(CGRect)arg1 ;
-(char)stickyHeaders;
-(float)stickyHeaderOriginYAdjustment;
-(id)initWithStickyHeaders:(char)arg1 topContentInset:(float)arg2 ;
-(void)setStickyHeaderOriginYAdjustment:(float)arg1 ;
-(void)cacheLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(float)topContentInset;
@end

