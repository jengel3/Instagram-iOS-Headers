
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayout.h>

@interface IGSquaresLayout : IGCollectionViewLayout {

	int _numberOfItems;

}
+(float)itemDimension;
+(CGSize)itemSize;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(int)numberOfItemsInSection:(int)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(NSRange)itemsInRect:(CGRect)arg1 ;
@end

