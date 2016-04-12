
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface IGDirectThreadLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _igInvalidateCollectionViewContentSize;
	char _igInvalidateAttributes;
	char _igInvalidateEverything;

}

@property (assign,nonatomic) char igInvalidateCollectionViewContentSize;              //@synthesize igInvalidateCollectionViewContentSize=_igInvalidateCollectionViewContentSize - In the implementation block
@property (assign,nonatomic) char igInvalidateAttributes;                             //@synthesize igInvalidateAttributes=_igInvalidateAttributes - In the implementation block
@property (assign,nonatomic) char igInvalidateEverything;                             //@synthesize igInvalidateEverything=_igInvalidateEverything - In the implementation block
-(void)setIgInvalidateEverything:(char)arg1 ;
-(void)mergeWithInvalidationContext:(id)arg1 ;
-(char)igInvalidateAttributes;
-(char)igInvalidateCollectionViewContentSize;
-(void)setIgInvalidateCollectionViewContentSize:(char)arg1 ;
-(char)igInvalidateEverything;
-(void)setIgInvalidateAttributes:(char)arg1 ;
-(id)description;
@end

