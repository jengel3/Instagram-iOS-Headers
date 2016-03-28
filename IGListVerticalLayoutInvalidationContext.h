
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSSet;

@interface IGListVerticalLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _invalidateEstimatedAttributes;
	NSSet* _invalidatedIndexPaths;

}

@property (assign,nonatomic) char invalidateEstimatedAttributes;              //@synthesize invalidateEstimatedAttributes=_invalidateEstimatedAttributes - In the implementation block
@property (nonatomic,copy) NSSet * invalidatedIndexPaths;                     //@synthesize invalidatedIndexPaths=_invalidatedIndexPaths - In the implementation block
-(char)invalidateEstimatedAttributes;
-(void)setInvalidateEstimatedAttributes:(char)arg1 ;
-(void)setInvalidatedIndexPaths:(NSSet *)arg1 ;
-(id)init;
-(id)description;
-(NSSet *)invalidatedIndexPaths;
@end

