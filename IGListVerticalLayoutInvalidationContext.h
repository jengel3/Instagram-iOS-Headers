
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSArray;

@interface IGListVerticalLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _invalidateEstimatedAttributes;
	NSArray* _updateItems;

}

@property (assign,nonatomic) char invalidateEstimatedAttributes;              //@synthesize invalidateEstimatedAttributes=_invalidateEstimatedAttributes - In the implementation block
@property (nonatomic,copy) NSArray * updateItems;                             //@synthesize updateItems=_updateItems - In the implementation block
-(char)invalidateEstimatedAttributes;
-(void)setInvalidateEstimatedAttributes:(char)arg1 ;
-(void)setUpdateItems:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)updateItems;
@end

