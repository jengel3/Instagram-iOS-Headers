
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface IGCollectionViewFlowLayout : UICollectionViewFlowLayout {

	char _stickyHeaders;
	float _stickyHeaderOriginYAdjustment;
	float _topContentInset;

}

@property (nonatomic,readonly) char stickyHeaders;                             //@synthesize stickyHeaders=_stickyHeaders - In the implementation block
@property (nonatomic,readonly) float topContentInset;                          //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) float stickyHeaderOriginYAdjustment;              //@synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment - In the implementation block
-(float)stickyHeaderOriginYAdjustment;
-(void)setStickyHeaderOriginYAdjustment:(float)arg1 ;
-(id)adjustZIndexForAttributes:(id)arg1 ;
-(char)stickyHeaders;
-(id)initWithStickyHeaders:(char)arg1 topContentInset:(float)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(float)topContentInset;
@end

