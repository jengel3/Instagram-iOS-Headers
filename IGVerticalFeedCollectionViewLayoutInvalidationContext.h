
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface IGVerticalFeedCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _ig_invalidateSupplementaryAttributes;

}

@property (assign,nonatomic) char ig_invalidateSupplementaryAttributes;              //@synthesize ig_invalidateSupplementaryAttributes=_ig_invalidateSupplementaryAttributes - In the implementation block
-(char)ig_invalidateSupplementaryAttributes;
-(void)setIg_invalidateSupplementaryAttributes:(char)arg1 ;
@end

