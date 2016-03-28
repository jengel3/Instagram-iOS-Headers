
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface IGCollectionViewFlowLayout : UICollectionViewFlowLayout {

	char _stickyHeaders;
	float _headerAdjustmentAmount;

}

@property (assign,nonatomic) float headerAdjustmentAmount;              //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (nonatomic,readonly) char stickyHeaders;                      //@synthesize stickyHeaders=_stickyHeaders - In the implementation block
-(float)headerAdjustmentAmount;
-(id)initWithStickyHeaders:(char)arg1 ;
-(char)stickyHeaders;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

