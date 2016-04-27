
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface IGCollectionViewFlowLayout : UICollectionViewFlowLayout {

	char _stickyHeaders;
	float _stickyHeaderOriginYAdjustment;

}

@property (assign,nonatomic) float stickyHeaderOriginYAdjustment;              //@synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment - In the implementation block
@property (nonatomic,readonly) char stickyHeaders;                             //@synthesize stickyHeaders=_stickyHeaders - In the implementation block
-(float)stickyHeaderOriginYAdjustment;
-(void)setStickyHeaderOriginYAdjustment:(float)arg1 ;
-(id)initWithStickyHeaders:(char)arg1 ;
-(char)stickyHeaders;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

