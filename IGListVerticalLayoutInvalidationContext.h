
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSArray;

@interface IGListVerticalLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _invalidateEstimatedAttributes;
	NSArray* _invalidatedIndexPaths;

}

@property (assign,nonatomic) char invalidateEstimatedAttributes;              //@synthesize invalidateEstimatedAttributes=_invalidateEstimatedAttributes - In the implementation block
@property (nonatomic,copy) NSArray * invalidatedIndexPaths;                   //@synthesize invalidatedIndexPaths=_invalidatedIndexPaths - In the implementation block
-(char)invalidateEstimatedAttributes;
-(void)setInvalidatedIndexPaths:(NSArray *)arg1 ;
-(void)setInvalidateEstimatedAttributes:(char)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)invalidatedIndexPaths;
@end

